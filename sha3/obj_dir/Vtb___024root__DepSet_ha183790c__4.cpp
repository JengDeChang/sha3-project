// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

void Vtb___024root___eval_initial__TOP__Vtiming__1__9(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__9\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb__DOT__sponge_reference__41__unnamedblk19__DOT__i;
    __Vtask_tb__DOT__sponge_reference__41__unnamedblk19__DOT__i = 0;
    CData/*7:0*/ __Vfunc_tb__DOT__mode_suffix__52__Vfuncout;
    __Vfunc_tb__DOT__mode_suffix__52__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__mode_suffix__52__mode_i;
    __Vfunc_tb__DOT__mode_suffix__52__mode_i = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__54__lane;
    __Vfunc_tb__DOT__load_lane__54__lane = 0;
    // Body
    __Vtask_tb__DOT__sponge_reference__41__unnamedblk19__DOT__i = 0U;
    while (VL_LTS_III(32, __Vtask_tb__DOT__sponge_reference__41__unnamedblk19__DOT__i, 
                      (vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg.size() 
                       - vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg_idx))) {
        vlSelfRef.tb__DOT____Vlvbound_h54bcd3e1__0 
            = (((0xc7U >= (0xffU & __Vtask_tb__DOT__sponge_reference__41__unnamedblk19__DOT__i))
                 ? vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                [(0xffU & __Vtask_tb__DOT__sponge_reference__41__unnamedblk19__DOT__i)]
                 : 0U) ^ vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg.at(
                                                                                (vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg_idx 
                                                                                + __Vtask_tb__DOT__sponge_reference__41__unnamedblk19__DOT__i)));
        if (VL_LIKELY(((0xc7U >= (0xffU & __Vtask_tb__DOT__sponge_reference__41__unnamedblk19__DOT__i))))) {
            vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                    & __Vtask_tb__DOT__sponge_reference__41__unnamedblk19__DOT__i)] 
                = vlSelfRef.tb__DOT____Vlvbound_h54bcd3e1__0;
        }
        __Vtask_tb__DOT__sponge_reference__41__unnamedblk19__DOT__i 
            = ((IData)(1U) + __Vtask_tb__DOT__sponge_reference__41__unnamedblk19__DOT__i);
    }
    vlSelfRef.tb__DOT____Vlvbound_h5a85157f__0 = ((
                                                   (0xc7U 
                                                    >= 
                                                    (0xffU 
                                                     & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg.size() 
                                                        - vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg_idx)))
                                                    ? 
                                                   vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg.size() 
                                                       - vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg_idx))]
                                                    : 0U) 
                                                  ^ 
                                                  ([&]() {
                __Vfunc_tb__DOT__mode_suffix__52__mode_i 
                    = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__mode_i;
                __Vfunc_tb__DOT__mode_suffix__52__Vfuncout 
                    = (((((4U == __Vfunc_tb__DOT__mode_suffix__52__mode_i) 
                          || (5U == __Vfunc_tb__DOT__mode_suffix__52__mode_i)) 
                         || (6U == __Vfunc_tb__DOT__mode_suffix__52__mode_i)) 
                        || (7U == __Vfunc_tb__DOT__mode_suffix__52__mode_i))
                        ? 0x1fU : 6U);
            }(), (IData)(__Vfunc_tb__DOT__mode_suffix__52__Vfuncout)));
    if (VL_LIKELY(((0xc7U >= (0xffU & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg.size() 
                                       - vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg_idx)))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg.size() 
                                                                   - vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__msg_idx))] 
            = vlSelfRef.tb__DOT____Vlvbound_h5a85157f__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_hbe8357a8__0 = (0x80U 
                                                  ^ 
                                                  ((0xc7U 
                                                    >= 
                                                    (0xffU 
                                                     & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__rate 
                                                        - (IData)(1U))))
                                                    ? 
                                                   vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
                                                   [
                                                   (0xffU 
                                                    & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__rate 
                                                       - (IData)(1U)))]
                                                    : 0U));
    if (VL_LIKELY(((0xc7U >= (0xffU & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__rate 
                                       - (IData)(1U))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__rate 
                                                                   - (IData)(1U)))] 
            = vlSelfRef.tb__DOT____Vlvbound_hbe8357a8__0;
    }
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__round_offset_i 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__round_offset_i;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__rounds_i 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__rounds_i;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 0U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp1] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[0U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 0U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp2] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[0U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 0U;
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp3] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[0U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 0U;
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp4] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[0U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 0U;
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp5] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[0U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 1U;
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp6] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[1U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 1U;
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp7] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp7];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[1U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 1U;
    IData/*31:0*/ __Vilp8;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp8] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp8];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[1U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 1U;
    IData/*31:0*/ __Vilp9;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp9] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp9];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[1U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 1U;
    IData/*31:0*/ __Vilp10;
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp10] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp10];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[1U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 2U;
    IData/*31:0*/ __Vilp11;
    __Vilp11 = 0U;
    while ((__Vilp11 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp11] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp11];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[2U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 2U;
    IData/*31:0*/ __Vilp12;
    __Vilp12 = 0U;
    while ((__Vilp12 <= 0x53U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp12] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp12];
        __Vilp12 = ((IData)(1U) + __Vilp12);
    }
}

void Vtb___024root___eval_initial__TOP__Vtiming__1__10(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__10\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__54__lane;
    __Vfunc_tb__DOT__load_lane__54__lane = 0;
    // Body
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0x54U;
    while ((__Vilp1 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp1] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[2U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 2U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp2] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[2U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 2U;
    IData/*31:0*/ __Vilp3;
    __Vilp3 = 0U;
    while ((__Vilp3 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp3] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp3];
        __Vilp3 = ((IData)(1U) + __Vilp3);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[2U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 2U;
    IData/*31:0*/ __Vilp4;
    __Vilp4 = 0U;
    while ((__Vilp4 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp4] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp4];
        __Vilp4 = ((IData)(1U) + __Vilp4);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[2U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 3U;
    IData/*31:0*/ __Vilp5;
    __Vilp5 = 0U;
    while ((__Vilp5 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp5] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp5];
        __Vilp5 = ((IData)(1U) + __Vilp5);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[3U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 3U;
    IData/*31:0*/ __Vilp6;
    __Vilp6 = 0U;
    while ((__Vilp6 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp6] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp6];
        __Vilp6 = ((IData)(1U) + __Vilp6);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[3U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 3U;
    IData/*31:0*/ __Vilp7;
    __Vilp7 = 0U;
    while ((__Vilp7 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp7] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp7];
        __Vilp7 = ((IData)(1U) + __Vilp7);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[3U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 3U;
    IData/*31:0*/ __Vilp8;
    __Vilp8 = 0U;
    while ((__Vilp8 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp8] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp8];
        __Vilp8 = ((IData)(1U) + __Vilp8);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[3U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 3U;
    IData/*31:0*/ __Vilp9;
    __Vilp9 = 0U;
    while ((__Vilp9 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp9] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp9];
        __Vilp9 = ((IData)(1U) + __Vilp9);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[3U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 0U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 4U;
    IData/*31:0*/ __Vilp10;
    __Vilp10 = 0U;
    while ((__Vilp10 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp10] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp10];
        __Vilp10 = ((IData)(1U) + __Vilp10);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[4U][0U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 1U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 4U;
    IData/*31:0*/ __Vilp11;
    __Vilp11 = 0U;
    while ((__Vilp11 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp11] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp11];
        __Vilp11 = ((IData)(1U) + __Vilp11);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[4U][1U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 2U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 4U;
    IData/*31:0*/ __Vilp12;
    __Vilp12 = 0U;
    while ((__Vilp12 <= 0xc2U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp12] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp12];
        __Vilp12 = ((IData)(1U) + __Vilp12);
    }
}

void Vtb___024root___eval_initial__TOP__Vtiming__1__11(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__Vtiming__1__11\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vtask_tb__DOT__keccak_p1600__53__unnamedblk5__DOT__round;
    __Vtask_tb__DOT__keccak_p1600__53__unnamedblk5__DOT__round = 0;
    IData/*31:0*/ __Vtask_tb__DOT__keccak_p1600__53__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx;
    __Vtask_tb__DOT__keccak_p1600__53__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx = 0;
    VlUnpacked<VlUnpacked<QData/*63:0*/, 5>, 5> __Vtask_tb__DOT__keccak_p1600__53__b;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 5; ++__Vi1) {
            __Vtask_tb__DOT__keccak_p1600__53__b[__Vi0][__Vi1] = 0;
        }
    }
    VlUnpacked<QData/*63:0*/, 5> __Vtask_tb__DOT__keccak_p1600__53__c;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb__DOT__keccak_p1600__53__c[__Vi0] = 0;
    }
    VlUnpacked<QData/*63:0*/, 5> __Vtask_tb__DOT__keccak_p1600__53__d;
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        __Vtask_tb__DOT__keccak_p1600__53__d[__Vi0] = 0;
    }
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__load_lane__54__lane;
    __Vfunc_tb__DOT__load_lane__54__lane = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__55__Vfuncout;
    __Vfunc_tb__DOT__rol64__55__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__55__value;
    __Vfunc_tb__DOT__rol64__55__value = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rol64__55__sh;
    __Vfunc_tb__DOT__rol64__55__sh = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__56__Vfuncout;
    __Vfunc_tb__DOT__rol64__56__Vfuncout = 0;
    QData/*63:0*/ __Vfunc_tb__DOT__rol64__56__value;
    __Vfunc_tb__DOT__rol64__56__value = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rol64__56__sh;
    __Vfunc_tb__DOT__rol64__56__sh = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__57__x;
    __Vfunc_tb__DOT__rho_offset__57__x = 0;
    IData/*31:0*/ __Vfunc_tb__DOT__rho_offset__57__y;
    __Vfunc_tb__DOT__rho_offset__57__y = 0;
    QData/*63:0*/ __Vfunc_rc__58__Vfuncout;
    __Vfunc_rc__58__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_rc__58__round;
    __Vfunc_rc__58__round = 0;
    QData/*63:0*/ __Vtemp_1;
    // Body
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[0xc3U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
        [0xc3U];
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[0xc4U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
        [0xc4U];
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[0xc5U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
        [0xc5U];
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[0xc6U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
        [0xc6U];
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[0xc7U] 
        = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
        [0xc7U];
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[4U][2U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 3U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 4U;
    IData/*31:0*/ __Vilp1;
    __Vilp1 = 0U;
    while ((__Vilp1 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp1] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp1];
        __Vilp1 = ((IData)(1U) + __Vilp1);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[4U][3U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y = 4U;
    vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x = 4U;
    IData/*31:0*/ __Vilp2;
    __Vilp2 = 0U;
    while ((__Vilp2 <= 0xc7U)) {
        vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state[__Vilp2] 
            = vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state
            [__Vilp2];
        __Vilp2 = ((IData)(1U) + __Vilp2);
    }
    __Vfunc_tb__DOT__load_lane__54__lane = 0ULL;
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffff00ULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | (IData)((IData)(
                                                              ((0xc7U 
                                                                >= 
                                                                (0xffU 
                                                                 & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))
                                                                ? 
                                                               vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                               [
                                                               (0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))]
                                                                : 0U))));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffff00ffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(1U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(1U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 8U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffff00ffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(2U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(2U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x10U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffff00ffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(3U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(3U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x18U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffff00ffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(4U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(4U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x20U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffff00ffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(5U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(5U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x28U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xff00ffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(6U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(6U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x30U));
    __Vfunc_tb__DOT__load_lane__54__lane = ((0xffffffffffffffULL 
                                             & __Vfunc_tb__DOT__load_lane__54__lane) 
                                            | ((QData)((IData)(
                                                               ((0xc7U 
                                                                 >= 
                                                                 (0xffU 
                                                                  & ((IData)(7U) 
                                                                     + 
                                                                     (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                      + 
                                                                      VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y)))))
                                                                 ? 
                                                                vlSelfRef.__Vfunc_tb__DOT__load_lane__54__state
                                                                [
                                                                (0xffU 
                                                                 & ((IData)(7U) 
                                                                    + 
                                                                    (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__x) 
                                                                     + 
                                                                     VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vfunc_tb__DOT__load_lane__54__y))))]
                                                                 : 0U))) 
                                               << 0x38U));
    __Vfunc_tb__DOT__load_lane__54__Vfuncout = __Vfunc_tb__DOT__load_lane__54__lane;
    vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0 = __Vfunc_tb__DOT__load_lane__54__Vfuncout;
    vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[4U][4U] 
        = vlSelfRef.tb__DOT____Vlvbound_h83f8a995__0;
    __Vtask_tb__DOT__keccak_p1600__53__unnamedblk5__DOT__round = 0U;
    while (VL_LTS_III(32, __Vtask_tb__DOT__keccak_p1600__53__unnamedblk5__DOT__round, vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__rounds_i)) {
        __Vtask_tb__DOT__keccak_p1600__53__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx 
            = (__Vtask_tb__DOT__keccak_p1600__53__unnamedblk5__DOT__round 
               + vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__round_offset_i);
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                  [0U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                  [0U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                 [0U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                [0U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [0U][4U]);
        __Vtask_tb__DOT__keccak_p1600__53__c[0U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                  [1U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                  [1U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                 [1U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                [1U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [1U][4U]);
        __Vtask_tb__DOT__keccak_p1600__53__c[1U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                  [2U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                  [2U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                 [2U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                [2U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [2U][4U]);
        __Vtask_tb__DOT__keccak_p1600__53__c[2U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                  [3U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                  [3U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                 [3U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                [3U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [3U][4U]);
        __Vtask_tb__DOT__keccak_p1600__53__c[3U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0 
            = ((((vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                  [4U][0U] ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                  [4U][1U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                 [4U][2U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                [4U][3U]) ^ vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [4U][4U]);
        __Vtask_tb__DOT__keccak_p1600__53__c[4U] = vlSelfRef.tb__DOT____Vlvbound_h2bf91d87__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__c
               [4U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__55__sh = 1U;
                    __Vfunc_tb__DOT__rol64__55__value 
                        = __Vtask_tb__DOT__keccak_p1600__53__c
                        [1U];
                    __Vfunc_tb__DOT__rol64__55__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__55__sh)
                            ? __Vfunc_tb__DOT__rol64__55__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__55__value, __Vfunc_tb__DOT__rol64__55__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__55__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__55__sh))));
                }(), __Vfunc_tb__DOT__rol64__55__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__53__d[0U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__c
               [0U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__55__sh = 1U;
                    __Vfunc_tb__DOT__rol64__55__value 
                        = __Vtask_tb__DOT__keccak_p1600__53__c
                        [2U];
                    __Vfunc_tb__DOT__rol64__55__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__55__sh)
                            ? __Vfunc_tb__DOT__rol64__55__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__55__value, __Vfunc_tb__DOT__rol64__55__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__55__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__55__sh))));
                }(), __Vfunc_tb__DOT__rol64__55__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__53__d[1U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__c
               [1U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__55__sh = 1U;
                    __Vfunc_tb__DOT__rol64__55__value 
                        = __Vtask_tb__DOT__keccak_p1600__53__c
                        [3U];
                    __Vfunc_tb__DOT__rol64__55__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__55__sh)
                            ? __Vfunc_tb__DOT__rol64__55__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__55__value, __Vfunc_tb__DOT__rol64__55__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__55__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__55__sh))));
                }(), __Vfunc_tb__DOT__rol64__55__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__53__d[2U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__c
               [2U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__55__sh = 1U;
                    __Vfunc_tb__DOT__rol64__55__value 
                        = __Vtask_tb__DOT__keccak_p1600__53__c
                        [4U];
                    __Vfunc_tb__DOT__rol64__55__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__55__sh)
                            ? __Vfunc_tb__DOT__rol64__55__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__55__value, __Vfunc_tb__DOT__rol64__55__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__55__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__55__sh))));
                }(), __Vfunc_tb__DOT__rol64__55__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__53__d[3U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_h45a19556__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__c
               [3U] ^ ([&]() {
                    __Vfunc_tb__DOT__rol64__55__sh = 1U;
                    __Vfunc_tb__DOT__rol64__55__value 
                        = __Vtask_tb__DOT__keccak_p1600__53__c
                        [0U];
                    __Vfunc_tb__DOT__rol64__55__Vfuncout 
                        = ((0U == __Vfunc_tb__DOT__rol64__55__sh)
                            ? __Vfunc_tb__DOT__rol64__55__value
                            : (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__55__value, __Vfunc_tb__DOT__rol64__55__sh) 
                               | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__55__value, 
                                               ((IData)(0x40U) 
                                                - __Vfunc_tb__DOT__rol64__55__sh))));
                }(), __Vfunc_tb__DOT__rol64__55__Vfuncout));
        __Vtask_tb__DOT__keccak_p1600__53__d[4U] = vlSelfRef.tb__DOT____Vlvbound_h45a19556__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [0U][0U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[0U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [0U][1U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[0U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [0U][2U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[0U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [0U][3U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[0U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [0U][4U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [0U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[0U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [1U][0U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[1U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [1U][1U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[1U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [1U][2U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[1U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [1U][3U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[1U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [1U][4U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [1U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[1U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [2U][0U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[2U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [2U][1U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[2U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [2U][2U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[2U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [2U][3U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[2U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [2U][4U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [2U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[2U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [3U][0U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[3U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [3U][1U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[3U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [3U][2U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[3U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [3U][3U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[3U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [3U][4U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [3U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[3U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [4U][0U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[4U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [4U][1U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[4U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [4U][2U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[4U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [4U][3U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[4U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0 
            = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
               [4U][4U] ^ __Vtask_tb__DOT__keccak_p1600__53__d
               [4U]);
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[4U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_hacfd4734__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 0U;
        __Vfunc_tb__DOT__rho_offset__57__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel308;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel308;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel308;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel308;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel308;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel308;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel308;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel308;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel308;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel308;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel308;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel308;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel308;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel308;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel308;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel308;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel308;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel308;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel308;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel308;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel308;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel308;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel308;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel308;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel308;
            }
            __Vlabel308: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [0U][0U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[0U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 1U;
        __Vfunc_tb__DOT__rho_offset__57__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel309;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel309;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel309;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel309;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel309;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel309;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel309;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel309;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel309;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel309;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel309;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel309;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel309;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel309;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel309;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel309;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel309;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel309;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel309;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel309;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel309;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel309;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel309;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel309;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel309;
            }
            __Vlabel309: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [0U][1U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[1U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 2U;
        __Vfunc_tb__DOT__rho_offset__57__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel310;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel310;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel310;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel310;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel310;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel310;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel310;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel310;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel310;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel310;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel310;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel310;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel310;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel310;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel310;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel310;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel310;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel310;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel310;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel310;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel310;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel310;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel310;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel310;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel310;
            }
            __Vlabel310: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [0U][2U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[2U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 3U;
        __Vfunc_tb__DOT__rho_offset__57__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel311;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel311;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel311;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel311;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel311;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel311;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel311;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel311;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel311;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel311;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel311;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel311;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel311;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel311;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel311;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel311;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel311;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel311;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel311;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel311;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel311;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel311;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel311;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel311;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel311;
            }
            __Vlabel311: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [0U][3U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[3U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 4U;
        __Vfunc_tb__DOT__rho_offset__57__x = 0U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel312;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel312;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel312;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel312;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel312;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel312;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel312;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel312;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel312;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel312;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel312;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel312;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel312;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel312;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel312;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel312;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel312;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel312;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel312;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel312;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel312;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel312;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel312;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel312;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel312;
            }
            __Vlabel312: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [0U][4U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[4U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 0U;
        __Vfunc_tb__DOT__rho_offset__57__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel313;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel313;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel313;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel313;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel313;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel313;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel313;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel313;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel313;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel313;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel313;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel313;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel313;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel313;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel313;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel313;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel313;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel313;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel313;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel313;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel313;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel313;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel313;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel313;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel313;
            }
            __Vlabel313: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [1U][0U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[0U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 1U;
        __Vfunc_tb__DOT__rho_offset__57__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel314;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel314;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel314;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel314;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel314;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel314;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel314;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel314;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel314;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel314;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel314;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel314;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel314;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel314;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel314;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel314;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel314;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel314;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel314;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel314;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel314;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel314;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel314;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel314;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel314;
            }
            __Vlabel314: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [1U][1U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[1U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 2U;
        __Vfunc_tb__DOT__rho_offset__57__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel315;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel315;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel315;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel315;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel315;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel315;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel315;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel315;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel315;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel315;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel315;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel315;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel315;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel315;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel315;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel315;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel315;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel315;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel315;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel315;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel315;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel315;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel315;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel315;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel315;
            }
            __Vlabel315: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [1U][2U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[2U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 3U;
        __Vfunc_tb__DOT__rho_offset__57__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel316;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel316;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel316;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel316;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel316;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel316;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel316;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel316;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel316;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel316;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel316;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel316;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel316;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel316;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel316;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel316;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel316;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel316;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel316;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel316;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel316;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel316;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel316;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel316;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel316;
            }
            __Vlabel316: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [1U][3U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[3U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 4U;
        __Vfunc_tb__DOT__rho_offset__57__x = 1U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel317;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel317;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel317;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel317;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel317;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel317;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel317;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel317;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel317;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel317;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel317;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel317;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel317;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel317;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel317;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel317;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel317;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel317;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel317;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel317;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel317;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel317;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel317;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel317;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel317;
            }
            __Vlabel317: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [1U][4U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[4U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 0U;
        __Vfunc_tb__DOT__rho_offset__57__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel318;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel318;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel318;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel318;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel318;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel318;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel318;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel318;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel318;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel318;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel318;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel318;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel318;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel318;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel318;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel318;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel318;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel318;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel318;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel318;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel318;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel318;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel318;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel318;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel318;
            }
            __Vlabel318: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [2U][0U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[0U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 1U;
        __Vfunc_tb__DOT__rho_offset__57__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel319;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel319;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel319;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel319;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel319;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel319;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel319;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel319;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel319;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel319;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel319;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel319;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel319;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel319;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel319;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel319;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel319;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel319;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel319;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel319;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel319;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel319;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel319;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel319;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel319;
            }
            __Vlabel319: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [2U][1U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[1U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 2U;
        __Vfunc_tb__DOT__rho_offset__57__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel320;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel320;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel320;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel320;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel320;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel320;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel320;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel320;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel320;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel320;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel320;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel320;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel320;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel320;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel320;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel320;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel320;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel320;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel320;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel320;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel320;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel320;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel320;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel320;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel320;
            }
            __Vlabel320: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [2U][2U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[2U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 3U;
        __Vfunc_tb__DOT__rho_offset__57__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel321;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel321;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel321;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel321;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel321;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel321;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel321;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel321;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel321;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel321;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel321;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel321;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel321;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel321;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel321;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel321;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel321;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel321;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel321;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel321;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel321;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel321;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel321;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel321;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel321;
            }
            __Vlabel321: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [2U][3U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[3U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 4U;
        __Vfunc_tb__DOT__rho_offset__57__x = 2U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel322;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel322;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel322;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel322;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel322;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel322;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel322;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel322;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel322;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel322;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel322;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel322;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel322;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel322;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel322;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel322;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel322;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel322;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel322;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel322;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel322;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel322;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel322;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel322;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel322;
            }
            __Vlabel322: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [2U][4U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[4U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 0U;
        __Vfunc_tb__DOT__rho_offset__57__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel323;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel323;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel323;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel323;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel323;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel323;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel323;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel323;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel323;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel323;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel323;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel323;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel323;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel323;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel323;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel323;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel323;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel323;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel323;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel323;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel323;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel323;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel323;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel323;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel323;
            }
            __Vlabel323: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [3U][0U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[0U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 1U;
        __Vfunc_tb__DOT__rho_offset__57__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel324;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel324;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel324;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel324;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel324;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel324;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel324;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel324;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel324;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel324;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel324;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel324;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel324;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel324;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel324;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel324;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel324;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel324;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel324;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel324;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel324;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel324;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel324;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel324;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel324;
            }
            __Vlabel324: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [3U][1U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[1U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 2U;
        __Vfunc_tb__DOT__rho_offset__57__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel325;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel325;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel325;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel325;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel325;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel325;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel325;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel325;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel325;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel325;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel325;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel325;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel325;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel325;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel325;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel325;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel325;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel325;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel325;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel325;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel325;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel325;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel325;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel325;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel325;
            }
            __Vlabel325: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [3U][2U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[2U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 3U;
        __Vfunc_tb__DOT__rho_offset__57__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel326;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel326;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel326;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel326;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel326;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel326;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel326;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel326;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel326;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel326;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel326;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel326;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel326;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel326;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel326;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel326;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel326;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel326;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel326;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel326;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel326;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel326;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel326;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel326;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel326;
            }
            __Vlabel326: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [3U][3U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[3U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 4U;
        __Vfunc_tb__DOT__rho_offset__57__x = 3U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel327;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel327;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel327;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel327;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel327;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel327;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel327;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel327;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel327;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel327;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel327;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel327;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel327;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel327;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel327;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel327;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel327;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel327;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel327;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel327;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel327;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel327;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel327;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel327;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel327;
            }
            __Vlabel327: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [3U][4U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[4U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 0U;
        __Vfunc_tb__DOT__rho_offset__57__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel328;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel328;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel328;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel328;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel328;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel328;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel328;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel328;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel328;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel328;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel328;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel328;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel328;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel328;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel328;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel328;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel328;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel328;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel328;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel328;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel328;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel328;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel328;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel328;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel328;
            }
            __Vlabel328: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [4U][0U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[0U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 1U;
        __Vfunc_tb__DOT__rho_offset__57__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel329;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel329;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel329;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel329;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel329;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel329;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel329;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel329;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel329;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel329;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel329;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel329;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel329;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel329;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel329;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel329;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel329;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel329;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel329;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel329;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel329;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel329;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel329;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel329;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel329;
            }
            __Vlabel329: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [4U][1U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[1U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 2U;
        __Vfunc_tb__DOT__rho_offset__57__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel330;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel330;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel330;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel330;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel330;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel330;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel330;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel330;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel330;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel330;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel330;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel330;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel330;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel330;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel330;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel330;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel330;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel330;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel330;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel330;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel330;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel330;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel330;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel330;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel330;
            }
            __Vlabel330: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [4U][2U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[2U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 3U;
        __Vfunc_tb__DOT__rho_offset__57__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel331;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel331;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel331;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel331;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel331;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel331;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel331;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel331;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel331;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel331;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel331;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel331;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel331;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel331;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel331;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel331;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel331;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel331;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel331;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel331;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel331;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel331;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel331;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel331;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel331;
            }
            __Vlabel331: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [4U][3U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[3U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        __Vfunc_tb__DOT__rho_offset__57__y = 4U;
        __Vfunc_tb__DOT__rho_offset__57__x = 4U;
        {
            if ((0U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0U;
                    goto __Vlabel332;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x24U;
                    goto __Vlabel332;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 3U;
                    goto __Vlabel332;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x29U;
                    goto __Vlabel332;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x12U;
                    goto __Vlabel332;
                }
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 1U;
                    goto __Vlabel332;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2cU;
                    goto __Vlabel332;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xaU;
                    goto __Vlabel332;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2dU;
                    goto __Vlabel332;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 2U;
                    goto __Vlabel332;
                }
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3eU;
                    goto __Vlabel332;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 6U;
                    goto __Vlabel332;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x2bU;
                    goto __Vlabel332;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xfU;
                    goto __Vlabel332;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x3dU;
                    goto __Vlabel332;
                }
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__x)) {
                if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1cU;
                    goto __Vlabel332;
                } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x37U;
                    goto __Vlabel332;
                } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x19U;
                    goto __Vlabel332;
                } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x15U;
                    goto __Vlabel332;
                } else {
                    __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x38U;
                    goto __Vlabel332;
                }
            } else if ((0U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x1bU;
                goto __Vlabel332;
            } else if ((1U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x14U;
                goto __Vlabel332;
            } else if ((2U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0x27U;
                goto __Vlabel332;
            } else if ((3U == __Vfunc_tb__DOT__rho_offset__57__y)) {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 8U;
                goto __Vlabel332;
            } else {
                __Vfunc_tb__DOT__rho_offset__57__Vfuncout = 0xeU;
                goto __Vlabel332;
            }
            __Vlabel332: ;
        }
        __Vfunc_tb__DOT__rol64__56__sh = __Vfunc_tb__DOT__rho_offset__57__Vfuncout;
        __Vfunc_tb__DOT__rol64__56__value = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
            [4U][4U];
        __Vfunc_tb__DOT__rol64__56__Vfuncout = ((0U 
                                                 == __Vfunc_tb__DOT__rol64__56__sh)
                                                 ? __Vfunc_tb__DOT__rol64__56__value
                                                 : 
                                                (VL_SHIFTL_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, __Vfunc_tb__DOT__rol64__56__sh) 
                                                 | VL_SHIFTR_QQI(64,64,32, __Vfunc_tb__DOT__rol64__56__value, 
                                                                 ((IData)(0x40U) 
                                                                  - __Vfunc_tb__DOT__rol64__56__sh))));
        vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0 
            = __Vfunc_tb__DOT__rol64__56__Vfuncout;
        __Vtask_tb__DOT__keccak_p1600__53__b[4U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h4bdc605f__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [0U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [1U][0U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [2U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[0U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [0U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [1U][1U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [2U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[0U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [0U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [1U][2U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [2U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[0U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [0U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [1U][3U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [2U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[0U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [0U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [1U][4U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [2U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[0U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [1U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [2U][0U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [3U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[1U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [1U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [2U][1U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [3U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[1U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [1U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [2U][2U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [3U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[1U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [1U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [2U][3U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [3U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[1U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [1U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [2U][4U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [3U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[1U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [2U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [3U][0U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [4U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[2U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [2U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [3U][1U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [4U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[2U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [2U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [3U][2U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [4U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[2U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [2U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [3U][3U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [4U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[2U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [2U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [3U][4U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [4U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[2U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [3U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [4U][0U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [0U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[3U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [3U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [4U][1U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [0U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[3U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [3U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [4U][2U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [0U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[3U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [3U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [4U][3U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [0U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[3U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [3U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [4U][4U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [0U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[3U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [4U][0U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [0U][0U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [1U][0U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[4U][0U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [4U][1U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [0U][1U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [1U][1U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[4U][1U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [4U][2U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [0U][2U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [1U][2U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[4U][2U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [4U][3U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [0U][3U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [1U][3U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[4U][3U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0 
            = (__Vtask_tb__DOT__keccak_p1600__53__b
               [4U][4U] ^ ((~ __Vtask_tb__DOT__keccak_p1600__53__b
                            [0U][4U]) & __Vtask_tb__DOT__keccak_p1600__53__b
                           [1U][4U]));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[4U][4U] 
            = vlSelfRef.tb__DOT____Vlvbound_h63d661c9__0;
        __Vtemp_1 = (vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
                     [0U][0U] ^ ([&]() {
                    __Vfunc_rc__58__round = __Vtask_tb__DOT__keccak_p1600__53__unnamedblk5__DOT__unnamedblk6__DOT__rc_idx;
                    {
                        if (((((((((0U == __Vfunc_rc__58__round) 
                                   | (1U == __Vfunc_rc__58__round)) 
                                  | (2U == __Vfunc_rc__58__round)) 
                                 | (3U == __Vfunc_rc__58__round)) 
                                | (4U == __Vfunc_rc__58__round)) 
                               | (5U == __Vfunc_rc__58__round)) 
                              | (6U == __Vfunc_rc__58__round)) 
                             | (7U == __Vfunc_rc__58__round))) {
                            if ((0U == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 1ULL;
                                goto __Vlabel333;
                            } else if ((1U == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x8082ULL;
                                goto __Vlabel333;
                            } else if ((2U == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x800000000000808aULL;
                                goto __Vlabel333;
                            } else if ((3U == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x8000000080008000ULL;
                                goto __Vlabel333;
                            } else if ((4U == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x808bULL;
                                goto __Vlabel333;
                            } else if ((5U == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x80000001ULL;
                                goto __Vlabel333;
                            } else if ((6U == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x8000000080008081ULL;
                                goto __Vlabel333;
                            } else {
                                __Vfunc_rc__58__Vfuncout = 0x8000000000008009ULL;
                                goto __Vlabel333;
                            }
                        } else if (((((((((8U == __Vfunc_rc__58__round) 
                                          | (9U == __Vfunc_rc__58__round)) 
                                         | (0xaU == __Vfunc_rc__58__round)) 
                                        | (0xbU == __Vfunc_rc__58__round)) 
                                       | (0xcU == __Vfunc_rc__58__round)) 
                                      | (0xdU == __Vfunc_rc__58__round)) 
                                     | (0xeU == __Vfunc_rc__58__round)) 
                                    | (0xfU == __Vfunc_rc__58__round))) {
                            if ((8U == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x8aULL;
                                goto __Vlabel333;
                            } else if ((9U == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x88ULL;
                                goto __Vlabel333;
                            } else if ((0xaU == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x80008009ULL;
                                goto __Vlabel333;
                            } else if ((0xbU == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x8000000aULL;
                                goto __Vlabel333;
                            } else if ((0xcU == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x8000808bULL;
                                goto __Vlabel333;
                            } else if ((0xdU == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x800000000000008bULL;
                                goto __Vlabel333;
                            } else if ((0xeU == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x8000000000008089ULL;
                                goto __Vlabel333;
                            } else {
                                __Vfunc_rc__58__Vfuncout = 0x8000000000008003ULL;
                                goto __Vlabel333;
                            }
                        } else if (((((((((0x10U == __Vfunc_rc__58__round) 
                                          | (0x11U 
                                             == __Vfunc_rc__58__round)) 
                                         | (0x12U == __Vfunc_rc__58__round)) 
                                        | (0x13U == __Vfunc_rc__58__round)) 
                                       | (0x14U == __Vfunc_rc__58__round)) 
                                      | (0x15U == __Vfunc_rc__58__round)) 
                                     | (0x16U == __Vfunc_rc__58__round)) 
                                    | (0x17U == __Vfunc_rc__58__round))) {
                            if ((0x10U == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x8000000000008002ULL;
                                goto __Vlabel333;
                            } else if ((0x11U == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x8000000000000080ULL;
                                goto __Vlabel333;
                            } else if ((0x12U == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x800aULL;
                                goto __Vlabel333;
                            } else if ((0x13U == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x800000008000000aULL;
                                goto __Vlabel333;
                            } else if ((0x14U == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x8000000080008081ULL;
                                goto __Vlabel333;
                            } else if ((0x15U == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x8000000000008080ULL;
                                goto __Vlabel333;
                            } else if ((0x16U == __Vfunc_rc__58__round)) {
                                __Vfunc_rc__58__Vfuncout = 0x80000001ULL;
                                goto __Vlabel333;
                            } else {
                                __Vfunc_rc__58__Vfuncout = 0x8000000080008008ULL;
                                goto __Vlabel333;
                            }
                        } else {
                            __Vfunc_rc__58__Vfuncout = 0ULL;
                            goto __Vlabel333;
                        }
                        __Vlabel333: ;
                    }
                }(), __Vfunc_rc__58__Vfuncout));
        vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a[0U][0U] 
            = __Vtemp_1;
        __Vtask_tb__DOT__keccak_p1600__53__unnamedblk5__DOT__round 
            = ((IData)(1U) + __Vtask_tb__DOT__keccak_p1600__53__unnamedblk5__DOT__round);
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [0U][0U];
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [0U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [0U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [0U][3U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [0U][4U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 4U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 0U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [1U][0U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [1U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [1U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [1U][3U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [1U][4U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 4U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 1U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [2U][0U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [2U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [2U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [2U][3U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [2U][4U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 4U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 2U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [3U][0U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [3U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [3U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [3U][3U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [3U][4U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 4U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 3U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [4U][0U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 0U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 4U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [4U][1U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 1U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 4U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [4U][2U];
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 2U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 4U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(2U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(2U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x18U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(3U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(3U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x20U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(4U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(4U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x28U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(5U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(5U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x30U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(6U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(6U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x38U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(7U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(7U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
        = vlSelfRef.__Vtask_tb__DOT__keccak_p1600__53__a
        [4U][3U];
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__y = 3U;
    vlSelfRef.__Vtask_tb__DOT__store_lane__59__x = 4U;
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane));
    if (VL_LIKELY(((0xc7U >= (0xffU & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                       + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                   + 
                                                                   VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 8U)));
    if (VL_LIKELY(((0xc7U >= (0xffU & ((IData)(1U) 
                                       + (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                          + VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y)))))))) {
        vlSelfRef.__Vtask_tb__DOT__sponge_reference__41__state[(0xffU 
                                                                & ((IData)(1U) 
                                                                   + 
                                                                   (VL_MULS_III(32, (IData)(8U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__x) 
                                                                    + 
                                                                    VL_MULS_III(32, (IData)(0x28U), vlSelfRef.__Vtask_tb__DOT__store_lane__59__y))))] 
            = vlSelfRef.tb__DOT____Vlvbound_h639cd528__0;
    }
    vlSelfRef.tb__DOT____Vlvbound_h639cd528__0 = (0xffU 
                                                  & (IData)(
                                                            (vlSelfRef.__Vtask_tb__DOT__store_lane__59__lane 
                                                             >> 0x10U)));
}
