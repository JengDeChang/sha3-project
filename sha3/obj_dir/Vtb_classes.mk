# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtb \
	Vtb___024root__DepSet_hfe20aad3__0 \
	Vtb___024root__DepSet_hfe20aad3__1 \
	Vtb___024root__DepSet_ha183790c__0 \
	Vtb___024root__DepSet_ha183790c__1 \
	Vtb___024root__DepSet_ha183790c__2 \
	Vtb___024root__DepSet_ha183790c__3 \
	Vtb___024root__DepSet_ha183790c__4 \
	Vtb___024root__DepSet_ha183790c__5 \
	Vtb___024root__DepSet_ha183790c__6 \
	Vtb___024root__DepSet_ha183790c__7 \
	Vtb___024root__DepSet_ha183790c__8 \
	Vtb___024root__DepSet_ha183790c__9 \
	Vtb___024root__DepSet_ha183790c__10 \
	Vtb___024root__DepSet_ha183790c__11 \
	Vtb___024root__DepSet_ha183790c__12 \
	Vtb___024root__DepSet_ha183790c__13 \
	Vtb___024root__DepSet_ha183790c__14 \
	Vtb___024root__DepSet_ha183790c__15 \
	Vtb___024root__DepSet_ha183790c__16 \
	Vtb___024root__DepSet_ha183790c__17 \
	Vtb___024root__DepSet_ha183790c__18 \
	Vtb___024root__DepSet_ha183790c__19 \
	Vtb___024root__DepSet_ha183790c__20 \
	Vtb___024root__DepSet_ha183790c__21 \
	Vtb___024root__DepSet_ha183790c__22 \
	Vtb___024root__DepSet_ha183790c__23 \
	Vtb___024root__DepSet_ha183790c__24 \
	Vtb___024root__DepSet_ha183790c__25 \
	Vtb___024root__DepSet_ha183790c__26 \
	Vtb___024root__DepSet_ha183790c__27 \
	Vtb___024root__DepSet_ha183790c__28 \
	Vtb___024root__DepSet_ha183790c__29 \
	Vtb___024root__DepSet_ha183790c__30 \
	Vtb___024root__DepSet_ha183790c__31 \
	Vtb___024root__DepSet_ha183790c__32 \
	Vtb___024root__DepSet_ha183790c__33 \
	Vtb__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb__ConstPool_0 \
	Vtb___024root__Slow \
	Vtb___024root__DepSet_hfe20aad3__0__Slow \
	Vtb___024root__DepSet_ha183790c__0__Slow \
	Vtb___024root__DepSet_ha183790c__1__Slow \
	Vtb___024root__DepSet_ha183790c__2__Slow \
	Vtb___024root__DepSet_ha183790c__3__Slow \
	Vtb___024root__DepSet_ha183790c__4__Slow \
	Vtb___024root__DepSet_ha183790c__5__Slow \
	Vtb___024root__DepSet_ha183790c__6__Slow \
	Vtb___024root__DepSet_ha183790c__7__Slow \
	Vtb___024root__DepSet_ha183790c__8__Slow \
	Vtb___024root__DepSet_ha183790c__9__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtb__Trace__0 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb__Syms \
	Vtb__Trace__0__Slow \
	Vtb__TraceDecls__0__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_vcd_c \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
