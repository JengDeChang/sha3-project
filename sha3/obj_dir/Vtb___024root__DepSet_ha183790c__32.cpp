// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__8(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__8\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x27U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x27U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x27U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x27U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x26U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x26U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x26U))))))) 
                         << 0x27U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x28U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x28U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x28U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x28U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x27U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x27U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x27U))))))) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x29U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x29U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x29U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x29U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x28U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x28U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x28U))))))) 
                         << 0x29U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x2aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x29U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x29U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x29U))))))) 
                         << 0x2aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x2bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2aU))))))) 
                         << 0x2bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x2cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2bU))))))) 
                         << 0x2cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x2dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2cU))))))) 
                         << 0x2dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x2eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2dU))))))) 
                         << 0x2eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x2fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2eU))))))) 
                         << 0x2fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x30U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x30U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x30U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2fU))))))) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x31U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x31U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x31U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x31U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x30U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x30U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x30U))))))) 
                         << 0x31U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x32U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x32U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x32U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x32U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x31U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x31U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x31U))))))) 
                         << 0x32U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x33U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x33U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x33U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x33U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x32U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x32U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x32U))))))) 
                         << 0x33U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x34U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x34U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x34U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x34U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x33U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x33U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x33U))))))) 
                         << 0x34U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x35U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x35U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x35U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x35U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x34U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x34U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x34U))))))) 
                         << 0x35U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x36U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x36U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x36U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x36U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x35U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x35U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x35U))))))) 
                         << 0x36U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x37U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x37U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x37U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x37U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x36U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x36U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x36U))))))) 
                         << 0x37U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x38U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x38U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x38U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x38U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x37U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x37U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x37U))))))) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x39U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x39U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x39U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x39U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x38U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x38U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x38U))))))) 
                         << 0x39U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x3aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x39U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x39U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x39U))))))) 
                         << 0x3aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x3bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x3aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x3aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x3aU))))))) 
                         << 0x3bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x3cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x3bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x3bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x3bU))))))) 
                         << 0x3cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x3dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x3cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x3cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x3cU))))))) 
                         << 0x3dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x3eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x3dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x3dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x3dU))))))) 
                         << 0x3eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][2U] 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][2U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [2U] 
                                                          >> 0x3fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x3eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x3eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x3eU))))))) 
                         << 0x3fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | (IData)((IData)((1U & (((IData)(
                                                        vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                        [4U]
                                                        [3U]) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U]))) 
                                               ^ ((
                                                   (((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [0U]
                                                             [4U] 
                                                             >> 0x3fU))))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 1U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 1U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 1U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 1U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [0U]
                                                             [4U])))))) 
                         << 1U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 2U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 2U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 2U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 2U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 1U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 1U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 1U))))))) 
                         << 2U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 3U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 3U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 3U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 3U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 2U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 2U))))))) 
                         << 3U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 4U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 4U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 4U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 4U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 3U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 3U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 3U))))))) 
                         << 4U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 5U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 5U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 5U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 5U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 4U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 4U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 4U))))))) 
                         << 5U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 6U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 6U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 6U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 6U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 5U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 5U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 5U))))))) 
                         << 6U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 7U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 7U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 7U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 7U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 6U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 6U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 6U))))))) 
                         << 7U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 8U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 8U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 8U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 8U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 7U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 7U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 7U))))))) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 9U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 9U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 9U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 9U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 8U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 8U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 8U))))))) 
                         << 9U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0xaU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0xaU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0xaU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0xaU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 9U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 9U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 9U))))))) 
                         << 0xaU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0xbU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0xbU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0xbU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0xbU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0xaU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0xaU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0xaU))))))) 
                         << 0xbU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0xcU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0xcU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0xcU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0xcU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0xbU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0xbU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0xbU))))))) 
                         << 0xcU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0xdU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0xdU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0xdU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0xdU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0xcU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0xcU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0xcU))))))) 
                         << 0xdU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0xeU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0xeU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0xeU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0xeU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0xdU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0xdU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0xdU))))))) 
                         << 0xeU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0xfU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0xfU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0xfU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0xfU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0xeU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0xeU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0xeU))))))) 
                         << 0xfU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x10U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x10U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x10U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0xfU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0xfU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0xfU))))))) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x11U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x11U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x11U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x11U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x10U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x10U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x10U))))))) 
                         << 0x11U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x12U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x12U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x12U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x12U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x11U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x11U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x11U))))))) 
                         << 0x12U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x13U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x13U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x13U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x13U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x12U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x12U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x12U))))))) 
                         << 0x13U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x14U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x14U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x14U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x14U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x13U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x13U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x13U))))))) 
                         << 0x14U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x15U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x15U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x15U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x15U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x14U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x14U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x14U))))))) 
                         << 0x15U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x16U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x16U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x16U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x16U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x15U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x15U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x15U))))))) 
                         << 0x16U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x17U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x17U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x17U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x17U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x16U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x16U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x16U))))))) 
                         << 0x17U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x18U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x18U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x18U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x17U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x17U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x17U))))))) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x19U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x19U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x19U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x18U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x18U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x18U))))))) 
                         << 0x19U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x1aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x1aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x1aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x19U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x19U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x19U))))))) 
                         << 0x1aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x1bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x1bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x1bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x1bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x1aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x1aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x1aU))))))) 
                         << 0x1bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x1cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x1cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x1cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x1bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x1bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x1bU))))))) 
                         << 0x1cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x1dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x1dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x1dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x1dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x1cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x1cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x1cU))))))) 
                         << 0x1dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x1eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x1eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x1eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x1eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x1dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x1dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x1dU))))))) 
                         << 0x1eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x1fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x1fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x1fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x1eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x1eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x1eU))))))) 
                         << 0x1fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x20U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x20U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x20U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x1fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x1fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x1fU))))))) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x21U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x21U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x21U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x21U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x20U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x20U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x20U))))))) 
                         << 0x21U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x22U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x22U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x22U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x22U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x21U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x21U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x21U))))))) 
                         << 0x22U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x23U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x23U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x23U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x23U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x22U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x22U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x22U))))))) 
                         << 0x23U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x24U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x24U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x24U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x24U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x23U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x23U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x23U))))))) 
                         << 0x24U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x25U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x25U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x25U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x25U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x24U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x24U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x24U))))))) 
                         << 0x25U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x26U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x26U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x26U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x26U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x25U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x25U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x25U))))))) 
                         << 0x26U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x27U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x27U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x27U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x27U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x26U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x26U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x26U))))))) 
                         << 0x27U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x28U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x28U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x28U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x28U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x27U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x27U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x27U))))))) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x29U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x29U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x29U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x29U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x28U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x28U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x28U))))))) 
                         << 0x29U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x2aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x29U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x29U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x29U))))))) 
                         << 0x2aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x2bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2aU))))))) 
                         << 0x2bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x2cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2bU))))))) 
                         << 0x2cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x2dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2cU))))))) 
                         << 0x2dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x2eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2dU))))))) 
                         << 0x2eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x2fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2eU))))))) 
                         << 0x2fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x30U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x30U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x30U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2fU))))))) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x31U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x31U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x31U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x31U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x30U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x30U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x30U))))))) 
                         << 0x31U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x32U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x32U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x32U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x32U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x31U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x31U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x31U))))))) 
                         << 0x32U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x33U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x33U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x33U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x33U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x32U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x32U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x32U))))))) 
                         << 0x33U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x34U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x34U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x34U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x34U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x33U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x33U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x33U))))))) 
                         << 0x34U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x35U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x35U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x35U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x35U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x34U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x34U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x34U))))))) 
                         << 0x35U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x36U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x36U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x36U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x36U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x35U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x35U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x35U))))))) 
                         << 0x36U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x37U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x37U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x37U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x37U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x36U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x36U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x36U))))))) 
                         << 0x37U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x38U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x38U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x38U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x38U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x37U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x37U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x37U))))))) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x39U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x39U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x39U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x39U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x38U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x38U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x38U))))))) 
                         << 0x39U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x3aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x39U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x39U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x39U))))))) 
                         << 0x3aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x3bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x3aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x3aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x3aU))))))) 
                         << 0x3bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x3cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x3bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x3bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x3bU))))))) 
                         << 0x3cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x3dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x3cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x3cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x3cU))))))) 
                         << 0x3dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x3eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x3dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x3dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x3dU))))))) 
                         << 0x3eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][3U] 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [3U] 
                                                          >> 0x3fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x3eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x3eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x3eU))))))) 
                         << 0x3fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffffffffffeULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | (IData)((IData)((1U & (((IData)(
                                                        vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                        [4U]
                                                        [4U]) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U]))) 
                                               ^ ((
                                                   (((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [0U]
                                                             [4U] 
                                                             >> 0x3fU))))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffffffffffdULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 1U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 1U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 1U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 1U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [0U]) 
                                                      ^ (IData)(
                                                                vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [1U])) 
                                                     ^ (IData)(
                                                               vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [2U])) 
                                                    ^ (IData)(
                                                              vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [3U])) 
                                                   ^ (IData)(
                                                             vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [0U]
                                                             [4U])))))) 
                         << 1U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffffffffffbULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 2U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 2U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 2U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 2U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 1U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 1U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 1U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 1U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 1U))))))) 
                         << 2U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffffffffff7ULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 3U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 3U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 3U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 3U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 2U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 2U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 2U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 2U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 2U))))))) 
                         << 3U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffffffffffefULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 4U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 4U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 4U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 4U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 3U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 3U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 3U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 3U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 3U))))))) 
                         << 4U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffffffffffdfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 5U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 5U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 5U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 5U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 4U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 4U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 4U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 4U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 4U))))))) 
                         << 5U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffffffffffbfULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 6U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 6U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 6U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 6U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 5U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 5U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 5U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 5U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 5U))))))) 
                         << 6U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffffffffff7fULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 7U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 7U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 7U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 7U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 6U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 6U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 6U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 6U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 6U))))))) 
                         << 7U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffffffffeffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 8U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 8U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 8U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 8U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 7U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 7U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 7U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 7U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 7U))))))) 
                         << 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffffffffdffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 9U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 9U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 9U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 9U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 8U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 8U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 8U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 8U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 8U))))))) 
                         << 9U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffffffffbffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0xaU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0xaU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0xaU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0xaU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 9U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 9U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 9U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 9U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 9U))))))) 
                         << 0xaU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffffffff7ffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0xbU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0xbU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0xbU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0xbU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0xaU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0xaU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0xaU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0xaU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0xaU))))))) 
                         << 0xbU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffffffffefffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0xcU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0xcU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0xcU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0xcU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0xbU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0xbU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0xbU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0xbU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0xbU))))))) 
                         << 0xcU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffffffffdfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0xdU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0xdU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0xdU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0xdU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0xcU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0xcU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0xcU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0xcU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0xcU))))))) 
                         << 0xdU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffffffffbfffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0xeU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0xeU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0xeU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0xeU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0xdU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0xdU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0xdU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0xdU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0xdU))))))) 
                         << 0xeU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffffffff7fffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0xfU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0xfU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0xfU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0xfU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0xeU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0xeU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0xeU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0xeU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0xeU))))))) 
                         << 0xfU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffffffeffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x10U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x10U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x10U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x10U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0xfU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0xfU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0xfU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0xfU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0xfU))))))) 
                         << 0x10U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffffffdffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x11U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x11U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x11U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x11U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x10U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x10U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x10U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x10U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x10U))))))) 
                         << 0x11U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffffffbffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x12U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x12U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x12U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x12U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x11U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x11U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x11U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x11U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x11U))))))) 
                         << 0x12U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffffff7ffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x13U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x13U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x13U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x13U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x12U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x12U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x12U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x12U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x12U))))))) 
                         << 0x13U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffffffefffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x14U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x14U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x14U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x14U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x13U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x13U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x13U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x13U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x13U))))))) 
                         << 0x14U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffffffdfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x15U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x15U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x15U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x15U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x14U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x14U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x14U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x14U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x14U))))))) 
                         << 0x15U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffffffbfffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x16U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x16U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x16U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x16U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x15U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x15U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x15U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x15U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x15U))))))) 
                         << 0x16U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffffff7fffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x17U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x17U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x17U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x17U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x16U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x16U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x16U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x16U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x16U))))))) 
                         << 0x17U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffffeffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x18U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x18U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x18U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x18U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x17U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x17U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x17U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x17U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x17U))))))) 
                         << 0x18U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffffdffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x19U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x19U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x19U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x19U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x18U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x18U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x18U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x18U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x18U))))))) 
                         << 0x19U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffffbffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x1aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x1aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x1aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x1aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x19U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x19U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x19U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x19U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x19U))))))) 
                         << 0x1aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffff7ffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x1bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x1bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x1bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x1bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x1aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x1aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x1aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x1aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x1aU))))))) 
                         << 0x1bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffffefffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x1cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x1cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x1cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x1cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x1bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x1bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x1bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x1bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x1bU))))))) 
                         << 0x1cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffffdfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x1dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x1dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x1dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x1dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x1cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x1cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x1cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x1cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x1cU))))))) 
                         << 0x1dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffffbfffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x1eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x1eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x1eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x1eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x1dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x1dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x1dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x1dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x1dU))))))) 
                         << 0x1eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffff7fffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x1fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x1fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x1fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x1fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x1eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x1eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x1eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x1eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x1eU))))))) 
                         << 0x1fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffeffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x20U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x20U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x20U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x20U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x1fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x1fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x1fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x1fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x1fU))))))) 
                         << 0x20U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffdffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x21U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x21U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x21U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x21U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x20U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x20U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x20U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x20U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x20U))))))) 
                         << 0x21U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffffbffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x22U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x22U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x22U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x22U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x21U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x21U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x21U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x21U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x21U))))))) 
                         << 0x22U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffff7ffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x23U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x23U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x23U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x23U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x22U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x22U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x22U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x22U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x22U))))))) 
                         << 0x23U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffefffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x24U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x24U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x24U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x24U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x23U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x23U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x23U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x23U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x23U))))))) 
                         << 0x24U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffdfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x25U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x25U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x25U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x25U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x24U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x24U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x24U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x24U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x24U))))))) 
                         << 0x25U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffffbfffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x26U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x26U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x26U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x26U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x25U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x25U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x25U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x25U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x25U))))))) 
                         << 0x26U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffff7fffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x27U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x27U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x27U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x27U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x26U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x26U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x26U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x26U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x26U))))))) 
                         << 0x27U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffeffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x28U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x28U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x28U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x28U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x27U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x27U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x27U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x27U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x27U))))))) 
                         << 0x28U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffdffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x29U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x29U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x29U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x29U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x28U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x28U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x28U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x28U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x28U))))))) 
                         << 0x29U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffffbffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x2aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x29U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x29U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x29U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x29U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x29U))))))) 
                         << 0x2aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffff7ffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x2bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2aU))))))) 
                         << 0x2bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffefffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x2cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2bU))))))) 
                         << 0x2cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffdfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x2dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2cU))))))) 
                         << 0x2dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffffbfffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x2eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2dU))))))) 
                         << 0x2eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffff7fffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x2fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x2fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x2fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x2fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2eU))))))) 
                         << 0x2fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffeffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x30U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x30U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x30U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x30U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x2fU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x2fU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x2fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x2fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x2fU))))))) 
                         << 0x30U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffdffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x31U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x31U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x31U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x31U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x30U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x30U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x30U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x30U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x30U))))))) 
                         << 0x31U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfffbffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x32U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x32U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x32U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x32U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x31U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x31U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x31U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x31U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x31U))))))) 
                         << 0x32U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfff7ffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x33U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x33U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x33U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x33U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x32U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x32U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x32U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x32U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x32U))))))) 
                         << 0x33U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffefffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x34U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x34U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x34U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x34U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x33U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x33U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x33U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x33U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x33U))))))) 
                         << 0x34U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffdfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x35U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x35U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x35U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x35U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x34U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x34U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x34U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x34U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x34U))))))) 
                         << 0x35U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xffbfffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x36U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x36U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x36U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x36U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x35U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x35U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x35U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x35U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x35U))))))) 
                         << 0x36U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xff7fffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x37U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x37U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x37U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x37U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x36U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x36U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x36U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x36U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x36U))))))) 
                         << 0x37U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfeffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x38U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x38U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x38U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x38U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x37U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x37U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x37U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x37U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x37U))))))) 
                         << 0x38U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfdffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x39U)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x39U)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x39U))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x39U)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x38U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x38U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x38U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x38U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x38U))))))) 
                         << 0x39U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xfbffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x3aU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3aU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3aU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3aU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x39U)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x39U))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x39U))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x39U))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x39U))))))) 
                         << 0x3aU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xf7ffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x3bU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3bU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3bU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3bU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x3aU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x3aU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x3aU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x3aU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x3aU))))))) 
                         << 0x3bU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xefffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x3cU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3cU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3cU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3cU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x3bU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x3bU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x3bU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x3bU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x3bU))))))) 
                         << 0x3cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xdfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x3dU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3dU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3dU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3dU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x3cU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x3cU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x3cU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x3cU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x3cU))))))) 
                         << 0x3dU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0xbfffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x3eU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3eU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3eU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3eU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x3dU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x3dU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x3dU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x3dU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x3dU))))))) 
                         << 0x3eU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta[4U][4U] 
        = ((0x7fffffffffffffffULL & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U]) | ((QData)((IData)((1U & (((IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                          [4U]
                                                          [4U] 
                                                          >> 0x3fU)) 
                                                 ^ 
                                                 (((((IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [0U] 
                                                              >> 0x3fU)) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [3U]
                                                                [1U] 
                                                                >> 0x3fU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [3U]
                                                               [2U] 
                                                               >> 0x3fU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [3U]
                                                              [3U] 
                                                              >> 0x3fU))) 
                                                  ^ (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                             [3U]
                                                             [4U] 
                                                             >> 0x3fU)))) 
                                                ^ (
                                                   ((((IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [0U] 
                                                               >> 0x3eU)) 
                                                      ^ (IData)(
                                                                (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                 [0U]
                                                                 [1U] 
                                                                 >> 0x3eU))) 
                                                     ^ (IData)(
                                                               (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                                [0U]
                                                                [2U] 
                                                                >> 0x3eU))) 
                                                    ^ (IData)(
                                                              (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                               [0U]
                                                               [3U] 
                                                               >> 0x3eU))) 
                                                   ^ (IData)(
                                                             (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__state_s
                                                              [0U]
                                                              [4U] 
                                                              >> 0x3eU))))))) 
                         << 0x3fU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[0U][0U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
        [0U][0U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[1U][3U] 
        = (((QData)((IData)((0xfffffffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                  [0U]
                                                  [1U])))) 
            << 0x24U) | (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                         [0U][1U] >> 0x1cU));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[2U][1U] 
        = ((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][2U] << 3U) | (QData)((IData)((7U & (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                             [0U]
                                                             [2U] 
                                                             >> 0x3dU))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[3U][4U] 
        = (((QData)((IData)((0x7fffffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                 [0U]
                                                 [3U])))) 
            << 0x29U) | (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                         [0U][3U] >> 0x17U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[4U][2U] 
        = ((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [0U][4U] << 0x12U) | (QData)((IData)((0x3ffffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                             [0U]
                                                             [4U] 
                                                             >> 0x2eU))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[0U][2U] 
        = ((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [1U][0U] << 1U) | (QData)((IData)((1U & (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                             [1U]
                                                             [0U] 
                                                             >> 0x3fU))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[1U][0U] 
        = (((QData)((IData)((0xfffffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                [1U]
                                                [1U])))) 
            << 0x2cU) | (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                         [1U][1U] >> 0x14U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[2U][3U] 
        = ((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [1U][2U] << 0xaU) | (QData)((IData)((0x3ffU 
                                                 & (IData)(
                                                           (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                            [1U]
                                                            [2U] 
                                                            >> 0x36U))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[3U][1U] 
        = (((QData)((IData)((0x7ffffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                [1U]
                                                [3U])))) 
            << 0x2dU) | (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                         [1U][3U] >> 0x13U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[4U][4U] 
        = ((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [1U][4U] << 2U) | (QData)((IData)((3U & (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                             [1U]
                                                             [4U] 
                                                             >> 0x3eU))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[0U][4U] 
        = (((QData)((IData)((3U & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                          [2U][0U])))) 
            << 0x3eU) | (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                         [2U][0U] >> 2U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[1U][2U] 
        = ((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][1U] << 6U) | (QData)((IData)((0x3fU 
                                               & (IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                          [2U]
                                                          [1U] 
                                                          >> 0x3aU))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[2U][0U] 
        = (((QData)((IData)((0x1fffffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                 [2U]
                                                 [2U])))) 
            << 0x2bU) | (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                         [2U][2U] >> 0x15U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[3U][3U] 
        = ((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [2U][3U] << 0xfU) | (QData)((IData)((0x7fffU 
                                                 & (IData)(
                                                           (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                            [2U]
                                                            [3U] 
                                                            >> 0x31U))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[4U][1U] 
        = (((QData)((IData)((7U & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                          [2U][4U])))) 
            << 0x3dU) | (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                         [2U][4U] >> 3U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[0U][1U] 
        = ((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [3U][0U] << 0x1cU) | (QData)((IData)((0xfffffffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                             [3U]
                                                             [0U] 
                                                             >> 0x24U))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[1U][4U] 
        = (((QData)((IData)((0x1ffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                              [3U][1U])))) 
            << 0x37U) | (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                         [3U][1U] >> 9U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[2U][2U] 
        = ((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [3U][2U] << 0x19U) | (QData)((IData)((0x1ffffffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                             [3U]
                                                             [2U] 
                                                             >> 0x27U))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[3U][0U] 
        = ((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [3U][3U] << 0x15U) | (QData)((IData)((0x1fffffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                             [3U]
                                                             [3U] 
                                                             >> 0x2bU))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[4U][3U] 
        = (((QData)((IData)((0xffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                             [3U][4U])))) 
            << 0x38U) | (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                         [3U][4U] >> 8U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[0U][3U] 
        = ((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][0U] << 0x1bU) | (QData)((IData)((0x7ffffffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                             [4U]
                                                             [0U] 
                                                             >> 0x25U))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[1U][1U] 
        = ((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][1U] << 0x14U) | (QData)((IData)((0xfffffU 
                                                  & (IData)(
                                                            (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                             [4U]
                                                             [1U] 
                                                             >> 0x2cU))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[2U][4U] 
        = (((QData)((IData)((0x1ffffffU & (IData)(vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                  [4U]
                                                  [2U])))) 
            << 0x27U) | (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                         [4U][2U] >> 0x19U));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[3U][2U] 
        = ((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][3U] << 8U) | (QData)((IData)((0xffU 
                                               & (IData)(
                                                         (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                          [4U]
                                                          [3U] 
                                                          >> 0x38U))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi[4U][0U] 
        = ((vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
            [4U][4U] << 0xeU) | (QData)((IData)((0x3fffU 
                                                 & (IData)(
                                                           (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__theta
                                                            [4U]
                                                            [4U] 
                                                            >> 0x32U))))));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[0U][0U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [0U][0U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [1U][0U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [2U][0U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[0U][1U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [0U][1U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [1U][1U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [2U][1U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[0U][2U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [0U][2U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [1U][2U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [2U][2U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[0U][3U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [0U][3U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [1U][3U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [2U][3U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[0U][4U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [0U][4U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [1U][4U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [2U][4U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[1U][0U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [1U][0U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [2U][0U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [3U][0U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[1U][1U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [1U][1U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [2U][1U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [3U][1U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[1U][2U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [1U][2U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [2U][2U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [3U][2U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[1U][3U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [1U][3U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [2U][3U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [3U][3U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[1U][4U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [1U][4U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [2U][4U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [3U][4U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[2U][0U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [2U][0U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [3U][0U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [4U][0U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[2U][1U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [2U][1U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [3U][1U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [4U][1U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[2U][2U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [2U][2U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [3U][2U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [4U][2U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[2U][3U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [2U][3U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [3U][3U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [4U][3U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[2U][4U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [2U][4U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [3U][4U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [4U][4U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[3U][0U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [3U][0U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [4U][0U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [0U][0U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[3U][1U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [3U][1U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [4U][1U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [0U][1U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[3U][2U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [3U][2U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [4U][2U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [0U][2U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[3U][3U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [3U][3U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [4U][3U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [0U][3U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[3U][4U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [3U][4U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [4U][4U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [0U][4U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[4U][0U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [4U][0U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [0U][0U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [1U][0U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[4U][1U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [4U][1U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [0U][1U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [1U][1U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[4U][2U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [4U][2U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [0U][2U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [1U][2U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[4U][3U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [4U][3U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [0U][3U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [1U][3U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi[4U][4U] 
        = (vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
           [4U][4U] ^ ((~ vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                        [0U][4U]) & vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__pi
                       [1U][4U]));
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[0U][1U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [0U][1U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[0U][2U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [0U][2U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[0U][3U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [0U][3U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[0U][4U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [0U][4U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[1U][0U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [1U][0U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[1U][1U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [1U][1U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[1U][2U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [1U][2U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[1U][3U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [1U][3U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[1U][4U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [1U][4U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[2U][0U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [2U][0U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[2U][1U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [2U][1U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[2U][2U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [2U][2U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[2U][3U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [2U][3U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[2U][4U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [2U][4U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[3U][0U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [3U][0U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[3U][1U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [3U][1U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[3U][2U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [3U][2U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[3U][3U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [3U][3U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[3U][4U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [3U][4U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[4U][0U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [4U][0U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[4U][1U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [4U][1U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[4U][2U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [4U][2U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[4U][3U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [4U][3U];
    vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__iota[4U][4U] 
        = vlSelfRef.tb__DOT__dut__DOT__keccak_f1600_inst__DOT__chi
        [4U][4U];
}

extern const VlUnpacked<CData/*7:0*/, 8> Vtb__ConstPool__TABLE_ha02b9d81_0;
extern const VlUnpacked<CData/*7:0*/, 8> Vtb__ConstPool__TABLE_hb99522a5_0;
extern const VlUnpacked<IData/*31:0*/, 8> Vtb__ConstPool__TABLE_h3e75c2ad_0;
extern const VlUnpacked<CData/*4:0*/, 8> Vtb__ConstPool__TABLE_h010b2d2f_0;
extern const VlUnpacked<CData/*4:0*/, 8> Vtb__ConstPool__TABLE_he7b302ea_0;

VL_INLINE_OPT void Vtb___024root___nba_sequent__TOP__9(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_sequent__TOP__9\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
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
    __Vtableidx1 = vlSelfRef.tb__DOT__mode;
    vlSelfRef.tb__DOT__dut__DOT__sha3_rate = Vtb__ConstPool__TABLE_ha02b9d81_0
        [__Vtableidx1];
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
}

VL_INLINE_OPT void Vtb___024root___nba_comb__TOP__0(Vtb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___nba_comb__TOP__0\n"); );
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
                            goto __Vlabel847;
                        } else if ((1U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8082ULL;
                            goto __Vlabel847;
                        } else if ((2U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x800000000000808aULL;
                            goto __Vlabel847;
                        } else if ((3U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000080008000ULL;
                            goto __Vlabel847;
                        } else if ((4U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x808bULL;
                            goto __Vlabel847;
                        } else if ((5U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x80000001ULL;
                            goto __Vlabel847;
                        } else if ((6U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000080008081ULL;
                            goto __Vlabel847;
                        } else {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000000008009ULL;
                            goto __Vlabel847;
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
                            goto __Vlabel847;
                        } else if ((9U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x88ULL;
                            goto __Vlabel847;
                        } else if ((0xaU == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x80008009ULL;
                            goto __Vlabel847;
                        } else if ((0xbU == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000aULL;
                            goto __Vlabel847;
                        } else if ((0xcU == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000808bULL;
                            goto __Vlabel847;
                        } else if ((0xdU == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x800000000000008bULL;
                            goto __Vlabel847;
                        } else if ((0xeU == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000000008089ULL;
                            goto __Vlabel847;
                        } else {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000000008003ULL;
                            goto __Vlabel847;
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
                            goto __Vlabel847;
                        } else if ((0x11U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000000000080ULL;
                            goto __Vlabel847;
                        } else if ((0x12U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x800aULL;
                            goto __Vlabel847;
                        } else if ((0x13U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x800000008000000aULL;
                            goto __Vlabel847;
                        } else if ((0x14U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000080008081ULL;
                            goto __Vlabel847;
                        } else if ((0x15U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000000008080ULL;
                            goto __Vlabel847;
                        } else if ((0x16U == vlSelfRef.__Vfunc_rc__377__round)) {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x80000001ULL;
                            goto __Vlabel847;
                        } else {
                            vlSelfRef.__Vfunc_rc__377__Vfuncout = 0x8000000080008008ULL;
                            goto __Vlabel847;
                        }
                    } else {
                        vlSelfRef.__Vfunc_rc__377__Vfuncout = 0ULL;
                        goto __Vlabel847;
                    }
                    __Vlabel847: ;
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
