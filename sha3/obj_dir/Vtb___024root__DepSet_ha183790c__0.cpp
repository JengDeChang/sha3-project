// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_ATTR_COLD void Vtb___024root___eval_initial__TOP(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb___024root___eval_initial__TOP(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__clk__0 
        = vlSelfRef.tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb__DOT__rst_n__0 
        = vlSelfRef.tb__DOT__rst_n;
}

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__clk = 0U;
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "sim/tb.sv", 
                                             74);
        vlSelfRef.tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb__DOT__clk)));
    }
}

VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1__0(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__1(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__2(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__3(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__4(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__5(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__6(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1__7(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__8(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__9(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__10(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__11(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__12(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__13(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1__14(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__15(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__16(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__17(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__18(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__19(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__20(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1__21(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__22(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__23(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__24(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__25(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__26(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__27(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1__28(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__29(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__30(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__31(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__32(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__33(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__34(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1__35(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__36(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__37(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__38(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__39(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__40(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__41(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1__42(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__43(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__44(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__45(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__46(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__47(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__48(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1__49(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__50(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__51(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__52(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__53(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__54(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__55(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1__56(Vtb___024root* vlSelf);
VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1__57(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial__TOP__Vtiming__1__58(Vtb___024root* vlSelf);

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__Vtiming__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await Vtb___024root___eval_initial__TOP__Vtiming__1__0(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__1(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__2(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__3(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__4(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__5(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__6(vlSelf);
    co_await Vtb___024root___eval_initial__TOP__Vtiming__1__7(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__8(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__9(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__10(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__11(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__12(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__13(vlSelf);
    co_await Vtb___024root___eval_initial__TOP__Vtiming__1__14(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__15(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__16(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__17(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__18(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__19(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__20(vlSelf);
    co_await Vtb___024root___eval_initial__TOP__Vtiming__1__21(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__22(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__23(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__24(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__25(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__26(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__27(vlSelf);
    co_await Vtb___024root___eval_initial__TOP__Vtiming__1__28(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__29(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__30(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__31(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__32(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__33(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__34(vlSelf);
    co_await Vtb___024root___eval_initial__TOP__Vtiming__1__35(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__36(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__37(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__38(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__39(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__40(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__41(vlSelf);
    co_await Vtb___024root___eval_initial__TOP__Vtiming__1__42(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__43(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__44(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__45(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__46(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__47(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__48(vlSelf);
    co_await Vtb___024root___eval_initial__TOP__Vtiming__1__49(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__50(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__51(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__52(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__53(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__54(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__55(vlSelf);
    co_await Vtb___024root___eval_initial__TOP__Vtiming__1__56(vlSelf);
    co_await Vtb___024root___eval_initial__TOP__Vtiming__1__57(vlSelf);
    Vtb___024root___eval_initial__TOP__Vtiming__1__58(vlSelf);
}

void Vtb___024root___eval_initial__TOP__Vtiming__1__1(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__1\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb__DOT__sponge_reference__3__unnamedblk18__DOT__i;
    __Vtask_tb__DOT__sponge_reference__3__unnamedblk18__DOT__i = 0;
    IData/*31:0*/ __Vtask_tb__DOT__keccak_p1600__7__rounds_i;
    __Vtask_tb__DOT__keccak_p1600__7__rounds_i = 0;
    IData/*31:0*/ __Vtask_tb__DOT__keccak_p1600__7__round_offset_i;
    __Vtask_tb__DOT__keccak_p1600__7__round_offset_i = 0;
    IData/*31:0*/ __Vtask_tb__DOT__keccak_p1600__7__unnamedblk5__DOT__round;
    __Vtask_tb__DOT__keccak_p1600__7__unnamedblk5__DOT__round = 0;
    IData/*31:0*/ __Vtask_tb__DOT__keccak_p1600__7__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx;
    __Vtask_tb__DOT__keccak_p1600__7__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx = 0;
    VlUnpacked<VlUnpacked<QData/*63:0*/, 5>, 5> __Vtask_tb__DOT__keccak_p1600__7__a;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            __Vtask_tb__DOT__keccak_p1600__7__a[__Vi0][__Vi1] = 0;
        }
    }
    VlUnpacked<VlUnpacked<QData/*63:0*/, 5>, 5> __Vtask_tb__DOT__keccak_p1600__7__b;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            __Vtask_tb__DOT__keccak_p1600__7__b[__Vi0][__Vi1] = 0;
        }
    }
    VlUnpacked<QData/*63:0*/, 5> __Vtask_tb__DOT__keccak_p1600__7__c;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb__DOT__keccak_p1600__7__c[__Vi0] = 0;
    }
    VlUnpacked<QData/*63:0*/, 5> __Vtask_tb__DOT__keccak_p1600__7__d;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb__DOT__keccak_p1600__7__d[__Vi0] = 0;
    }
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__8__Vfuncout;
    __Vfunc_tb__DOT__load_lane__8__Vfuncout = 0;
    VlUnpacked<CData/*7:0*/, 200> __Vfunc_tb__DOT__load_lane__8__state;
    for (int __Vi0 = 0; __Vi0 < 200; ++__Vi0) {
        __Vfunc_tb__DOT__load_lane__8__state[__Vi0] = 0;
    }
    IData/*31:0*/ __Vfunc_tb__DOT__load_lane__8__x;
    __Vfunc_tb__DOT__load_lane__8__x = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__load_lane__8__y;
    __Vfunc_tb__DOT__load_lane__8__y = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__8__lane;
    __Vfunc_tb__DOT__load_lane__8__lane = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__9__Vfuncout;
    __Vfunc_tb__DOT__rol64__9__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__9__value;
    __Vfunc_tb__DOT__rol64__9__value = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rol64__9__sh;
    __Vfunc_tb__DOT__rol64__9__sh = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__10__Vfuncout;
    __Vfunc_tb__DOT__rol64__10__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__10__value;
    __Vfunc_tb__DOT__rol64__10__value = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rol64__10__sh;
    __Vfunc_tb__DOT__rol64__10__sh = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__11__x;
    __Vfunc_tb__DOT__rho_offset__11__x = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__11__y;
    __Vfunc_tb__DOT__rho_offset__11__y = 0;
    QData/*63:0*/ __Vfunc_rc__12__Vfuncout;
    __Vfunc_rc__12__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rc__12__round;
    __Vfunc_rc__12__round = 0;
    IData/*31:0*/ __Vtask_tb__DOT__store_lane__13__x;
    __Vtask_tb__DOT__store_lane__13__x = 0;
    IData/*31:0*/ __Vtask_tb__DOT__store_lane__13__y;
    __Vtask_tb__DOT__store_lane__13__y = 0;
    QData/*63:0*/ __Vtask_tb__DOT__store_lane__13__lane;
    __Vtask_tb__DOT__store_lane__13__lane = 0;
    QData/*63:0*/ __Vtemp_2;
    // Body
    while (VL_LTES_III(32, (vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg_idx 
                            + vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__rate), vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg.size())) {
        __Vtask_tb__DOT__sponge_reference__3__unnamedblk18__DOT__i = 0U;
        while (VL_LTS_III(32, __Vtask_tb__DOT__sponge_reference__3__unnamedblk18__DOT__i, vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__rate)) {
            vlSelfRef.tb__DOT____Vlvbound_h570ad72a__0 
                = (((0xc7U >= (0xffU & __Vtask_tb__DOT__sponge_reference__3__unnamedblk18__DOT__i))
                     ? vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                    [(0xffU & __Vtask_tb__DOT__sponge_reference__3__unnamedblk18__DOT__i)]
                     : 0U) ^ vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg.at(
                                                                                (vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg_idx 
                                                                                + __Vtask_tb__DOT__sponge_reference__3__unnamedblk18__DOT__i)));
            if (VL_LIKELY(((0xc7U >= (0xffU & __Vtask_tb__DOT__sponge_reference__3__unnamedblk18__DOT__i))))) {
                vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                       & __Vtask_tb__DOT__sponge_reference__3__unnamedblk18__DOT__i)] 
                    = vlSelfRef.tb__DOT____Vlvbound_h570ad72a__0;
            }
            __Vtask_tb__DOT__sponge_reference__3__unnamedblk18__DOT__i 
                = ((IData)(1U) + __Vtask_tb__DOT__sponge_reference__3__unnamedblk18__DOT__i);
        }
        __Vtask_tb__DOT__keccak_p1600__7__round_offset_i 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__round_offset_i;
        __Vtask_tb__DOT__keccak_p1600__7__rounds_i 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__rounds_i;
        __Vfunc_tb__DOT__load_lane__8__y = 0U;
        __Vfunc_tb__DOT__load_lane__8__x = 0U;
        IData/*31:0*/ __Vilp1;
        __Vilp1 = 0U;
        while ((__Vilp1 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp1] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp1];
            __Vilp1 = ((IData)(1U) + __Vilp1);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[0U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 1U;
        __Vfunc_tb__DOT__load_lane__8__x = 0U;
        IData/*31:0*/ __Vilp2;
        __Vilp2 = 0U;
        while ((__Vilp2 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp2] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp2];
            __Vilp2 = ((IData)(1U) + __Vilp2);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[0U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 2U;
        __Vfunc_tb__DOT__load_lane__8__x = 0U;
        IData/*31:0*/ __Vilp3;
        __Vilp3 = 0U;
        while ((__Vilp3 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp3] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp3];
            __Vilp3 = ((IData)(1U) + __Vilp3);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[0U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 3U;
        __Vfunc_tb__DOT__load_lane__8__x = 0U;
        IData/*31:0*/ __Vilp4;
        __Vilp4 = 0U;
        while ((__Vilp4 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp4] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp4];
            __Vilp4 = ((IData)(1U) + __Vilp4);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[0U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 4U;
        __Vfunc_tb__DOT__load_lane__8__x = 0U;
        IData/*31:0*/ __Vilp5;
        __Vilp5 = 0U;
        while ((__Vilp5 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp5] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp5];
            __Vilp5 = ((IData)(1U) + __Vilp5);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[0U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 0U;
        __Vfunc_tb__DOT__load_lane__8__x = 1U;
        IData/*31:0*/ __Vilp6;
        __Vilp6 = 0U;
        while ((__Vilp6 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp6] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp6];
            __Vilp6 = ((IData)(1U) + __Vilp6);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[1U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 1U;
        __Vfunc_tb__DOT__load_lane__8__x = 1U;
        IData/*31:0*/ __Vilp7;
        __Vilp7 = 0U;
        while ((__Vilp7 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp7] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp7];
            __Vilp7 = ((IData)(1U) + __Vilp7);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[1U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 2U;
        __Vfunc_tb__DOT__load_lane__8__x = 1U;
        IData/*31:0*/ __Vilp8;
        __Vilp8 = 0U;
        while ((__Vilp8 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp8] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp8];
            __Vilp8 = ((IData)(1U) + __Vilp8);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[1U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 3U;
        __Vfunc_tb__DOT__load_lane__8__x = 1U;
        IData/*31:0*/ __Vilp9;
        __Vilp9 = 0U;
        while ((__Vilp9 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp9] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp9];
            __Vilp9 = ((IData)(1U) + __Vilp9);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[1U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 4U;
        __Vfunc_tb__DOT__load_lane__8__x = 1U;
        IData/*31:0*/ __Vilp10;
        __Vilp10 = 0U;
        while ((__Vilp10 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp10] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp10];
            __Vilp10 = ((IData)(1U) + __Vilp10);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[1U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 0U;
        __Vfunc_tb__DOT__load_lane__8__x = 2U;
        IData/*31:0*/ __Vilp11;
        __Vilp11 = 0U;
        while ((__Vilp11 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp11] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp11];
            __Vilp11 = ((IData)(1U) + __Vilp11);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[2U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 1U;
        __Vfunc_tb__DOT__load_lane__8__x = 2U;
        IData/*31:0*/ __Vilp12;
        __Vilp12 = 0U;
        while ((__Vilp12 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp12] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp12];
            __Vilp12 = ((IData)(1U) + __Vilp12);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[2U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 2U;
        __Vfunc_tb__DOT__load_lane__8__x = 2U;
        IData/*31:0*/ __Vilp13;
        __Vilp13 = 0U;
        while ((__Vilp13 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp13] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp13];
            __Vilp13 = ((IData)(1U) + __Vilp13);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[2U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 3U;
        __Vfunc_tb__DOT__load_lane__8__x = 2U;
        IData/*31:0*/ __Vilp14;
        __Vilp14 = 0U;
        while ((__Vilp14 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp14] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp14];
            __Vilp14 = ((IData)(1U) + __Vilp14);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[2U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 4U;
        __Vfunc_tb__DOT__load_lane__8__x = 2U;
        IData/*31:0*/ __Vilp15;
        __Vilp15 = 0U;
        while ((__Vilp15 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp15] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp15];
            __Vilp15 = ((IData)(1U) + __Vilp15);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[2U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 0U;
        __Vfunc_tb__DOT__load_lane__8__x = 3U;
        IData/*31:0*/ __Vilp16;
        __Vilp16 = 0U;
        while ((__Vilp16 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp16] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp16];
            __Vilp16 = ((IData)(1U) + __Vilp16);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[3U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 1U;
        __Vfunc_tb__DOT__load_lane__8__x = 3U;
        IData/*31:0*/ __Vilp17;
        __Vilp17 = 0U;
        while ((__Vilp17 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp17] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp17];
            __Vilp17 = ((IData)(1U) + __Vilp17);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[3U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 2U;
        __Vfunc_tb__DOT__load_lane__8__x = 3U;
        IData/*31:0*/ __Vilp18;
        __Vilp18 = 0U;
        while ((__Vilp18 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp18] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp18];
            __Vilp18 = ((IData)(1U) + __Vilp18);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[3U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 3U;
        __Vfunc_tb__DOT__load_lane__8__x = 3U;
        IData/*31:0*/ __Vilp19;
        __Vilp19 = 0U;
        while ((__Vilp19 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp19] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp19];
            __Vilp19 = ((IData)(1U) + __Vilp19);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[3U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 4U;
        __Vfunc_tb__DOT__load_lane__8__x = 3U;
        IData/*31:0*/ __Vilp20;
        __Vilp20 = 0U;
        while ((__Vilp20 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp20] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp20];
            __Vilp20 = ((IData)(1U) + __Vilp20);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[3U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 0U;
        __Vfunc_tb__DOT__load_lane__8__x = 4U;
        IData/*31:0*/ __Vilp21;
        __Vilp21 = 0U;
        while ((__Vilp21 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp21] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp21];
            __Vilp21 = ((IData)(1U) + __Vilp21);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[4U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 1U;
        __Vfunc_tb__DOT__load_lane__8__x = 4U;
        IData/*31:0*/ __Vilp22;
        __Vilp22 = 0U;
        while ((__Vilp22 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp22] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp22];
            __Vilp22 = ((IData)(1U) + __Vilp22);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[4U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 2U;
        __Vfunc_tb__DOT__load_lane__8__x = 4U;
        IData/*31:0*/ __Vilp23;
        __Vilp23 = 0U;
        while ((__Vilp23 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp23] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp23];
            __Vilp23 = ((IData)(1U) + __Vilp23);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[4U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 3U;
        __Vfunc_tb__DOT__load_lane__8__x = 4U;
        IData/*31:0*/ __Vilp24;
        __Vilp24 = 0U;
        while ((__Vilp24 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp24] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp24];
            __Vilp24 = ((IData)(1U) + __Vilp24);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[4U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vfunc_tb__DOT__load_lane__8__y = 4U;
        __Vfunc_tb__DOT__load_lane__8__x = 4U;
        IData/*31:0*/ __Vilp25;
        __Vilp25 = 0U;
        while ((__Vilp25 <= 0xc7U)) {
            __Vfunc_tb__DOT__load_lane__8__state[__Vilp25] 
                = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [__Vilp25];
            __Vilp25 = ((IData)(1U) + __Vilp25);
        }
        __Vfunc_tb__DOT__load_lane__8__lane = 0ULL;
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffff00ULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | (IData)((IData)(
                                                                 ((0xc7U 
                                                                   >= 
                                                                   (0xffU 
                                                                    & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))
                                                                   ? 
                                                                  __Vfunc_tb__DOT__load_lane__8__state
                                                                  [
                                                                  (0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))]
                                                                   : 0U))));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffff00ffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(1U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(1U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 8U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffff00ffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(2U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(2U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x10U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffff00ffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(3U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(3U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x18U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffff00ffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(4U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(4U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x20U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffff00ffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(5U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(5U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x28U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xff00ffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(6U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(6U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x30U));
        __Vfunc_tb__DOT__load_lane__8__lane = ((0xffffffffffffffULL 
                                                & __Vfunc_tb__DOT__load_lane__8__lane) 
                                               | ((QData)((IData)(
                                                                  ((0xc7U 
                                                                    >= 
                                                                    (0xffU 
                                                                     & ((IData)(7U) 
                                                                        + 
                                                                        (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                         + 
                                                                         VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y)))))
                                                                    ? 
                                                                   __Vfunc_tb__DOT__load_lane__8__state
                                                                   [
                                                                   (0xffU 
                                                                    & ((IData)(7U) 
                                                                       + 
                                                                       (VL_MULS_III(32, (IData)(8U), __Vfunc_tb__DOT__load_lane__8__x) 
                                                                        + 
                                                                        VL_MULS_III(32, (IData)(0x28U), __Vfunc_tb__DOT__load_lane__8__y))))]
                                                                    : 0U))) 
                                                  << 0x38U));
        __Vfunc_tb__DOT__load_lane__8__Vfuncout = __Vfunc_tb__DOT__load_lane__8__lane;
        vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 
            = __Vfunc_tb__DOT__load_lane__8__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__7__a[4U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
        __Vtask_tb__DOT__keccak_p1600__7__unnamedblk5__DOT__round = 0U;
        while (VL_LTS_III(32, __Vtask_tb__DOT__keccak_p1600__7__unnamedblk5__DOT__round, __Vtask_tb__DOT__keccak_p1600__7__rounds_i)) {
            __Vtask_tb__DOT__keccak_p1600__7__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx 
                = (__Vtask_tb__DOT__keccak_p1600__7__unnamedblk5__DOT__round 
                   + __Vtask_tb__DOT__keccak_p1600__7__round_offset_i);
            vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
                = ((((__Vtask_tb__DOT__keccak_p1600__7__a
                      [0U][0U] ^ __Vtask_tb__DOT__keccak_p1600__7__a
                      [0U][1U]) ^ __Vtask_tb__DOT__keccak_p1600__7__a
                     [0U][2U]) ^ __Vtask_tb__DOT__keccak_p1600__7__a
                    [0U][3U]) ^ __Vtask_tb__DOT__keccak_p1600__7__a
                   [0U][4U]);
            __Vtask_tb__DOT__keccak_p1600__7__c[0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
            vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
                = ((((__Vtask_tb__DOT__keccak_p1600__7__a
                      [1U][0U] ^ __Vtask_tb__DOT__keccak_p1600__7__a
                      [1U][1U]) ^ __Vtask_tb__DOT__keccak_p1600__7__a
                     [1U][2U]) ^ __Vtask_tb__DOT__keccak_p1600__7__a
                    [1U][3U]) ^ __Vtask_tb__DOT__keccak_p1600__7__a
                   [1U][4U]);
            __Vtask_tb__DOT__keccak_p1600__7__c[1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
            vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
                = ((((__Vtask_tb__DOT__keccak_p1600__7__a
                      [2U][0U] ^ __Vtask_tb__DOT__keccak_p1600__7__a
                      [2U][1U]) ^ __Vtask_tb__DOT__keccak_p1600__7__a
                     [2U][2U]) ^ __Vtask_tb__DOT__keccak_p1600__7__a
                    [2U][3U]) ^ __Vtask_tb__DOT__keccak_p1600__7__a
                   [2U][4U]);
            __Vtask_tb__DOT__keccak_p1600__7__c[2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
            vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
                = ((((__Vtask_tb__DOT__keccak_p1600__7__a
                      [3U][0U] ^ __Vtask_tb__DOT__keccak_p1600__7__a
                      [3U][1U]) ^ __Vtask_tb__DOT__keccak_p1600__7__a
                     [3U][2U]) ^ __Vtask_tb__DOT__keccak_p1600__7__a
                    [3U][3U]) ^ __Vtask_tb__DOT__keccak_p1600__7__a
                   [3U][4U]);
            __Vtask_tb__DOT__keccak_p1600__7__c[3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
            vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
                = ((((__Vtask_tb__DOT__keccak_p1600__7__a
                      [4U][0U] ^ __Vtask_tb__DOT__keccak_p1600__7__a
                      [4U][1U]) ^ __Vtask_tb__DOT__keccak_p1600__7__a
                     [4U][2U]) ^ __Vtask_tb__DOT__keccak_p1600__7__a
                    [4U][3U]) ^ __Vtask_tb__DOT__keccak_p1600__7__a
                   [4U][4U]);
            __Vtask_tb__DOT__keccak_p1600__7__c[4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
            vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__c
                   [4U] ^ ([&]() {
                        __Vfunc_tb__DOT__rol64__9__sh = 1U;
                        __Vfunc_tb__DOT__rol64__9__value 
                            = __Vtask_tb__DOT__keccak_p1600__7__c
                            [1U];
                        __Vfunc_tb__DOT__rol64__9__Vfuncout 
                            = ((0U == __Vfunc_tb__DOT__rol64__9__sh)
                                ? __Vfunc_tb__DOT__rol64__9__value
                                : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__9__value, __Vfunc_tb__DOT__rol64__9__sh) 
                                   | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__9__value, 
                                                   ((IData)(0x40U) 
                                                    - __Vfunc_tb__DOT__rol64__9__sh))));
                    }(), __Vfunc_tb__DOT__rol64__9__Vfuncout));
            __Vtask_tb__DOT__keccak_p1600__7__d[0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
            vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__c
                   [0U] ^ ([&]() {
                        __Vfunc_tb__DOT__rol64__9__sh = 1U;
                        __Vfunc_tb__DOT__rol64__9__value 
                            = __Vtask_tb__DOT__keccak_p1600__7__c
                            [2U];
                        __Vfunc_tb__DOT__rol64__9__Vfuncout 
                            = ((0U == __Vfunc_tb__DOT__rol64__9__sh)
                                ? __Vfunc_tb__DOT__rol64__9__value
                                : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__9__value, __Vfunc_tb__DOT__rol64__9__sh) 
                                   | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__9__value, 
                                                   ((IData)(0x40U) 
                                                    - __Vfunc_tb__DOT__rol64__9__sh))));
                    }(), __Vfunc_tb__DOT__rol64__9__Vfuncout));
            __Vtask_tb__DOT__keccak_p1600__7__d[1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
            vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__c
                   [1U] ^ ([&]() {
                        __Vfunc_tb__DOT__rol64__9__sh = 1U;
                        __Vfunc_tb__DOT__rol64__9__value 
                            = __Vtask_tb__DOT__keccak_p1600__7__c
                            [3U];
                        __Vfunc_tb__DOT__rol64__9__Vfuncout 
                            = ((0U == __Vfunc_tb__DOT__rol64__9__sh)
                                ? __Vfunc_tb__DOT__rol64__9__value
                                : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__9__value, __Vfunc_tb__DOT__rol64__9__sh) 
                                   | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__9__value, 
                                                   ((IData)(0x40U) 
                                                    - __Vfunc_tb__DOT__rol64__9__sh))));
                    }(), __Vfunc_tb__DOT__rol64__9__Vfuncout));
            __Vtask_tb__DOT__keccak_p1600__7__d[2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
            vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__c
                   [2U] ^ ([&]() {
                        __Vfunc_tb__DOT__rol64__9__sh = 1U;
                        __Vfunc_tb__DOT__rol64__9__value 
                            = __Vtask_tb__DOT__keccak_p1600__7__c
                            [4U];
                        __Vfunc_tb__DOT__rol64__9__Vfuncout 
                            = ((0U == __Vfunc_tb__DOT__rol64__9__sh)
                                ? __Vfunc_tb__DOT__rol64__9__value
                                : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__9__value, __Vfunc_tb__DOT__rol64__9__sh) 
                                   | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__9__value, 
                                                   ((IData)(0x40U) 
                                                    - __Vfunc_tb__DOT__rol64__9__sh))));
                    }(), __Vfunc_tb__DOT__rol64__9__Vfuncout));
            __Vtask_tb__DOT__keccak_p1600__7__d[3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
            vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__c
                   [3U] ^ ([&]() {
                        __Vfunc_tb__DOT__rol64__9__sh = 1U;
                        __Vfunc_tb__DOT__rol64__9__value 
                            = __Vtask_tb__DOT__keccak_p1600__7__c
                            [0U];
                        __Vfunc_tb__DOT__rol64__9__Vfuncout 
                            = ((0U == __Vfunc_tb__DOT__rol64__9__sh)
                                ? __Vfunc_tb__DOT__rol64__9__value
                                : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__9__value, __Vfunc_tb__DOT__rol64__9__sh) 
                                   | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__9__value, 
                                                   ((IData)(0x40U) 
                                                    - __Vfunc_tb__DOT__rol64__9__sh))));
                    }(), __Vfunc_tb__DOT__rol64__9__Vfuncout));
            __Vtask_tb__DOT__keccak_p1600__7__d[4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [0U][0U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [0U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[0U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [0U][1U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [0U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[0U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [0U][2U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [0U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[0U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [0U][3U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [0U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[0U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [0U][4U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [0U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[0U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [1U][0U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [1U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[1U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [1U][1U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [1U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[1U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [1U][2U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [1U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[1U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [1U][3U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [1U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[1U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [1U][4U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [1U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[1U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [2U][0U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [2U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[2U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [2U][1U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [2U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[2U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [2U][2U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [2U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[2U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [2U][3U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [2U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[2U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [2U][4U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [2U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[2U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [3U][0U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [3U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[3U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [3U][1U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [3U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[3U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [3U][2U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [3U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[3U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [3U][3U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [3U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[3U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [3U][4U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [3U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[3U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [4U][0U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [4U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[4U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [4U][1U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [4U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[4U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [4U][2U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [4U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[4U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [4U][3U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [4U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[4U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__a
                   [4U][4U] ^ __Vtask_tb__DOT__keccak_p1600__7__d
                   [4U]);
            __Vtask_tb__DOT__keccak_p1600__7__a[4U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 0U;
            __Vfunc_tb__DOT__rho_offset__11__x = 0U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel202;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel202;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel202;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel202;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel202;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel202;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel202;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel202;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel202;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel202;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel202;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel202;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel202;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel202;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel202;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel202;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel202;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel202;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel202;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel202;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel202;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel202;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel202;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel202;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel202;
                }
                __Vlabel202: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [0U][0U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[0U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 1U;
            __Vfunc_tb__DOT__rho_offset__11__x = 0U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel203;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel203;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel203;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel203;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel203;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel203;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel203;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel203;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel203;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel203;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel203;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel203;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel203;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel203;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel203;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel203;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel203;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel203;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel203;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel203;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel203;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel203;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel203;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel203;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel203;
                }
                __Vlabel203: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [0U][1U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[1U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 2U;
            __Vfunc_tb__DOT__rho_offset__11__x = 0U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel204;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel204;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel204;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel204;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel204;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel204;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel204;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel204;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel204;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel204;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel204;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel204;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel204;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel204;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel204;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel204;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel204;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel204;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel204;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel204;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel204;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel204;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel204;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel204;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel204;
                }
                __Vlabel204: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [0U][2U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[2U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 3U;
            __Vfunc_tb__DOT__rho_offset__11__x = 0U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel205;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel205;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel205;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel205;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel205;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel205;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel205;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel205;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel205;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel205;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel205;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel205;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel205;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel205;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel205;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel205;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel205;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel205;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel205;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel205;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel205;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel205;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel205;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel205;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel205;
                }
                __Vlabel205: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [0U][3U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[3U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 4U;
            __Vfunc_tb__DOT__rho_offset__11__x = 0U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel206;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel206;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel206;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel206;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel206;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel206;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel206;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel206;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel206;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel206;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel206;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel206;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel206;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel206;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel206;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel206;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel206;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel206;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel206;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel206;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel206;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel206;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel206;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel206;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel206;
                }
                __Vlabel206: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [0U][4U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[4U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 0U;
            __Vfunc_tb__DOT__rho_offset__11__x = 1U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel207;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel207;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel207;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel207;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel207;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel207;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel207;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel207;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel207;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel207;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel207;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel207;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel207;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel207;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel207;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel207;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel207;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel207;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel207;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel207;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel207;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel207;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel207;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel207;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel207;
                }
                __Vlabel207: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [1U][0U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[0U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 1U;
            __Vfunc_tb__DOT__rho_offset__11__x = 1U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel208;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel208;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel208;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel208;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel208;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel208;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel208;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel208;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel208;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel208;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel208;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel208;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel208;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel208;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel208;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel208;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel208;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel208;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel208;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel208;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel208;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel208;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel208;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel208;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel208;
                }
                __Vlabel208: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [1U][1U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[1U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 2U;
            __Vfunc_tb__DOT__rho_offset__11__x = 1U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel209;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel209;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel209;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel209;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel209;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel209;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel209;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel209;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel209;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel209;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel209;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel209;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel209;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel209;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel209;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel209;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel209;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel209;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel209;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel209;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel209;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel209;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel209;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel209;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel209;
                }
                __Vlabel209: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [1U][2U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[2U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 3U;
            __Vfunc_tb__DOT__rho_offset__11__x = 1U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel210;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel210;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel210;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel210;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel210;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel210;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel210;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel210;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel210;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel210;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel210;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel210;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel210;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel210;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel210;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel210;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel210;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel210;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel210;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel210;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel210;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel210;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel210;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel210;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel210;
                }
                __Vlabel210: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [1U][3U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[3U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 4U;
            __Vfunc_tb__DOT__rho_offset__11__x = 1U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel211;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel211;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel211;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel211;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel211;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel211;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel211;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel211;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel211;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel211;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel211;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel211;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel211;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel211;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel211;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel211;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel211;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel211;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel211;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel211;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel211;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel211;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel211;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel211;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel211;
                }
                __Vlabel211: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [1U][4U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[4U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 0U;
            __Vfunc_tb__DOT__rho_offset__11__x = 2U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel212;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel212;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel212;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel212;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel212;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel212;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel212;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel212;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel212;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel212;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel212;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel212;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel212;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel212;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel212;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel212;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel212;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel212;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel212;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel212;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel212;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel212;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel212;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel212;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel212;
                }
                __Vlabel212: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [2U][0U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[0U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 1U;
            __Vfunc_tb__DOT__rho_offset__11__x = 2U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel213;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel213;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel213;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel213;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel213;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel213;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel213;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel213;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel213;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel213;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel213;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel213;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel213;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel213;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel213;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel213;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel213;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel213;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel213;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel213;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel213;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel213;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel213;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel213;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel213;
                }
                __Vlabel213: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [2U][1U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[1U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 2U;
            __Vfunc_tb__DOT__rho_offset__11__x = 2U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel214;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel214;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel214;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel214;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel214;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel214;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel214;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel214;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel214;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel214;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel214;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel214;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel214;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel214;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel214;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel214;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel214;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel214;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel214;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel214;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel214;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel214;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel214;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel214;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel214;
                }
                __Vlabel214: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [2U][2U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[2U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 3U;
            __Vfunc_tb__DOT__rho_offset__11__x = 2U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel215;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel215;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel215;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel215;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel215;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel215;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel215;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel215;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel215;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel215;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel215;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel215;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel215;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel215;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel215;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel215;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel215;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel215;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel215;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel215;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel215;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel215;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel215;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel215;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel215;
                }
                __Vlabel215: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [2U][3U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[3U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 4U;
            __Vfunc_tb__DOT__rho_offset__11__x = 2U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel216;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel216;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel216;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel216;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel216;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel216;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel216;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel216;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel216;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel216;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel216;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel216;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel216;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel216;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel216;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel216;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel216;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel216;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel216;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel216;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel216;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel216;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel216;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel216;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel216;
                }
                __Vlabel216: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [2U][4U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[4U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 0U;
            __Vfunc_tb__DOT__rho_offset__11__x = 3U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel217;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel217;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel217;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel217;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel217;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel217;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel217;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel217;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel217;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel217;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel217;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel217;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel217;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel217;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel217;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel217;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel217;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel217;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel217;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel217;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel217;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel217;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel217;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel217;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel217;
                }
                __Vlabel217: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [3U][0U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[0U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 1U;
            __Vfunc_tb__DOT__rho_offset__11__x = 3U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel218;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel218;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel218;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel218;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel218;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel218;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel218;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel218;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel218;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel218;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel218;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel218;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel218;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel218;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel218;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel218;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel218;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel218;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel218;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel218;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel218;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel218;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel218;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel218;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel218;
                }
                __Vlabel218: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [3U][1U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[1U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 2U;
            __Vfunc_tb__DOT__rho_offset__11__x = 3U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel219;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel219;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel219;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel219;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel219;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel219;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel219;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel219;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel219;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel219;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel219;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel219;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel219;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel219;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel219;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel219;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel219;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel219;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel219;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel219;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel219;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel219;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel219;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel219;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel219;
                }
                __Vlabel219: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [3U][2U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[2U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 3U;
            __Vfunc_tb__DOT__rho_offset__11__x = 3U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel220;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel220;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel220;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel220;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel220;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel220;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel220;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel220;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel220;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel220;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel220;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel220;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel220;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel220;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel220;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel220;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel220;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel220;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel220;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel220;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel220;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel220;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel220;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel220;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel220;
                }
                __Vlabel220: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [3U][3U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[3U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 4U;
            __Vfunc_tb__DOT__rho_offset__11__x = 3U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel221;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel221;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel221;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel221;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel221;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel221;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel221;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel221;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel221;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel221;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel221;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel221;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel221;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel221;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel221;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel221;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel221;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel221;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel221;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel221;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel221;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel221;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel221;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel221;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel221;
                }
                __Vlabel221: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [3U][4U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[4U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 0U;
            __Vfunc_tb__DOT__rho_offset__11__x = 4U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel222;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel222;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel222;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel222;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel222;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel222;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel222;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel222;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel222;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel222;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel222;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel222;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel222;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel222;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel222;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel222;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel222;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel222;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel222;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel222;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel222;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel222;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel222;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel222;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel222;
                }
                __Vlabel222: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [4U][0U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[0U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 1U;
            __Vfunc_tb__DOT__rho_offset__11__x = 4U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel223;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel223;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel223;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel223;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel223;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel223;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel223;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel223;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel223;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel223;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel223;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel223;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel223;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel223;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel223;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel223;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel223;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel223;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel223;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel223;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel223;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel223;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel223;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel223;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel223;
                }
                __Vlabel223: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [4U][1U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[1U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 2U;
            __Vfunc_tb__DOT__rho_offset__11__x = 4U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel224;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel224;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel224;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel224;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel224;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel224;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel224;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel224;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel224;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel224;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel224;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel224;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel224;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel224;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel224;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel224;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel224;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel224;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel224;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel224;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel224;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel224;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel224;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel224;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel224;
                }
                __Vlabel224: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [4U][2U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[2U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 3U;
            __Vfunc_tb__DOT__rho_offset__11__x = 4U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel225;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel225;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel225;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel225;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel225;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel225;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel225;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel225;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel225;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel225;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel225;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel225;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel225;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel225;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel225;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel225;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel225;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel225;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel225;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel225;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel225;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel225;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel225;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel225;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel225;
                }
                __Vlabel225: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [4U][3U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[3U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            __Vfunc_tb__DOT__rho_offset__11__y = 4U;
            __Vfunc_tb__DOT__rho_offset__11__x = 4U;
            {
                if ((0U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0U;
                        goto __Vlabel226;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x24U;
                        goto __Vlabel226;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 3U;
                        goto __Vlabel226;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x29U;
                        goto __Vlabel226;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x12U;
                        goto __Vlabel226;
                    }
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 1U;
                        goto __Vlabel226;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2cU;
                        goto __Vlabel226;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xaU;
                        goto __Vlabel226;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2dU;
                        goto __Vlabel226;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 2U;
                        goto __Vlabel226;
                    }
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3eU;
                        goto __Vlabel226;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 6U;
                        goto __Vlabel226;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x2bU;
                        goto __Vlabel226;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xfU;
                        goto __Vlabel226;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x3dU;
                        goto __Vlabel226;
                    }
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__x)) {
                    if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1cU;
                        goto __Vlabel226;
                    } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x37U;
                        goto __Vlabel226;
                    } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x19U;
                        goto __Vlabel226;
                    } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x15U;
                        goto __Vlabel226;
                    } else {
                        __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x38U;
                        goto __Vlabel226;
                    }
                } else if ((0U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x1bU;
                    goto __Vlabel226;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x14U;
                    goto __Vlabel226;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0x27U;
                    goto __Vlabel226;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__11__y)) {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 8U;
                    goto __Vlabel226;
                } else {
                    __Vfunc_tb__DOT__rho_offset__11__Vfuncout = 0xeU;
                    goto __Vlabel226;
                }
                __Vlabel226: ;
            }
            __Vfunc_tb__DOT__rol64__10__sh = __Vfunc_tb__DOT__rho_offset__11__Vfuncout;
            __Vfunc_tb__DOT__rol64__10__value = __Vtask_tb__DOT__keccak_p1600__7__a
                [4U][4U];
            __Vfunc_tb__DOT__rol64__10__Vfuncout = 
                ((0U == __Vfunc_tb__DOT__rol64__10__sh)
                  ? __Vfunc_tb__DOT__rol64__10__value
                  : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, __Vfunc_tb__DOT__rol64__10__sh) 
                     | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__10__value, 
                                     ((IData)(0x40U) 
                                      - __Vfunc_tb__DOT__rol64__10__sh))));
            vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
                = __Vfunc_tb__DOT__rol64__10__Vfuncout;
            __Vtask_tb__DOT__keccak_p1600__7__b[4U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [0U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [1U][0U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [2U][0U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[0U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [0U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [1U][1U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [2U][1U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[0U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [0U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [1U][2U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [2U][2U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[0U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [0U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [1U][3U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [2U][3U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[0U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [0U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [1U][4U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [2U][4U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[0U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [1U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [2U][0U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [3U][0U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[1U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [1U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [2U][1U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [3U][1U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[1U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [1U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [2U][2U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [3U][2U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[1U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [1U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [2U][3U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [3U][3U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[1U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [1U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [2U][4U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [3U][4U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[1U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [2U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [3U][0U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [4U][0U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[2U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [2U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [3U][1U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [4U][1U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[2U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [2U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [3U][2U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [4U][2U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[2U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [2U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [3U][3U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [4U][3U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[2U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [2U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [3U][4U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [4U][4U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[2U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [3U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [4U][0U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [0U][0U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[3U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [3U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [4U][1U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [0U][1U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[3U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [3U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [4U][2U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [0U][2U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[3U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [3U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [4U][3U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [0U][3U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[3U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [3U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [4U][4U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [0U][4U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[3U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [4U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [0U][0U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [1U][0U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[4U][0U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [4U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [0U][1U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [1U][1U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[4U][1U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [4U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [0U][2U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [1U][2U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[4U][2U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [4U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [0U][3U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [1U][3U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[4U][3U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
                = (__Vtask_tb__DOT__keccak_p1600__7__b
                   [4U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__7__b
                                [0U][4U]) & __Vtask_tb__DOT__keccak_p1600__7__b
                               [1U][4U]));
            __Vtask_tb__DOT__keccak_p1600__7__a[4U][4U] 
                = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
            __Vtemp_2 = (__Vtask_tb__DOT__keccak_p1600__7__a
                         [0U][0U] ^ ([&]() {
                        __Vfunc_rc__12__round = __Vtask_tb__DOT__keccak_p1600__7__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx;
                        {
                            if (((((((((0U == __Vfunc_rc__12__round) 
                                       | (1U == __Vfunc_rc__12__round)) 
                                      | (2U == __Vfunc_rc__12__round)) 
                                     | (3U == __Vfunc_rc__12__round)) 
                                    | (4U == __Vfunc_rc__12__round)) 
                                   | (5U == __Vfunc_rc__12__round)) 
                                  | (6U == __Vfunc_rc__12__round)) 
                                 | (7U == __Vfunc_rc__12__round))) {
                                if ((0U == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 1ULL;
                                    goto __Vlabel227;
                                } else if ((1U == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x8082ULL;
                                    goto __Vlabel227;
                                } else if ((2U == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x800000000000808aULL;
                                    goto __Vlabel227;
                                } else if ((3U == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x8000000080008000ULL;
                                    goto __Vlabel227;
                                } else if ((4U == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x808bULL;
                                    goto __Vlabel227;
                                } else if ((5U == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x80000001ULL;
                                    goto __Vlabel227;
                                } else if ((6U == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x8000000080008081ULL;
                                    goto __Vlabel227;
                                } else {
                                    __Vfunc_rc__12__Vfuncout = 0x8000000000008009ULL;
                                    goto __Vlabel227;
                                }
                            } else if (((((((((8U == __Vfunc_rc__12__round) 
                                              | (9U 
                                                 == __Vfunc_rc__12__round)) 
                                             | (0xaU 
                                                == __Vfunc_rc__12__round)) 
                                            | (0xbU 
                                               == __Vfunc_rc__12__round)) 
                                           | (0xcU 
                                              == __Vfunc_rc__12__round)) 
                                          | (0xdU == __Vfunc_rc__12__round)) 
                                         | (0xeU == __Vfunc_rc__12__round)) 
                                        | (0xfU == __Vfunc_rc__12__round))) {
                                if ((8U == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x8aULL;
                                    goto __Vlabel227;
                                } else if ((9U == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x88ULL;
                                    goto __Vlabel227;
                                } else if ((0xaU == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x80008009ULL;
                                    goto __Vlabel227;
                                } else if ((0xbU == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x8000000aULL;
                                    goto __Vlabel227;
                                } else if ((0xcU == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x8000808bULL;
                                    goto __Vlabel227;
                                } else if ((0xdU == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x800000000000008bULL;
                                    goto __Vlabel227;
                                } else if ((0xeU == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x8000000000008089ULL;
                                    goto __Vlabel227;
                                } else {
                                    __Vfunc_rc__12__Vfuncout = 0x8000000000008003ULL;
                                    goto __Vlabel227;
                                }
                            } else if (((((((((0x10U 
                                               == __Vfunc_rc__12__round) 
                                              | (0x11U 
                                                 == __Vfunc_rc__12__round)) 
                                             | (0x12U 
                                                == __Vfunc_rc__12__round)) 
                                            | (0x13U 
                                               == __Vfunc_rc__12__round)) 
                                           | (0x14U 
                                              == __Vfunc_rc__12__round)) 
                                          | (0x15U 
                                             == __Vfunc_rc__12__round)) 
                                         | (0x16U == __Vfunc_rc__12__round)) 
                                        | (0x17U == __Vfunc_rc__12__round))) {
                                if ((0x10U == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x8000000000008002ULL;
                                    goto __Vlabel227;
                                } else if ((0x11U == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x8000000000000080ULL;
                                    goto __Vlabel227;
                                } else if ((0x12U == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x800aULL;
                                    goto __Vlabel227;
                                } else if ((0x13U == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x800000008000000aULL;
                                    goto __Vlabel227;
                                } else if ((0x14U == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x8000000080008081ULL;
                                    goto __Vlabel227;
                                } else if ((0x15U == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x8000000000008080ULL;
                                    goto __Vlabel227;
                                } else if ((0x16U == __Vfunc_rc__12__round)) {
                                    __Vfunc_rc__12__Vfuncout = 0x80000001ULL;
                                    goto __Vlabel227;
                                } else {
                                    __Vfunc_rc__12__Vfuncout = 0x8000000080008008ULL;
                                    goto __Vlabel227;
                                }
                            } else {
                                __Vfunc_rc__12__Vfuncout = 0ULL;
                                goto __Vlabel227;
                            }
                            __Vlabel227: ;
                        }
                    }(), __Vfunc_rc__12__Vfuncout));
            __Vtask_tb__DOT__keccak_p1600__7__a[0U][0U] 
                = __Vtemp_2;
            __Vtask_tb__DOT__keccak_p1600__7__unnamedblk5__DOT__round 
                = ((IData)(1U) + __Vtask_tb__DOT__keccak_p1600__7__unnamedblk5__DOT__round);
        }
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [0U][0U];
        __Vtask_tb__DOT__store_lane__13__y = 0U;
        __Vtask_tb__DOT__store_lane__13__x = 0U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [0U][1U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 1U;
        __Vtask_tb__DOT__store_lane__13__x = 0U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [0U][2U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 2U;
        __Vtask_tb__DOT__store_lane__13__x = 0U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [0U][3U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 3U;
        __Vtask_tb__DOT__store_lane__13__x = 0U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [0U][4U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 4U;
        __Vtask_tb__DOT__store_lane__13__x = 0U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [1U][0U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 0U;
        __Vtask_tb__DOT__store_lane__13__x = 1U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [1U][1U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 1U;
        __Vtask_tb__DOT__store_lane__13__x = 1U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [1U][2U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 2U;
        __Vtask_tb__DOT__store_lane__13__x = 1U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [1U][3U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 3U;
        __Vtask_tb__DOT__store_lane__13__x = 1U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [1U][4U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 4U;
        __Vtask_tb__DOT__store_lane__13__x = 1U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [2U][0U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 0U;
        __Vtask_tb__DOT__store_lane__13__x = 2U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [2U][1U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 1U;
        __Vtask_tb__DOT__store_lane__13__x = 2U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [2U][2U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 2U;
        __Vtask_tb__DOT__store_lane__13__x = 2U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [2U][3U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 3U;
        __Vtask_tb__DOT__store_lane__13__x = 2U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [2U][4U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 4U;
        __Vtask_tb__DOT__store_lane__13__x = 2U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [3U][0U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 0U;
        __Vtask_tb__DOT__store_lane__13__x = 3U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [3U][1U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 1U;
        __Vtask_tb__DOT__store_lane__13__x = 3U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [3U][2U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 2U;
        __Vtask_tb__DOT__store_lane__13__x = 3U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [3U][3U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 3U;
        __Vtask_tb__DOT__store_lane__13__x = 3U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [3U][4U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 4U;
        __Vtask_tb__DOT__store_lane__13__x = 3U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [4U][0U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 0U;
        __Vtask_tb__DOT__store_lane__13__x = 4U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [4U][1U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 1U;
        __Vtask_tb__DOT__store_lane__13__x = 4U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [4U][2U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 2U;
        __Vtask_tb__DOT__store_lane__13__x = 4U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [4U][3U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 3U;
        __Vtask_tb__DOT__store_lane__13__x = 4U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        __Vtask_tb__DOT__store_lane__13__lane = __Vtask_tb__DOT__keccak_p1600__7__a
            [4U][4U];
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        __Vtask_tb__DOT__store_lane__13__y = 4U;
        __Vtask_tb__DOT__store_lane__13__x = 4U;
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)(__Vtask_tb__DOT__store_lane__13__lane));
        if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                           + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 8U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(1U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x10U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(2U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x18U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(3U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x20U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(4U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x28U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(5U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x30U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(6U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 
            = (0xffU & (IData)((__Vtask_tb__DOT__store_lane__13__lane 
                                >> 0x38U)));
        if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                           + (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                              + VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y)))))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & ((IData)(7U) 
                                                                      + 
                                                                      (VL_MULS_III(32, (IData)(8U), __Vtask_tb__DOT__store_lane__13__x) 
                                                                       + 
                                                                       VL_MULS_III(32, (IData)(0x28U), __Vtask_tb__DOT__store_lane__13__y))))] 
                = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
        }
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg_idx 
            = (vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg_idx 
               + vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__rate);
    }
}
