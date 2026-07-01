// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

void Vtb___024root___eval_initial__TOP__Vtiming__1__2(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__2\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb__DOT__sponge_reference__3__unnamedblk19__DOT__i;
    __Vtask_tb__DOT__sponge_reference__3__unnamedblk19__DOT__i = 0;
    CData/*7:0*/ __Vfunc_tb__DOT__mode_suffix__14__Vfuncout;
    __Vfunc_tb__DOT__mode_suffix__14__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__mode_suffix__14__mode_i;
    __Vfunc_tb__DOT__mode_suffix__14__mode_i = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__16__lane;
    __Vfunc_tb__DOT__load_lane__16__lane = 0;
    // Body
    __Vtask_tb__DOT__sponge_reference__3__unnamedblk19__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb__DOT__sponge_reference__3__unnamedblk19__DOT__i, 
                      (vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg.size() 
                       - vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg_idx))) {
        vlSelfRef.tb__DOT____Vlvbound_h54bcd3e1__0 
            = (((0xc7U >= (0xffU & __Vtask_tb__DOT__sponge_reference__3__unnamedblk19__DOT__i))
                 ? vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                [(0xffU & __Vtask_tb__DOT__sponge_reference__3__unnamedblk19__DOT__i)]
                 : 0U) ^ vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg.at(
                                                                                (vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg_idx 
                                                                                + __Vtask_tb__DOT__sponge_reference__3__unnamedblk19__DOT__i)));
        if (VL_LIKELY(((0xc7U >= (0xffU & __Vtask_tb__DOT__sponge_reference__3__unnamedblk19__DOT__i))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                                   & __Vtask_tb__DOT__sponge_reference__3__unnamedblk19__DOT__i)] 
                = vlSelfRef.tb__DOT____Vlvbound_h54bcd3e1__0;
        }
        __Vtask_tb__DOT__sponge_reference__3__unnamedblk19__DOT__i 
            = ((IData)(1U) + __Vtask_tb__DOT__sponge_reference__3__unnamedblk19__DOT__i);
    }
    vlSelfRef.tb__DOT____Vlvbound_h5a85157f__0 = ((
                                                   (0xc7U 
                                                    >= 
                                                    (0xffU 
                                                     & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg.size() 
                                                        - vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg_idx)))
                                                    ? 
                                                   vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg.size() 
                                                       - vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg_idx))]
                                                    : 0U) 
                                                  ^ 
                                                  ([&]() {
                __Vfunc_tb__DOT__mode_suffix__14__mode_i 
                    = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__mode_i;
                __Vfunc_tb__DOT__mode_suffix__14__Vfuncout 
                    = (((((4U == __Vfunc_tb__DOT__mode_suffix__14__mode_i) 
                          || (5U == __Vfunc_tb__DOT__mode_suffix__14__mode_i)) 
                         || (6U == __Vfunc_tb__DOT__mode_suffix__14__mode_i)) 
                        || (7U == __Vfunc_tb__DOT__mode_suffix__14__mode_i))
                        ? 0x1fU : 6U);
            }(), (IData)(__Vfunc_tb__DOT__mode_suffix__14__Vfuncout)));
    if (VL_LIKELY(((0xc7U >= (0xffU & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg.size() 
                                       - vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg_idx)))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg.size() 
                                                                  - vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__msg_idx))] 
            = vlSelfRef.tb__DOT____Vlvbound_h5a85157f__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_hbe8357a8__0 = (0x80U 
                                                  ^ 
                                                  ((0xc7U 
                                                    >= 
                                                    (0xffU 
                                                     & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__rate 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__rate 
                                                       - (IData)(1U)))]
                                                    : 0U));
    if (VL_LIKELY(((0xc7U >= (0xffU & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__rate 
                                       - (IData)(1U))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__rate 
                                                                  - (IData)(1U)))] 
            = vlSelfRef.tb__DOT____Vlvbound_hbe8357a8__0;
    }
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__round_offset_i 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__round_offset_i;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__rounds_i 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__rounds_i;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 0U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp1] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[0U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 0U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp2] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[0U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 0U;
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp3] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[0U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 0U;
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp4] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[0U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 0U;
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp5] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[0U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 1U;
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp6] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[1U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 1U;
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp7] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp7];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[1U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 1U;
    IData/*31:0*/ __Vilp8;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp8] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp8];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[1U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 1U;
    IData/*31:0*/ __Vilp9;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp9] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp9];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[1U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 1U;
    IData/*31:0*/ __Vilp10;
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp10] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp10];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[1U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 2U;
    IData/*31:0*/ __Vilp11;
    __Vilp11 = 0U;
    while ((__Vilp11 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp11] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp11];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[2U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 2U;
    IData/*31:0*/ __Vilp12;
    __Vilp12 = 0U;
    while ((__Vilp12 <= 0x53U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp12] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp12];
        __Vilp12 = ((IData)(1U) + __Vilp12);
    }
}

void Vtb___024root___eval_initial__TOP__Vtiming__1__3(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__3\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__16__lane;
    __Vfunc_tb__DOT__load_lane__16__lane = 0;
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0x54U;
    while ((__Vilp1 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp1] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[2U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 2U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp2] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[2U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 2U;
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp3] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[2U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 2U;
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp4] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[2U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 3U;
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp5] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[3U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 3U;
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp6] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[3U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 3U;
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp7] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp7];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[3U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 3U;
    IData/*31:0*/ __Vilp8;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp8] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp8];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[3U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 3U;
    IData/*31:0*/ __Vilp9;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp9] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp9];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[3U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 4U;
    IData/*31:0*/ __Vilp10;
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp10] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp10];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[4U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 4U;
    IData/*31:0*/ __Vilp11;
    __Vilp11 = 0U;
    while ((__Vilp11 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp11] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp11];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[4U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 4U;
    IData/*31:0*/ __Vilp12;
    __Vilp12 = 0U;
    while ((__Vilp12 <= 0xc2U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp12] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp12];
        __Vilp12 = ((IData)(1U) + __Vilp12);
    }
}

void Vtb___024root___eval_initial__TOP__Vtiming__1__4(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__4\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb__DOT__keccak_p1600__15__unnamedblk5__DOT__round;
    __Vtask_tb__DOT__keccak_p1600__15__unnamedblk5__DOT__round = 0;
    IData/*31:0*/ __Vtask_tb__DOT__keccak_p1600__15__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx;
    __Vtask_tb__DOT__keccak_p1600__15__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx = 0;
    VlUnpacked<VlUnpacked<QData/*63:0*/, 5>, 5> __Vtask_tb__DOT__keccak_p1600__15__b;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            __Vtask_tb__DOT__keccak_p1600__15__b[__Vi0][__Vi1] = 0;
        }
    }
    VlUnpacked<QData/*63:0*/, 5> __Vtask_tb__DOT__keccak_p1600__15__c;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb__DOT__keccak_p1600__15__c[__Vi0] = 0;
    }
    VlUnpacked<QData/*63:0*/, 5> __Vtask_tb__DOT__keccak_p1600__15__d;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb__DOT__keccak_p1600__15__d[__Vi0] = 0;
    }
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__16__lane;
    __Vfunc_tb__DOT__load_lane__16__lane = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__17__Vfuncout;
    __Vfunc_tb__DOT__rol64__17__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__17__value;
    __Vfunc_tb__DOT__rol64__17__value = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rol64__17__sh;
    __Vfunc_tb__DOT__rol64__17__sh = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__18__Vfuncout;
    __Vfunc_tb__DOT__rol64__18__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__18__value;
    __Vfunc_tb__DOT__rol64__18__value = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rol64__18__sh;
    __Vfunc_tb__DOT__rol64__18__sh = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__19__x;
    __Vfunc_tb__DOT__rho_offset__19__x = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__19__y;
    __Vfunc_tb__DOT__rho_offset__19__y = 0;
    QData/*63:0*/ __Vfunc_rc__20__Vfuncout;
    __Vfunc_rc__20__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rc__20__round;
    __Vfunc_rc__20__round = 0;
    QData/*63:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[0xc3U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
        [0xc3U];
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[0xc4U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
        [0xc4U];
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[0xc5U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
        [0xc5U];
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[0xc6U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
        [0xc6U];
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[0xc7U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
        [0xc7U];
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[4U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 4U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp1] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[4U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x = 4U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state[__Vilp2] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vfunc_tb__DOT__load_lane__16__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__16__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__16__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__16__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__16__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__16__Vfuncout = __Vfunc_tb__DOT__load_lane__16__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__16__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[4U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    __Vtask_tb__DOT__keccak_p1600__15__unnamedblk5__DOT__round = 0U;
    while (VL_LTS_III(32, __Vtask_tb__DOT__keccak_p1600__15__unnamedblk5__DOT__round, vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__rounds_i)) {
        __Vtask_tb__DOT__keccak_p1600__15__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx 
            = (__Vtask_tb__DOT__keccak_p1600__15__unnamedblk5__DOT__round 
               + vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__round_offset_i);
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                  [0U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                  [0U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                 [0U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                [0U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [0U][4U]);
        __Vtask_tb__DOT__keccak_p1600__15__c[0U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                  [1U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                  [1U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                 [1U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                [1U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [1U][4U]);
        __Vtask_tb__DOT__keccak_p1600__15__c[1U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                  [2U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                  [2U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                 [2U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                [2U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [2U][4U]);
        __Vtask_tb__DOT__keccak_p1600__15__c[2U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                  [3U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                  [3U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                 [3U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                [3U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [3U][4U]);
        __Vtask_tb__DOT__keccak_p1600__15__c[3U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                  [4U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                  [4U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                 [4U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                [4U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [4U][4U]);
        __Vtask_tb__DOT__keccak_p1600__15__c[4U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__c
               [4U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__17__sh = 1U;
                    __Vfunc_tb__DOT__rol64__17__value 
                        = __Vtask_tb__DOT__keccak_p1600__15__c
                        [1U];
                    __Vfunc_tb__DOT__rol64__17__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__17__sh)
                            ? __Vfunc_tb__DOT__rol64__17__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__17__value, __Vfunc_tb__DOT__rol64__17__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__17__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__17__sh))));
                }(), __Vfunc_tb__DOT__rol64__17__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__15__d[0U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__c
               [0U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__17__sh = 1U;
                    __Vfunc_tb__DOT__rol64__17__value 
                        = __Vtask_tb__DOT__keccak_p1600__15__c
                        [2U];
                    __Vfunc_tb__DOT__rol64__17__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__17__sh)
                            ? __Vfunc_tb__DOT__rol64__17__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__17__value, __Vfunc_tb__DOT__rol64__17__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__17__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__17__sh))));
                }(), __Vfunc_tb__DOT__rol64__17__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__15__d[1U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__c
               [1U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__17__sh = 1U;
                    __Vfunc_tb__DOT__rol64__17__value 
                        = __Vtask_tb__DOT__keccak_p1600__15__c
                        [3U];
                    __Vfunc_tb__DOT__rol64__17__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__17__sh)
                            ? __Vfunc_tb__DOT__rol64__17__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__17__value, __Vfunc_tb__DOT__rol64__17__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__17__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__17__sh))));
                }(), __Vfunc_tb__DOT__rol64__17__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__15__d[2U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__c
               [2U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__17__sh = 1U;
                    __Vfunc_tb__DOT__rol64__17__value 
                        = __Vtask_tb__DOT__keccak_p1600__15__c
                        [4U];
                    __Vfunc_tb__DOT__rol64__17__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__17__sh)
                            ? __Vfunc_tb__DOT__rol64__17__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__17__value, __Vfunc_tb__DOT__rol64__17__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__17__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__17__sh))));
                }(), __Vfunc_tb__DOT__rol64__17__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__15__d[3U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__c
               [3U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__17__sh = 1U;
                    __Vfunc_tb__DOT__rol64__17__value 
                        = __Vtask_tb__DOT__keccak_p1600__15__c
                        [0U];
                    __Vfunc_tb__DOT__rol64__17__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__17__sh)
                            ? __Vfunc_tb__DOT__rol64__17__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__17__value, __Vfunc_tb__DOT__rol64__17__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__17__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__17__sh))));
                }(), __Vfunc_tb__DOT__rol64__17__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__15__d[4U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [0U][0U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[0U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [0U][1U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[0U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [0U][2U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[0U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [0U][3U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[0U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [0U][4U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[0U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [1U][0U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[1U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [1U][1U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[1U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [1U][2U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[1U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [1U][3U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[1U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [1U][4U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[1U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [2U][0U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[2U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [2U][1U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[2U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [2U][2U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[2U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [2U][3U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[2U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [2U][4U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[2U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [3U][0U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[3U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [3U][1U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[3U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [3U][2U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[3U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [3U][3U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[3U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [3U][4U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[3U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [4U][0U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[4U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [4U][1U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[4U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [4U][2U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[4U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [4U][3U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[4U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
               [4U][4U] ^ __Vtask_tb__DOT__keccak_p1600__15__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[4U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 0U;
        __Vfunc_tb__DOT__rho_offset__19__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel228;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel228;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel228;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel228;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel228;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel228;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel228;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel228;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel228;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel228;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel228;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel228;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel228;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel228;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel228;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel228;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel228;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel228;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel228;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel228;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel228;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel228;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel228;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel228;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel228;
            }
            __Vlabel228: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [0U][0U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[0U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 1U;
        __Vfunc_tb__DOT__rho_offset__19__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel229;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel229;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel229;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel229;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel229;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel229;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel229;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel229;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel229;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel229;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel229;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel229;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel229;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel229;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel229;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel229;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel229;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel229;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel229;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel229;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel229;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel229;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel229;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel229;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel229;
            }
            __Vlabel229: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [0U][1U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[1U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 2U;
        __Vfunc_tb__DOT__rho_offset__19__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel230;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel230;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel230;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel230;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel230;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel230;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel230;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel230;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel230;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel230;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel230;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel230;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel230;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel230;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel230;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel230;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel230;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel230;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel230;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel230;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel230;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel230;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel230;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel230;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel230;
            }
            __Vlabel230: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [0U][2U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[2U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 3U;
        __Vfunc_tb__DOT__rho_offset__19__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel231;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel231;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel231;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel231;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel231;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel231;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel231;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel231;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel231;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel231;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel231;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel231;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel231;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel231;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel231;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel231;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel231;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel231;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel231;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel231;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel231;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel231;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel231;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel231;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel231;
            }
            __Vlabel231: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [0U][3U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[3U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 4U;
        __Vfunc_tb__DOT__rho_offset__19__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel232;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel232;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel232;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel232;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel232;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel232;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel232;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel232;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel232;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel232;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel232;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel232;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel232;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel232;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel232;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel232;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel232;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel232;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel232;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel232;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel232;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel232;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel232;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel232;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel232;
            }
            __Vlabel232: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [0U][4U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[4U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 0U;
        __Vfunc_tb__DOT__rho_offset__19__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel233;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel233;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel233;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel233;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel233;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel233;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel233;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel233;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel233;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel233;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel233;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel233;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel233;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel233;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel233;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel233;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel233;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel233;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel233;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel233;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel233;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel233;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel233;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel233;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel233;
            }
            __Vlabel233: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [1U][0U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[0U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 1U;
        __Vfunc_tb__DOT__rho_offset__19__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel234;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel234;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel234;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel234;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel234;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel234;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel234;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel234;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel234;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel234;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel234;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel234;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel234;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel234;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel234;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel234;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel234;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel234;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel234;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel234;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel234;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel234;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel234;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel234;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel234;
            }
            __Vlabel234: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [1U][1U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[1U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 2U;
        __Vfunc_tb__DOT__rho_offset__19__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel235;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel235;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel235;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel235;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel235;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel235;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel235;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel235;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel235;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel235;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel235;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel235;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel235;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel235;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel235;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel235;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel235;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel235;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel235;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel235;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel235;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel235;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel235;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel235;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel235;
            }
            __Vlabel235: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [1U][2U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[2U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 3U;
        __Vfunc_tb__DOT__rho_offset__19__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel236;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel236;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel236;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel236;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel236;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel236;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel236;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel236;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel236;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel236;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel236;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel236;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel236;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel236;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel236;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel236;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel236;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel236;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel236;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel236;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel236;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel236;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel236;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel236;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel236;
            }
            __Vlabel236: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [1U][3U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[3U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 4U;
        __Vfunc_tb__DOT__rho_offset__19__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel237;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel237;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel237;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel237;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel237;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel237;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel237;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel237;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel237;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel237;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel237;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel237;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel237;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel237;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel237;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel237;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel237;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel237;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel237;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel237;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel237;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel237;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel237;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel237;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel237;
            }
            __Vlabel237: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [1U][4U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[4U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 0U;
        __Vfunc_tb__DOT__rho_offset__19__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel238;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel238;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel238;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel238;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel238;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel238;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel238;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel238;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel238;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel238;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel238;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel238;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel238;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel238;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel238;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel238;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel238;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel238;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel238;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel238;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel238;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel238;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel238;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel238;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel238;
            }
            __Vlabel238: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [2U][0U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[0U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 1U;
        __Vfunc_tb__DOT__rho_offset__19__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel239;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel239;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel239;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel239;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel239;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel239;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel239;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel239;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel239;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel239;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel239;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel239;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel239;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel239;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel239;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel239;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel239;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel239;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel239;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel239;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel239;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel239;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel239;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel239;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel239;
            }
            __Vlabel239: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [2U][1U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[1U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 2U;
        __Vfunc_tb__DOT__rho_offset__19__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel240;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel240;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel240;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel240;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel240;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel240;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel240;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel240;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel240;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel240;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel240;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel240;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel240;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel240;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel240;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel240;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel240;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel240;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel240;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel240;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel240;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel240;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel240;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel240;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel240;
            }
            __Vlabel240: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [2U][2U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[2U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 3U;
        __Vfunc_tb__DOT__rho_offset__19__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel241;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel241;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel241;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel241;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel241;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel241;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel241;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel241;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel241;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel241;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel241;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel241;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel241;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel241;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel241;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel241;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel241;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel241;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel241;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel241;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel241;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel241;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel241;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel241;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel241;
            }
            __Vlabel241: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [2U][3U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[3U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 4U;
        __Vfunc_tb__DOT__rho_offset__19__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel242;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel242;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel242;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel242;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel242;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel242;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel242;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel242;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel242;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel242;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel242;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel242;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel242;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel242;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel242;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel242;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel242;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel242;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel242;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel242;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel242;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel242;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel242;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel242;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel242;
            }
            __Vlabel242: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [2U][4U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[4U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 0U;
        __Vfunc_tb__DOT__rho_offset__19__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel243;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel243;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel243;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel243;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel243;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel243;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel243;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel243;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel243;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel243;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel243;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel243;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel243;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel243;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel243;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel243;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel243;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel243;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel243;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel243;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel243;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel243;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel243;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel243;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel243;
            }
            __Vlabel243: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [3U][0U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[0U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 1U;
        __Vfunc_tb__DOT__rho_offset__19__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel244;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel244;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel244;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel244;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel244;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel244;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel244;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel244;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel244;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel244;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel244;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel244;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel244;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel244;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel244;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel244;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel244;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel244;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel244;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel244;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel244;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel244;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel244;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel244;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel244;
            }
            __Vlabel244: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [3U][1U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[1U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 2U;
        __Vfunc_tb__DOT__rho_offset__19__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel245;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel245;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel245;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel245;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel245;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel245;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel245;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel245;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel245;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel245;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel245;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel245;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel245;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel245;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel245;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel245;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel245;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel245;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel245;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel245;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel245;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel245;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel245;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel245;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel245;
            }
            __Vlabel245: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [3U][2U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[2U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 3U;
        __Vfunc_tb__DOT__rho_offset__19__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel246;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel246;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel246;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel246;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel246;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel246;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel246;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel246;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel246;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel246;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel246;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel246;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel246;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel246;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel246;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel246;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel246;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel246;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel246;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel246;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel246;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel246;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel246;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel246;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel246;
            }
            __Vlabel246: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [3U][3U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[3U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 4U;
        __Vfunc_tb__DOT__rho_offset__19__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel247;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel247;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel247;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel247;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel247;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel247;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel247;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel247;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel247;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel247;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel247;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel247;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel247;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel247;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel247;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel247;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel247;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel247;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel247;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel247;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel247;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel247;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel247;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel247;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel247;
            }
            __Vlabel247: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [3U][4U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[4U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 0U;
        __Vfunc_tb__DOT__rho_offset__19__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel248;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel248;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel248;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel248;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel248;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel248;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel248;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel248;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel248;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel248;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel248;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel248;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel248;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel248;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel248;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel248;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel248;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel248;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel248;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel248;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel248;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel248;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel248;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel248;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel248;
            }
            __Vlabel248: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [4U][0U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[0U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 1U;
        __Vfunc_tb__DOT__rho_offset__19__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel249;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel249;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel249;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel249;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel249;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel249;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel249;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel249;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel249;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel249;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel249;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel249;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel249;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel249;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel249;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel249;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel249;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel249;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel249;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel249;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel249;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel249;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel249;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel249;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel249;
            }
            __Vlabel249: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [4U][1U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[1U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 2U;
        __Vfunc_tb__DOT__rho_offset__19__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel250;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel250;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel250;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel250;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel250;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel250;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel250;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel250;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel250;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel250;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel250;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel250;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel250;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel250;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel250;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel250;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel250;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel250;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel250;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel250;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel250;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel250;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel250;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel250;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel250;
            }
            __Vlabel250: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [4U][2U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[2U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 3U;
        __Vfunc_tb__DOT__rho_offset__19__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel251;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel251;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel251;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel251;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel251;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel251;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel251;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel251;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel251;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel251;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel251;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel251;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel251;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel251;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel251;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel251;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel251;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel251;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel251;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel251;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel251;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel251;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel251;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel251;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel251;
            }
            __Vlabel251: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [4U][3U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[3U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__19__y = 4U;
        __Vfunc_tb__DOT__rho_offset__19__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0U;
                    goto __Vlabel252;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x24U;
                    goto __Vlabel252;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 3U;
                    goto __Vlabel252;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x29U;
                    goto __Vlabel252;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x12U;
                    goto __Vlabel252;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 1U;
                    goto __Vlabel252;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2cU;
                    goto __Vlabel252;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xaU;
                    goto __Vlabel252;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2dU;
                    goto __Vlabel252;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 2U;
                    goto __Vlabel252;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3eU;
                    goto __Vlabel252;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 6U;
                    goto __Vlabel252;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x2bU;
                    goto __Vlabel252;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xfU;
                    goto __Vlabel252;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x3dU;
                    goto __Vlabel252;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1cU;
                    goto __Vlabel252;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x37U;
                    goto __Vlabel252;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x19U;
                    goto __Vlabel252;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x15U;
                    goto __Vlabel252;
                } else {
                    __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x38U;
                    goto __Vlabel252;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x1bU;
                goto __Vlabel252;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x14U;
                goto __Vlabel252;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0x27U;
                goto __Vlabel252;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__19__y)) {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 8U;
                goto __Vlabel252;
            } else {
                __Vfunc_tb__DOT__rho_offset__19__Vfuncout = 0xeU;
                goto __Vlabel252;
            }
            __Vlabel252: ;
        }
        __Vfunc_tb__DOT__rol64__18__sh = __Vfunc_tb__DOT__rho_offset__19__Vfuncout;
        __Vfunc_tb__DOT__rol64__18__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
            [4U][4U];
        __Vfunc_tb__DOT__rol64__18__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__18__sh)
                                                 ? __Vfunc_tb__DOT__rol64__18__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, __Vfunc_tb__DOT__rol64__18__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__18__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__18__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__18__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__15__b[4U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [0U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [1U][0U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [2U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[0U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [0U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [1U][1U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [2U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[0U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [0U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [1U][2U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [2U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[0U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [0U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [1U][3U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [2U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[0U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [0U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [1U][4U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [2U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[0U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [1U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [2U][0U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [3U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[1U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [1U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [2U][1U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [3U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[1U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [1U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [2U][2U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [3U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[1U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [1U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [2U][3U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [3U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[1U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [1U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [2U][4U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [3U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[1U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [2U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [3U][0U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [4U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[2U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [2U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [3U][1U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [4U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[2U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [2U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [3U][2U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [4U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[2U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [2U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [3U][3U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [4U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[2U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [2U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [3U][4U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [4U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[2U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [3U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [4U][0U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [0U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[3U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [3U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [4U][1U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [0U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[3U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [3U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [4U][2U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [0U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[3U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [3U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [4U][3U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [0U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[3U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [3U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [4U][4U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [0U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[3U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [4U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [0U][0U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [1U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[4U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [4U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [0U][1U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [1U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[4U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [4U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [0U][2U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [1U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[4U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [4U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [0U][3U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [1U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[4U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__15__b
               [4U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__15__b
                            [0U][4U]) & __Vtask_tb__DOT__keccak_p1600__15__b
                           [1U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[4U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        __Vtemp_1 = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
                     [0U][0U] ^ ([&]() {
                    __Vfunc_rc__20__round = __Vtask_tb__DOT__keccak_p1600__15__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx;
                    {
                        if (((((((((0U == __Vfunc_rc__20__round) 
                                   | (1U == __Vfunc_rc__20__round)) 
                                  | (2U == __Vfunc_rc__20__round)) 
                                 | (3U == __Vfunc_rc__20__round)) 
                                | (4U == __Vfunc_rc__20__round)) 
                               | (5U == __Vfunc_rc__20__round)) 
                              | (6U == __Vfunc_rc__20__round)) 
                             | (7U == __Vfunc_rc__20__round))) {
                            if ((0U == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 1ULL;
                                goto __Vlabel253;
                            } else if ((1U == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x8082ULL;
                                goto __Vlabel253;
                            } else if ((2U == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x800000000000808aULL;
                                goto __Vlabel253;
                            } else if ((3U == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x8000000080008000ULL;
                                goto __Vlabel253;
                            } else if ((4U == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x808bULL;
                                goto __Vlabel253;
                            } else if ((5U == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x80000001ULL;
                                goto __Vlabel253;
                            } else if ((6U == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x8000000080008081ULL;
                                goto __Vlabel253;
                            } else {
                                __Vfunc_rc__20__Vfuncout = 0x8000000000008009ULL;
                                goto __Vlabel253;
                            }
                        } else if (((((((((8U == __Vfunc_rc__20__round) 
                                          | (9U == __Vfunc_rc__20__round)) 
                                         | (0xaU == __Vfunc_rc__20__round)) 
                                        | (0xbU == __Vfunc_rc__20__round)) 
                                       | (0xcU == __Vfunc_rc__20__round)) 
                                      | (0xdU == __Vfunc_rc__20__round)) 
                                     | (0xeU == __Vfunc_rc__20__round)) 
                                    | (0xfU == __Vfunc_rc__20__round))) {
                            if ((8U == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x8aULL;
                                goto __Vlabel253;
                            } else if ((9U == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x88ULL;
                                goto __Vlabel253;
                            } else if ((0xaU == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x80008009ULL;
                                goto __Vlabel253;
                            } else if ((0xbU == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x8000000aULL;
                                goto __Vlabel253;
                            } else if ((0xcU == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x8000808bULL;
                                goto __Vlabel253;
                            } else if ((0xdU == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x800000000000008bULL;
                                goto __Vlabel253;
                            } else if ((0xeU == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x8000000000008089ULL;
                                goto __Vlabel253;
                            } else {
                                __Vfunc_rc__20__Vfuncout = 0x8000000000008003ULL;
                                goto __Vlabel253;
                            }
                        } else if (((((((((0x10U == __Vfunc_rc__20__round) 
                                          | (0x11U 
                                             == __Vfunc_rc__20__round)) 
                                         | (0x12U == __Vfunc_rc__20__round)) 
                                        | (0x13U == __Vfunc_rc__20__round)) 
                                       | (0x14U == __Vfunc_rc__20__round)) 
                                      | (0x15U == __Vfunc_rc__20__round)) 
                                     | (0x16U == __Vfunc_rc__20__round)) 
                                    | (0x17U == __Vfunc_rc__20__round))) {
                            if ((0x10U == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x8000000000008002ULL;
                                goto __Vlabel253;
                            } else if ((0x11U == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x8000000000000080ULL;
                                goto __Vlabel253;
                            } else if ((0x12U == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x800aULL;
                                goto __Vlabel253;
                            } else if ((0x13U == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x800000008000000aULL;
                                goto __Vlabel253;
                            } else if ((0x14U == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x8000000080008081ULL;
                                goto __Vlabel253;
                            } else if ((0x15U == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x8000000000008080ULL;
                                goto __Vlabel253;
                            } else if ((0x16U == __Vfunc_rc__20__round)) {
                                __Vfunc_rc__20__Vfuncout = 0x80000001ULL;
                                goto __Vlabel253;
                            } else {
                                __Vfunc_rc__20__Vfuncout = 0x8000000080008008ULL;
                                goto __Vlabel253;
                            }
                        } else {
                            __Vfunc_rc__20__Vfuncout = 0ULL;
                            goto __Vlabel253;
                        }
                        __Vlabel253: ;
                    }
                }(), __Vfunc_rc__20__Vfuncout));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a[0U][0U] 
            = __Vtemp_1;
        __Vtask_tb__DOT__keccak_p1600__15__unnamedblk5__DOT__round 
            = ((IData)(1U) + __Vtask_tb__DOT__keccak_p1600__15__unnamedblk5__DOT__round);
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [0U][0U];
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [0U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [0U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [0U][3U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [0U][4U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 4U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [1U][0U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [1U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [1U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [1U][3U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [1U][4U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 4U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [2U][0U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [2U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [2U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [2U][3U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [2U][4U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 4U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [3U][0U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [3U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [3U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [3U][3U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [3U][4U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 4U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [4U][0U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 4U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [4U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 4U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [4U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 4U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(2U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(3U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(4U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(5U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(6U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x38U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(7U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__15__a
        [4U][3U];
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__21__x = 4U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                  + 
                                                                  VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__3__state[(0xffU 
                                                               & ((IData)(1U) 
                                                                  + 
                                                                  (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__21__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__21__lane 
                                                             >> 0x10U)));
}
