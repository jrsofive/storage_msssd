/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_TARGET_SPARC_GENERATED_TRACERS_H
#define TRACE_TARGET_SPARC_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_MMU_HELPER_DFAULT_EVENT;
extern TraceEvent _TRACE_MMU_HELPER_DPROT_EVENT;
extern TraceEvent _TRACE_MMU_HELPER_DMISS_EVENT;
extern TraceEvent _TRACE_MMU_HELPER_TFAULT_EVENT;
extern TraceEvent _TRACE_MMU_HELPER_TMISS_EVENT;
extern TraceEvent _TRACE_MMU_HELPER_GET_PHYS_ADDR_CODE_EVENT;
extern TraceEvent _TRACE_MMU_HELPER_GET_PHYS_ADDR_DATA_EVENT;
extern TraceEvent _TRACE_MMU_HELPER_MMU_FAULT_EVENT;
extern TraceEvent _TRACE_SUN4M_CPU_INTERRUPT_EVENT;
extern TraceEvent _TRACE_SUN4M_CPU_RESET_INTERRUPT_EVENT;
extern TraceEvent _TRACE_INT_HELPER_SET_SOFTINT_EVENT;
extern TraceEvent _TRACE_INT_HELPER_CLEAR_SOFTINT_EVENT;
extern TraceEvent _TRACE_INT_HELPER_WRITE_SOFTINT_EVENT;
extern TraceEvent _TRACE_SPARC64_CPU_CHECK_IRQS_RESET_IRQ_EVENT;
extern TraceEvent _TRACE_SPARC64_CPU_CHECK_IRQS_NOSET_IRQ_EVENT;
extern TraceEvent _TRACE_SPARC64_CPU_CHECK_IRQS_SET_IRQ_EVENT;
extern TraceEvent _TRACE_SPARC64_CPU_CHECK_IRQS_DISABLED_EVENT;
extern TraceEvent _TRACE_WIN_HELPER_GREGSET_ERROR_EVENT;
extern TraceEvent _TRACE_WIN_HELPER_SWITCH_PSTATE_EVENT;
extern TraceEvent _TRACE_WIN_HELPER_NO_SWITCH_PSTATE_EVENT;
extern TraceEvent _TRACE_WIN_HELPER_WRPIL_EVENT;
extern TraceEvent _TRACE_WIN_HELPER_DONE_EVENT;
extern TraceEvent _TRACE_WIN_HELPER_RETRY_EVENT;
extern uint16_t _TRACE_MMU_HELPER_DFAULT_DSTATE;
extern uint16_t _TRACE_MMU_HELPER_DPROT_DSTATE;
extern uint16_t _TRACE_MMU_HELPER_DMISS_DSTATE;
extern uint16_t _TRACE_MMU_HELPER_TFAULT_DSTATE;
extern uint16_t _TRACE_MMU_HELPER_TMISS_DSTATE;
extern uint16_t _TRACE_MMU_HELPER_GET_PHYS_ADDR_CODE_DSTATE;
extern uint16_t _TRACE_MMU_HELPER_GET_PHYS_ADDR_DATA_DSTATE;
extern uint16_t _TRACE_MMU_HELPER_MMU_FAULT_DSTATE;
extern uint16_t _TRACE_SUN4M_CPU_INTERRUPT_DSTATE;
extern uint16_t _TRACE_SUN4M_CPU_RESET_INTERRUPT_DSTATE;
extern uint16_t _TRACE_INT_HELPER_SET_SOFTINT_DSTATE;
extern uint16_t _TRACE_INT_HELPER_CLEAR_SOFTINT_DSTATE;
extern uint16_t _TRACE_INT_HELPER_WRITE_SOFTINT_DSTATE;
extern uint16_t _TRACE_SPARC64_CPU_CHECK_IRQS_RESET_IRQ_DSTATE;
extern uint16_t _TRACE_SPARC64_CPU_CHECK_IRQS_NOSET_IRQ_DSTATE;
extern uint16_t _TRACE_SPARC64_CPU_CHECK_IRQS_SET_IRQ_DSTATE;
extern uint16_t _TRACE_SPARC64_CPU_CHECK_IRQS_DISABLED_DSTATE;
extern uint16_t _TRACE_WIN_HELPER_GREGSET_ERROR_DSTATE;
extern uint16_t _TRACE_WIN_HELPER_SWITCH_PSTATE_DSTATE;
extern uint16_t _TRACE_WIN_HELPER_NO_SWITCH_PSTATE_DSTATE;
extern uint16_t _TRACE_WIN_HELPER_WRPIL_DSTATE;
extern uint16_t _TRACE_WIN_HELPER_DONE_DSTATE;
extern uint16_t _TRACE_WIN_HELPER_RETRY_DSTATE;
#define TRACE_MMU_HELPER_DFAULT_ENABLED 1
#define TRACE_MMU_HELPER_DPROT_ENABLED 1
#define TRACE_MMU_HELPER_DMISS_ENABLED 1
#define TRACE_MMU_HELPER_TFAULT_ENABLED 1
#define TRACE_MMU_HELPER_TMISS_ENABLED 1
#define TRACE_MMU_HELPER_GET_PHYS_ADDR_CODE_ENABLED 1
#define TRACE_MMU_HELPER_GET_PHYS_ADDR_DATA_ENABLED 1
#define TRACE_MMU_HELPER_MMU_FAULT_ENABLED 1
#define TRACE_SUN4M_CPU_INTERRUPT_ENABLED 1
#define TRACE_SUN4M_CPU_RESET_INTERRUPT_ENABLED 1
#define TRACE_INT_HELPER_SET_SOFTINT_ENABLED 1
#define TRACE_INT_HELPER_CLEAR_SOFTINT_ENABLED 1
#define TRACE_INT_HELPER_WRITE_SOFTINT_ENABLED 1
#define TRACE_SPARC64_CPU_CHECK_IRQS_RESET_IRQ_ENABLED 1
#define TRACE_SPARC64_CPU_CHECK_IRQS_NOSET_IRQ_ENABLED 1
#define TRACE_SPARC64_CPU_CHECK_IRQS_SET_IRQ_ENABLED 1
#define TRACE_SPARC64_CPU_CHECK_IRQS_DISABLED_ENABLED 1
#define TRACE_WIN_HELPER_GREGSET_ERROR_ENABLED 1
#define TRACE_WIN_HELPER_SWITCH_PSTATE_ENABLED 1
#define TRACE_WIN_HELPER_NO_SWITCH_PSTATE_ENABLED 1
#define TRACE_WIN_HELPER_WRPIL_ENABLED 1
#define TRACE_WIN_HELPER_DONE_ENABLED 1
#define TRACE_WIN_HELPER_RETRY_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_MMU_HELPER_DFAULT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MMU_HELPER_DFAULT) || \
    false)

static inline void _nocheck__trace_mmu_helper_dfault(uint64_t address, uint64_t context, int mmu_idx, uint32_t tl)
{
    if (trace_event_get_state(TRACE_MMU_HELPER_DFAULT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:mmu_helper_dfault " "DFAULT at 0x%"PRIx64" context 0x%"PRIx64" mmu_idx=%d tl=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , address, context, mmu_idx, tl);
#line 97 "trace/trace-target_sparc.h"
        } else {
#line 4 "/FEMU/target/sparc/trace-events"
            qemu_log("mmu_helper_dfault " "DFAULT at 0x%"PRIx64" context 0x%"PRIx64" mmu_idx=%d tl=%d" "\n", address, context, mmu_idx, tl);
#line 101 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_mmu_helper_dfault(uint64_t address, uint64_t context, int mmu_idx, uint32_t tl)
{
    if (true) {
        _nocheck__trace_mmu_helper_dfault(address, context, mmu_idx, tl);
    }
}

#define TRACE_MMU_HELPER_DPROT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MMU_HELPER_DPROT) || \
    false)

static inline void _nocheck__trace_mmu_helper_dprot(uint64_t address, uint64_t context, int mmu_idx, uint32_t tl)
{
    if (trace_event_get_state(TRACE_MMU_HELPER_DPROT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:mmu_helper_dprot " "DPROT at 0x%"PRIx64" context 0x%"PRIx64" mmu_idx=%d tl=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , address, context, mmu_idx, tl);
#line 128 "trace/trace-target_sparc.h"
        } else {
#line 5 "/FEMU/target/sparc/trace-events"
            qemu_log("mmu_helper_dprot " "DPROT at 0x%"PRIx64" context 0x%"PRIx64" mmu_idx=%d tl=%d" "\n", address, context, mmu_idx, tl);
#line 132 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_mmu_helper_dprot(uint64_t address, uint64_t context, int mmu_idx, uint32_t tl)
{
    if (true) {
        _nocheck__trace_mmu_helper_dprot(address, context, mmu_idx, tl);
    }
}

#define TRACE_MMU_HELPER_DMISS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MMU_HELPER_DMISS) || \
    false)

static inline void _nocheck__trace_mmu_helper_dmiss(uint64_t address, uint64_t context)
{
    if (trace_event_get_state(TRACE_MMU_HELPER_DMISS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:mmu_helper_dmiss " "DMISS at 0x%"PRIx64" context 0x%"PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , address, context);
#line 159 "trace/trace-target_sparc.h"
        } else {
#line 6 "/FEMU/target/sparc/trace-events"
            qemu_log("mmu_helper_dmiss " "DMISS at 0x%"PRIx64" context 0x%"PRIx64 "\n", address, context);
#line 163 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_mmu_helper_dmiss(uint64_t address, uint64_t context)
{
    if (true) {
        _nocheck__trace_mmu_helper_dmiss(address, context);
    }
}

#define TRACE_MMU_HELPER_TFAULT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MMU_HELPER_TFAULT) || \
    false)

static inline void _nocheck__trace_mmu_helper_tfault(uint64_t address, uint64_t context)
{
    if (trace_event_get_state(TRACE_MMU_HELPER_TFAULT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:mmu_helper_tfault " "TFAULT at 0x%"PRIx64" context 0x%"PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , address, context);
#line 190 "trace/trace-target_sparc.h"
        } else {
#line 7 "/FEMU/target/sparc/trace-events"
            qemu_log("mmu_helper_tfault " "TFAULT at 0x%"PRIx64" context 0x%"PRIx64 "\n", address, context);
#line 194 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_mmu_helper_tfault(uint64_t address, uint64_t context)
{
    if (true) {
        _nocheck__trace_mmu_helper_tfault(address, context);
    }
}

#define TRACE_MMU_HELPER_TMISS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MMU_HELPER_TMISS) || \
    false)

static inline void _nocheck__trace_mmu_helper_tmiss(uint64_t address, uint64_t context)
{
    if (trace_event_get_state(TRACE_MMU_HELPER_TMISS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:mmu_helper_tmiss " "TMISS at 0x%"PRIx64" context 0x%"PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , address, context);
#line 221 "trace/trace-target_sparc.h"
        } else {
#line 8 "/FEMU/target/sparc/trace-events"
            qemu_log("mmu_helper_tmiss " "TMISS at 0x%"PRIx64" context 0x%"PRIx64 "\n", address, context);
#line 225 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_mmu_helper_tmiss(uint64_t address, uint64_t context)
{
    if (true) {
        _nocheck__trace_mmu_helper_tmiss(address, context);
    }
}

#define TRACE_MMU_HELPER_GET_PHYS_ADDR_CODE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MMU_HELPER_GET_PHYS_ADDR_CODE) || \
    false)

static inline void _nocheck__trace_mmu_helper_get_phys_addr_code(uint32_t tl, int mmu_idx, uint64_t prim_context, uint64_t sec_context, uint64_t address)
{
    if (trace_event_get_state(TRACE_MMU_HELPER_GET_PHYS_ADDR_CODE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 9 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:mmu_helper_get_phys_addr_code " "tl=%d mmu_idx=%d primary context=0x%"PRIx64" secondary context=0x%"PRIx64" address=0x%"PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , tl, mmu_idx, prim_context, sec_context, address);
#line 252 "trace/trace-target_sparc.h"
        } else {
#line 9 "/FEMU/target/sparc/trace-events"
            qemu_log("mmu_helper_get_phys_addr_code " "tl=%d mmu_idx=%d primary context=0x%"PRIx64" secondary context=0x%"PRIx64" address=0x%"PRIx64 "\n", tl, mmu_idx, prim_context, sec_context, address);
#line 256 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_mmu_helper_get_phys_addr_code(uint32_t tl, int mmu_idx, uint64_t prim_context, uint64_t sec_context, uint64_t address)
{
    if (true) {
        _nocheck__trace_mmu_helper_get_phys_addr_code(tl, mmu_idx, prim_context, sec_context, address);
    }
}

#define TRACE_MMU_HELPER_GET_PHYS_ADDR_DATA_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MMU_HELPER_GET_PHYS_ADDR_DATA) || \
    false)

static inline void _nocheck__trace_mmu_helper_get_phys_addr_data(uint32_t tl, int mmu_idx, uint64_t prim_context, uint64_t sec_context, uint64_t address)
{
    if (trace_event_get_state(TRACE_MMU_HELPER_GET_PHYS_ADDR_DATA) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 10 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:mmu_helper_get_phys_addr_data " "tl=%d mmu_idx=%d primary context=0x%"PRIx64" secondary context=0x%"PRIx64" address=0x%"PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , tl, mmu_idx, prim_context, sec_context, address);
#line 283 "trace/trace-target_sparc.h"
        } else {
#line 10 "/FEMU/target/sparc/trace-events"
            qemu_log("mmu_helper_get_phys_addr_data " "tl=%d mmu_idx=%d primary context=0x%"PRIx64" secondary context=0x%"PRIx64" address=0x%"PRIx64 "\n", tl, mmu_idx, prim_context, sec_context, address);
#line 287 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_mmu_helper_get_phys_addr_data(uint32_t tl, int mmu_idx, uint64_t prim_context, uint64_t sec_context, uint64_t address)
{
    if (true) {
        _nocheck__trace_mmu_helper_get_phys_addr_data(tl, mmu_idx, prim_context, sec_context, address);
    }
}

#define TRACE_MMU_HELPER_MMU_FAULT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_MMU_HELPER_MMU_FAULT) || \
    false)

static inline void _nocheck__trace_mmu_helper_mmu_fault(uint64_t address, uint64_t paddr, int mmu_idx, uint32_t tl, uint64_t prim_context, uint64_t sec_context)
{
    if (trace_event_get_state(TRACE_MMU_HELPER_MMU_FAULT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:mmu_helper_mmu_fault " "Translate at 0x%"PRIx64" -> 0x%"PRIx64", mmu_idx=%d tl=%d primary context=0x%"PRIx64" secondary context=0x%"PRIx64 "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , address, paddr, mmu_idx, tl, prim_context, sec_context);
#line 314 "trace/trace-target_sparc.h"
        } else {
#line 11 "/FEMU/target/sparc/trace-events"
            qemu_log("mmu_helper_mmu_fault " "Translate at 0x%"PRIx64" -> 0x%"PRIx64", mmu_idx=%d tl=%d primary context=0x%"PRIx64" secondary context=0x%"PRIx64 "\n", address, paddr, mmu_idx, tl, prim_context, sec_context);
#line 318 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_mmu_helper_mmu_fault(uint64_t address, uint64_t paddr, int mmu_idx, uint32_t tl, uint64_t prim_context, uint64_t sec_context)
{
    if (true) {
        _nocheck__trace_mmu_helper_mmu_fault(address, paddr, mmu_idx, tl, prim_context, sec_context);
    }
}

#define TRACE_SUN4M_CPU_INTERRUPT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SUN4M_CPU_INTERRUPT) || \
    false)

static inline void _nocheck__trace_sun4m_cpu_interrupt(unsigned int level)
{
    if (trace_event_get_state(TRACE_SUN4M_CPU_INTERRUPT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:sun4m_cpu_interrupt " "Set CPU IRQ %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , level);
#line 345 "trace/trace-target_sparc.h"
        } else {
#line 14 "/FEMU/target/sparc/trace-events"
            qemu_log("sun4m_cpu_interrupt " "Set CPU IRQ %d" "\n", level);
#line 349 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_sun4m_cpu_interrupt(unsigned int level)
{
    if (true) {
        _nocheck__trace_sun4m_cpu_interrupt(level);
    }
}

#define TRACE_SUN4M_CPU_RESET_INTERRUPT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SUN4M_CPU_RESET_INTERRUPT) || \
    false)

static inline void _nocheck__trace_sun4m_cpu_reset_interrupt(unsigned int level)
{
    if (trace_event_get_state(TRACE_SUN4M_CPU_RESET_INTERRUPT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 15 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:sun4m_cpu_reset_interrupt " "Reset CPU IRQ %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , level);
#line 376 "trace/trace-target_sparc.h"
        } else {
#line 15 "/FEMU/target/sparc/trace-events"
            qemu_log("sun4m_cpu_reset_interrupt " "Reset CPU IRQ %d" "\n", level);
#line 380 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_sun4m_cpu_reset_interrupt(unsigned int level)
{
    if (true) {
        _nocheck__trace_sun4m_cpu_reset_interrupt(level);
    }
}

#define TRACE_INT_HELPER_SET_SOFTINT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_INT_HELPER_SET_SOFTINT) || \
    false)

static inline void _nocheck__trace_int_helper_set_softint(uint32_t softint)
{
    if (trace_event_get_state(TRACE_INT_HELPER_SET_SOFTINT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 18 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:int_helper_set_softint " "new 0x%08x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , softint);
#line 407 "trace/trace-target_sparc.h"
        } else {
#line 18 "/FEMU/target/sparc/trace-events"
            qemu_log("int_helper_set_softint " "new 0x%08x" "\n", softint);
#line 411 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_int_helper_set_softint(uint32_t softint)
{
    if (true) {
        _nocheck__trace_int_helper_set_softint(softint);
    }
}

#define TRACE_INT_HELPER_CLEAR_SOFTINT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_INT_HELPER_CLEAR_SOFTINT) || \
    false)

static inline void _nocheck__trace_int_helper_clear_softint(uint32_t softint)
{
    if (trace_event_get_state(TRACE_INT_HELPER_CLEAR_SOFTINT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 19 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:int_helper_clear_softint " "new 0x%08x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , softint);
#line 438 "trace/trace-target_sparc.h"
        } else {
#line 19 "/FEMU/target/sparc/trace-events"
            qemu_log("int_helper_clear_softint " "new 0x%08x" "\n", softint);
#line 442 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_int_helper_clear_softint(uint32_t softint)
{
    if (true) {
        _nocheck__trace_int_helper_clear_softint(softint);
    }
}

#define TRACE_INT_HELPER_WRITE_SOFTINT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_INT_HELPER_WRITE_SOFTINT) || \
    false)

static inline void _nocheck__trace_int_helper_write_softint(uint32_t softint)
{
    if (trace_event_get_state(TRACE_INT_HELPER_WRITE_SOFTINT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 20 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:int_helper_write_softint " "new 0x%08x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , softint);
#line 469 "trace/trace-target_sparc.h"
        } else {
#line 20 "/FEMU/target/sparc/trace-events"
            qemu_log("int_helper_write_softint " "new 0x%08x" "\n", softint);
#line 473 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_int_helper_write_softint(uint32_t softint)
{
    if (true) {
        _nocheck__trace_int_helper_write_softint(softint);
    }
}

#define TRACE_SPARC64_CPU_CHECK_IRQS_RESET_IRQ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SPARC64_CPU_CHECK_IRQS_RESET_IRQ) || \
    false)

static inline void _nocheck__trace_sparc64_cpu_check_irqs_reset_irq(int intno)
{
    if (trace_event_get_state(TRACE_SPARC64_CPU_CHECK_IRQS_RESET_IRQ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 21 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:sparc64_cpu_check_irqs_reset_irq " "Reset CPU IRQ (current interrupt 0x%x)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , intno);
#line 500 "trace/trace-target_sparc.h"
        } else {
#line 21 "/FEMU/target/sparc/trace-events"
            qemu_log("sparc64_cpu_check_irqs_reset_irq " "Reset CPU IRQ (current interrupt 0x%x)" "\n", intno);
#line 504 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_sparc64_cpu_check_irqs_reset_irq(int intno)
{
    if (true) {
        _nocheck__trace_sparc64_cpu_check_irqs_reset_irq(intno);
    }
}

#define TRACE_SPARC64_CPU_CHECK_IRQS_NOSET_IRQ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SPARC64_CPU_CHECK_IRQS_NOSET_IRQ) || \
    false)

static inline void _nocheck__trace_sparc64_cpu_check_irqs_noset_irq(uint32_t tl, uint32_t tt, int intno)
{
    if (trace_event_get_state(TRACE_SPARC64_CPU_CHECK_IRQS_NOSET_IRQ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 22 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:sparc64_cpu_check_irqs_noset_irq " "Not setting CPU IRQ: TL=%d current 0x%x >= pending 0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , tl, tt, intno);
#line 531 "trace/trace-target_sparc.h"
        } else {
#line 22 "/FEMU/target/sparc/trace-events"
            qemu_log("sparc64_cpu_check_irqs_noset_irq " "Not setting CPU IRQ: TL=%d current 0x%x >= pending 0x%x" "\n", tl, tt, intno);
#line 535 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_sparc64_cpu_check_irqs_noset_irq(uint32_t tl, uint32_t tt, int intno)
{
    if (true) {
        _nocheck__trace_sparc64_cpu_check_irqs_noset_irq(tl, tt, intno);
    }
}

#define TRACE_SPARC64_CPU_CHECK_IRQS_SET_IRQ_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SPARC64_CPU_CHECK_IRQS_SET_IRQ) || \
    false)

static inline void _nocheck__trace_sparc64_cpu_check_irqs_set_irq(unsigned int i, int old, int new)
{
    if (trace_event_get_state(TRACE_SPARC64_CPU_CHECK_IRQS_SET_IRQ) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 23 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:sparc64_cpu_check_irqs_set_irq " "Set CPU IRQ %d old=0x%x new=0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , i, old, new);
#line 562 "trace/trace-target_sparc.h"
        } else {
#line 23 "/FEMU/target/sparc/trace-events"
            qemu_log("sparc64_cpu_check_irqs_set_irq " "Set CPU IRQ %d old=0x%x new=0x%x" "\n", i, old, new);
#line 566 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_sparc64_cpu_check_irqs_set_irq(unsigned int i, int old, int new)
{
    if (true) {
        _nocheck__trace_sparc64_cpu_check_irqs_set_irq(i, old, new);
    }
}

#define TRACE_SPARC64_CPU_CHECK_IRQS_DISABLED_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_SPARC64_CPU_CHECK_IRQS_DISABLED) || \
    false)

static inline void _nocheck__trace_sparc64_cpu_check_irqs_disabled(uint32_t pil, uint32_t pil_in, uint32_t softint, int intno)
{
    if (trace_event_get_state(TRACE_SPARC64_CPU_CHECK_IRQS_DISABLED) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 24 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:sparc64_cpu_check_irqs_disabled " "Interrupts disabled, pil=0x%08x pil_in=0x%08x softint=0x%08x current interrupt 0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , pil, pil_in, softint, intno);
#line 593 "trace/trace-target_sparc.h"
        } else {
#line 24 "/FEMU/target/sparc/trace-events"
            qemu_log("sparc64_cpu_check_irqs_disabled " "Interrupts disabled, pil=0x%08x pil_in=0x%08x softint=0x%08x current interrupt 0x%x" "\n", pil, pil_in, softint, intno);
#line 597 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_sparc64_cpu_check_irqs_disabled(uint32_t pil, uint32_t pil_in, uint32_t softint, int intno)
{
    if (true) {
        _nocheck__trace_sparc64_cpu_check_irqs_disabled(pil, pil_in, softint, intno);
    }
}

#define TRACE_WIN_HELPER_GREGSET_ERROR_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_WIN_HELPER_GREGSET_ERROR) || \
    false)

static inline void _nocheck__trace_win_helper_gregset_error(uint32_t pstate)
{
    if (trace_event_get_state(TRACE_WIN_HELPER_GREGSET_ERROR) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 27 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:win_helper_gregset_error " "ERROR in get_gregset: active pstate bits=0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , pstate);
#line 624 "trace/trace-target_sparc.h"
        } else {
#line 27 "/FEMU/target/sparc/trace-events"
            qemu_log("win_helper_gregset_error " "ERROR in get_gregset: active pstate bits=0x%x" "\n", pstate);
#line 628 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_win_helper_gregset_error(uint32_t pstate)
{
    if (true) {
        _nocheck__trace_win_helper_gregset_error(pstate);
    }
}

#define TRACE_WIN_HELPER_SWITCH_PSTATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_WIN_HELPER_SWITCH_PSTATE) || \
    false)

static inline void _nocheck__trace_win_helper_switch_pstate(uint32_t pstate_regs, uint32_t new_pstate_regs)
{
    if (trace_event_get_state(TRACE_WIN_HELPER_SWITCH_PSTATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 28 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:win_helper_switch_pstate " "change_pstate: switching regs old=0x%x new=0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , pstate_regs, new_pstate_regs);
#line 655 "trace/trace-target_sparc.h"
        } else {
#line 28 "/FEMU/target/sparc/trace-events"
            qemu_log("win_helper_switch_pstate " "change_pstate: switching regs old=0x%x new=0x%x" "\n", pstate_regs, new_pstate_regs);
#line 659 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_win_helper_switch_pstate(uint32_t pstate_regs, uint32_t new_pstate_regs)
{
    if (true) {
        _nocheck__trace_win_helper_switch_pstate(pstate_regs, new_pstate_regs);
    }
}

#define TRACE_WIN_HELPER_NO_SWITCH_PSTATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_WIN_HELPER_NO_SWITCH_PSTATE) || \
    false)

static inline void _nocheck__trace_win_helper_no_switch_pstate(uint32_t new_pstate_regs)
{
    if (trace_event_get_state(TRACE_WIN_HELPER_NO_SWITCH_PSTATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 29 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:win_helper_no_switch_pstate " "change_pstate: regs new=0x%x (unchanged)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , new_pstate_regs);
#line 686 "trace/trace-target_sparc.h"
        } else {
#line 29 "/FEMU/target/sparc/trace-events"
            qemu_log("win_helper_no_switch_pstate " "change_pstate: regs new=0x%x (unchanged)" "\n", new_pstate_regs);
#line 690 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_win_helper_no_switch_pstate(uint32_t new_pstate_regs)
{
    if (true) {
        _nocheck__trace_win_helper_no_switch_pstate(new_pstate_regs);
    }
}

#define TRACE_WIN_HELPER_WRPIL_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_WIN_HELPER_WRPIL) || \
    false)

static inline void _nocheck__trace_win_helper_wrpil(uint32_t psrpil, uint32_t new_pil)
{
    if (trace_event_get_state(TRACE_WIN_HELPER_WRPIL) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 30 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:win_helper_wrpil " "old=0x%x new=0x%x" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , psrpil, new_pil);
#line 717 "trace/trace-target_sparc.h"
        } else {
#line 30 "/FEMU/target/sparc/trace-events"
            qemu_log("win_helper_wrpil " "old=0x%x new=0x%x" "\n", psrpil, new_pil);
#line 721 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_win_helper_wrpil(uint32_t psrpil, uint32_t new_pil)
{
    if (true) {
        _nocheck__trace_win_helper_wrpil(psrpil, new_pil);
    }
}

#define TRACE_WIN_HELPER_DONE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_WIN_HELPER_DONE) || \
    false)

static inline void _nocheck__trace_win_helper_done(uint32_t tl)
{
    if (trace_event_get_state(TRACE_WIN_HELPER_DONE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 31 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:win_helper_done " "tl=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , tl);
#line 748 "trace/trace-target_sparc.h"
        } else {
#line 31 "/FEMU/target/sparc/trace-events"
            qemu_log("win_helper_done " "tl=%d" "\n", tl);
#line 752 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_win_helper_done(uint32_t tl)
{
    if (true) {
        _nocheck__trace_win_helper_done(tl);
    }
}

#define TRACE_WIN_HELPER_RETRY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_WIN_HELPER_RETRY) || \
    false)

static inline void _nocheck__trace_win_helper_retry(uint32_t tl)
{
    if (trace_event_get_state(TRACE_WIN_HELPER_RETRY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 32 "/FEMU/target/sparc/trace-events"
            qemu_log("%d@%zu.%06zu:win_helper_retry " "tl=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , tl);
#line 779 "trace/trace-target_sparc.h"
        } else {
#line 32 "/FEMU/target/sparc/trace-events"
            qemu_log("win_helper_retry " "tl=%d" "\n", tl);
#line 783 "trace/trace-target_sparc.h"
        }
    }
}

static inline void trace_win_helper_retry(uint32_t tl)
{
    if (true) {
        _nocheck__trace_win_helper_retry(tl);
    }
}
#endif /* TRACE_TARGET_SPARC_GENERATED_TRACERS_H */
