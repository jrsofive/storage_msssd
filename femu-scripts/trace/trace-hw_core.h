/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_HW_CORE_GENERATED_TRACERS_H
#define TRACE_HW_CORE_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_LOADER_WRITE_ROM_EVENT;
extern TraceEvent _TRACE_QDEV_UPDATE_PARENT_BUS_EVENT;
extern TraceEvent _TRACE_RESETTABLE_RESET_EVENT;
extern TraceEvent _TRACE_RESETTABLE_RESET_ASSERT_BEGIN_EVENT;
extern TraceEvent _TRACE_RESETTABLE_RESET_ASSERT_END_EVENT;
extern TraceEvent _TRACE_RESETTABLE_RESET_RELEASE_BEGIN_EVENT;
extern TraceEvent _TRACE_RESETTABLE_RESET_RELEASE_END_EVENT;
extern TraceEvent _TRACE_RESETTABLE_CHANGE_PARENT_EVENT;
extern TraceEvent _TRACE_RESETTABLE_PHASE_ENTER_BEGIN_EVENT;
extern TraceEvent _TRACE_RESETTABLE_PHASE_ENTER_EXEC_EVENT;
extern TraceEvent _TRACE_RESETTABLE_PHASE_ENTER_END_EVENT;
extern TraceEvent _TRACE_RESETTABLE_PHASE_HOLD_BEGIN_EVENT;
extern TraceEvent _TRACE_RESETTABLE_PHASE_HOLD_EXEC_EVENT;
extern TraceEvent _TRACE_RESETTABLE_PHASE_HOLD_END_EVENT;
extern TraceEvent _TRACE_RESETTABLE_PHASE_EXIT_BEGIN_EVENT;
extern TraceEvent _TRACE_RESETTABLE_PHASE_EXIT_EXEC_EVENT;
extern TraceEvent _TRACE_RESETTABLE_PHASE_EXIT_END_EVENT;
extern TraceEvent _TRACE_RESETTABLE_TRANSITIONAL_FUNCTION_EVENT;
extern TraceEvent _TRACE_CLOCK_SET_SOURCE_EVENT;
extern TraceEvent _TRACE_CLOCK_DISCONNECT_EVENT;
extern TraceEvent _TRACE_CLOCK_SET_EVENT;
extern TraceEvent _TRACE_CLOCK_PROPAGATE_EVENT;
extern TraceEvent _TRACE_CLOCK_UPDATE_EVENT;
extern TraceEvent _TRACE_CLOCK_SET_MUL_DIV_EVENT;
extern uint16_t _TRACE_LOADER_WRITE_ROM_DSTATE;
extern uint16_t _TRACE_QDEV_UPDATE_PARENT_BUS_DSTATE;
extern uint16_t _TRACE_RESETTABLE_RESET_DSTATE;
extern uint16_t _TRACE_RESETTABLE_RESET_ASSERT_BEGIN_DSTATE;
extern uint16_t _TRACE_RESETTABLE_RESET_ASSERT_END_DSTATE;
extern uint16_t _TRACE_RESETTABLE_RESET_RELEASE_BEGIN_DSTATE;
extern uint16_t _TRACE_RESETTABLE_RESET_RELEASE_END_DSTATE;
extern uint16_t _TRACE_RESETTABLE_CHANGE_PARENT_DSTATE;
extern uint16_t _TRACE_RESETTABLE_PHASE_ENTER_BEGIN_DSTATE;
extern uint16_t _TRACE_RESETTABLE_PHASE_ENTER_EXEC_DSTATE;
extern uint16_t _TRACE_RESETTABLE_PHASE_ENTER_END_DSTATE;
extern uint16_t _TRACE_RESETTABLE_PHASE_HOLD_BEGIN_DSTATE;
extern uint16_t _TRACE_RESETTABLE_PHASE_HOLD_EXEC_DSTATE;
extern uint16_t _TRACE_RESETTABLE_PHASE_HOLD_END_DSTATE;
extern uint16_t _TRACE_RESETTABLE_PHASE_EXIT_BEGIN_DSTATE;
extern uint16_t _TRACE_RESETTABLE_PHASE_EXIT_EXEC_DSTATE;
extern uint16_t _TRACE_RESETTABLE_PHASE_EXIT_END_DSTATE;
extern uint16_t _TRACE_RESETTABLE_TRANSITIONAL_FUNCTION_DSTATE;
extern uint16_t _TRACE_CLOCK_SET_SOURCE_DSTATE;
extern uint16_t _TRACE_CLOCK_DISCONNECT_DSTATE;
extern uint16_t _TRACE_CLOCK_SET_DSTATE;
extern uint16_t _TRACE_CLOCK_PROPAGATE_DSTATE;
extern uint16_t _TRACE_CLOCK_UPDATE_DSTATE;
extern uint16_t _TRACE_CLOCK_SET_MUL_DIV_DSTATE;
#define TRACE_LOADER_WRITE_ROM_ENABLED 1
#define TRACE_QDEV_UPDATE_PARENT_BUS_ENABLED 1
#define TRACE_RESETTABLE_RESET_ENABLED 1
#define TRACE_RESETTABLE_RESET_ASSERT_BEGIN_ENABLED 1
#define TRACE_RESETTABLE_RESET_ASSERT_END_ENABLED 1
#define TRACE_RESETTABLE_RESET_RELEASE_BEGIN_ENABLED 1
#define TRACE_RESETTABLE_RESET_RELEASE_END_ENABLED 1
#define TRACE_RESETTABLE_CHANGE_PARENT_ENABLED 1
#define TRACE_RESETTABLE_PHASE_ENTER_BEGIN_ENABLED 1
#define TRACE_RESETTABLE_PHASE_ENTER_EXEC_ENABLED 1
#define TRACE_RESETTABLE_PHASE_ENTER_END_ENABLED 1
#define TRACE_RESETTABLE_PHASE_HOLD_BEGIN_ENABLED 1
#define TRACE_RESETTABLE_PHASE_HOLD_EXEC_ENABLED 1
#define TRACE_RESETTABLE_PHASE_HOLD_END_ENABLED 1
#define TRACE_RESETTABLE_PHASE_EXIT_BEGIN_ENABLED 1
#define TRACE_RESETTABLE_PHASE_EXIT_EXEC_ENABLED 1
#define TRACE_RESETTABLE_PHASE_EXIT_END_ENABLED 1
#define TRACE_RESETTABLE_TRANSITIONAL_FUNCTION_ENABLED 1
#define TRACE_CLOCK_SET_SOURCE_ENABLED 1
#define TRACE_CLOCK_DISCONNECT_ENABLED 1
#define TRACE_CLOCK_SET_ENABLED 1
#define TRACE_CLOCK_PROPAGATE_ENABLED 1
#define TRACE_CLOCK_UPDATE_ENABLED 1
#define TRACE_CLOCK_SET_MUL_DIV_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_LOADER_WRITE_ROM_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_LOADER_WRITE_ROM) || \
    false)

static inline void _nocheck__trace_loader_write_rom(const char * name, uint64_t gpa, uint64_t size, bool isrom)
{
    if (trace_event_get_state(TRACE_LOADER_WRITE_ROM) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 2 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:loader_write_rom " "%s: @0x%"PRIx64" size=0x%"PRIx64" ROM=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , name, gpa, size, isrom);
#line 100 "trace/trace-hw_core.h"
        } else {
#line 2 "/FEMU/hw/core/trace-events"
            qemu_log("loader_write_rom " "%s: @0x%"PRIx64" size=0x%"PRIx64" ROM=%d" "\n", name, gpa, size, isrom);
#line 104 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_loader_write_rom(const char * name, uint64_t gpa, uint64_t size, bool isrom)
{
    if (true) {
        _nocheck__trace_loader_write_rom(name, gpa, size, isrom);
    }
}

#define TRACE_QDEV_UPDATE_PARENT_BUS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QDEV_UPDATE_PARENT_BUS) || \
    false)

static inline void _nocheck__trace_qdev_update_parent_bus(void * obj, const char * objtype, void * oldp, const char * oldptype, void * newp, const char * newptype)
{
    if (trace_event_get_state(TRACE_QDEV_UPDATE_PARENT_BUS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:qdev_update_parent_bus " "obj=%p(%s) old_parent=%p(%s) new_parent=%p(%s)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj, objtype, oldp, oldptype, newp, newptype);
#line 131 "trace/trace-hw_core.h"
        } else {
#line 5 "/FEMU/hw/core/trace-events"
            qemu_log("qdev_update_parent_bus " "obj=%p(%s) old_parent=%p(%s) new_parent=%p(%s)" "\n", obj, objtype, oldp, oldptype, newp, newptype);
#line 135 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_qdev_update_parent_bus(void * obj, const char * objtype, void * oldp, const char * oldptype, void * newp, const char * newptype)
{
    if (true) {
        _nocheck__trace_qdev_update_parent_bus(obj, objtype, oldp, oldptype, newp, newptype);
    }
}

#define TRACE_RESETTABLE_RESET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RESETTABLE_RESET) || \
    false)

static inline void _nocheck__trace_resettable_reset(void * obj, int cold)
{
    if (trace_event_get_state(TRACE_RESETTABLE_RESET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:resettable_reset " "obj=%p cold=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj, cold);
#line 162 "trace/trace-hw_core.h"
        } else {
#line 8 "/FEMU/hw/core/trace-events"
            qemu_log("resettable_reset " "obj=%p cold=%d" "\n", obj, cold);
#line 166 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_resettable_reset(void * obj, int cold)
{
    if (true) {
        _nocheck__trace_resettable_reset(obj, cold);
    }
}

#define TRACE_RESETTABLE_RESET_ASSERT_BEGIN_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RESETTABLE_RESET_ASSERT_BEGIN) || \
    false)

static inline void _nocheck__trace_resettable_reset_assert_begin(void * obj, int cold)
{
    if (trace_event_get_state(TRACE_RESETTABLE_RESET_ASSERT_BEGIN) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 9 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:resettable_reset_assert_begin " "obj=%p cold=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj, cold);
#line 193 "trace/trace-hw_core.h"
        } else {
#line 9 "/FEMU/hw/core/trace-events"
            qemu_log("resettable_reset_assert_begin " "obj=%p cold=%d" "\n", obj, cold);
#line 197 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_resettable_reset_assert_begin(void * obj, int cold)
{
    if (true) {
        _nocheck__trace_resettable_reset_assert_begin(obj, cold);
    }
}

#define TRACE_RESETTABLE_RESET_ASSERT_END_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RESETTABLE_RESET_ASSERT_END) || \
    false)

static inline void _nocheck__trace_resettable_reset_assert_end(void * obj)
{
    if (trace_event_get_state(TRACE_RESETTABLE_RESET_ASSERT_END) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 10 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:resettable_reset_assert_end " "obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj);
#line 224 "trace/trace-hw_core.h"
        } else {
#line 10 "/FEMU/hw/core/trace-events"
            qemu_log("resettable_reset_assert_end " "obj=%p" "\n", obj);
#line 228 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_resettable_reset_assert_end(void * obj)
{
    if (true) {
        _nocheck__trace_resettable_reset_assert_end(obj);
    }
}

#define TRACE_RESETTABLE_RESET_RELEASE_BEGIN_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RESETTABLE_RESET_RELEASE_BEGIN) || \
    false)

static inline void _nocheck__trace_resettable_reset_release_begin(void * obj, int cold)
{
    if (trace_event_get_state(TRACE_RESETTABLE_RESET_RELEASE_BEGIN) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:resettable_reset_release_begin " "obj=%p cold=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj, cold);
#line 255 "trace/trace-hw_core.h"
        } else {
#line 11 "/FEMU/hw/core/trace-events"
            qemu_log("resettable_reset_release_begin " "obj=%p cold=%d" "\n", obj, cold);
#line 259 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_resettable_reset_release_begin(void * obj, int cold)
{
    if (true) {
        _nocheck__trace_resettable_reset_release_begin(obj, cold);
    }
}

#define TRACE_RESETTABLE_RESET_RELEASE_END_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RESETTABLE_RESET_RELEASE_END) || \
    false)

static inline void _nocheck__trace_resettable_reset_release_end(void * obj)
{
    if (trace_event_get_state(TRACE_RESETTABLE_RESET_RELEASE_END) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 12 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:resettable_reset_release_end " "obj=%p" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj);
#line 286 "trace/trace-hw_core.h"
        } else {
#line 12 "/FEMU/hw/core/trace-events"
            qemu_log("resettable_reset_release_end " "obj=%p" "\n", obj);
#line 290 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_resettable_reset_release_end(void * obj)
{
    if (true) {
        _nocheck__trace_resettable_reset_release_end(obj);
    }
}

#define TRACE_RESETTABLE_CHANGE_PARENT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RESETTABLE_CHANGE_PARENT) || \
    false)

static inline void _nocheck__trace_resettable_change_parent(void * obj, void * o, unsigned oc, void * n, unsigned nc)
{
    if (trace_event_get_state(TRACE_RESETTABLE_CHANGE_PARENT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 13 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:resettable_change_parent " "obj=%p from=%p(%d) to=%p(%d)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj, o, oc, n, nc);
#line 317 "trace/trace-hw_core.h"
        } else {
#line 13 "/FEMU/hw/core/trace-events"
            qemu_log("resettable_change_parent " "obj=%p from=%p(%d) to=%p(%d)" "\n", obj, o, oc, n, nc);
#line 321 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_resettable_change_parent(void * obj, void * o, unsigned oc, void * n, unsigned nc)
{
    if (true) {
        _nocheck__trace_resettable_change_parent(obj, o, oc, n, nc);
    }
}

#define TRACE_RESETTABLE_PHASE_ENTER_BEGIN_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RESETTABLE_PHASE_ENTER_BEGIN) || \
    false)

static inline void _nocheck__trace_resettable_phase_enter_begin(void * obj, const char * objtype, unsigned count, int type)
{
    if (trace_event_get_state(TRACE_RESETTABLE_PHASE_ENTER_BEGIN) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:resettable_phase_enter_begin " "obj=%p(%s) count=%d type=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj, objtype, count, type);
#line 348 "trace/trace-hw_core.h"
        } else {
#line 14 "/FEMU/hw/core/trace-events"
            qemu_log("resettable_phase_enter_begin " "obj=%p(%s) count=%d type=%d" "\n", obj, objtype, count, type);
#line 352 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_resettable_phase_enter_begin(void * obj, const char * objtype, unsigned count, int type)
{
    if (true) {
        _nocheck__trace_resettable_phase_enter_begin(obj, objtype, count, type);
    }
}

#define TRACE_RESETTABLE_PHASE_ENTER_EXEC_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RESETTABLE_PHASE_ENTER_EXEC) || \
    false)

static inline void _nocheck__trace_resettable_phase_enter_exec(void * obj, const char * objtype, int type, int has_method)
{
    if (trace_event_get_state(TRACE_RESETTABLE_PHASE_ENTER_EXEC) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 15 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:resettable_phase_enter_exec " "obj=%p(%s) type=%d method=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj, objtype, type, has_method);
#line 379 "trace/trace-hw_core.h"
        } else {
#line 15 "/FEMU/hw/core/trace-events"
            qemu_log("resettable_phase_enter_exec " "obj=%p(%s) type=%d method=%d" "\n", obj, objtype, type, has_method);
#line 383 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_resettable_phase_enter_exec(void * obj, const char * objtype, int type, int has_method)
{
    if (true) {
        _nocheck__trace_resettable_phase_enter_exec(obj, objtype, type, has_method);
    }
}

#define TRACE_RESETTABLE_PHASE_ENTER_END_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RESETTABLE_PHASE_ENTER_END) || \
    false)

static inline void _nocheck__trace_resettable_phase_enter_end(void * obj, const char * objtype, unsigned count)
{
    if (trace_event_get_state(TRACE_RESETTABLE_PHASE_ENTER_END) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 16 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:resettable_phase_enter_end " "obj=%p(%s) count=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj, objtype, count);
#line 410 "trace/trace-hw_core.h"
        } else {
#line 16 "/FEMU/hw/core/trace-events"
            qemu_log("resettable_phase_enter_end " "obj=%p(%s) count=%d" "\n", obj, objtype, count);
#line 414 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_resettable_phase_enter_end(void * obj, const char * objtype, unsigned count)
{
    if (true) {
        _nocheck__trace_resettable_phase_enter_end(obj, objtype, count);
    }
}

#define TRACE_RESETTABLE_PHASE_HOLD_BEGIN_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RESETTABLE_PHASE_HOLD_BEGIN) || \
    false)

static inline void _nocheck__trace_resettable_phase_hold_begin(void * obj, const char * objtype, unsigned count, int type)
{
    if (trace_event_get_state(TRACE_RESETTABLE_PHASE_HOLD_BEGIN) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 17 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:resettable_phase_hold_begin " "obj=%p(%s) count=%d type=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj, objtype, count, type);
#line 441 "trace/trace-hw_core.h"
        } else {
#line 17 "/FEMU/hw/core/trace-events"
            qemu_log("resettable_phase_hold_begin " "obj=%p(%s) count=%d type=%d" "\n", obj, objtype, count, type);
#line 445 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_resettable_phase_hold_begin(void * obj, const char * objtype, unsigned count, int type)
{
    if (true) {
        _nocheck__trace_resettable_phase_hold_begin(obj, objtype, count, type);
    }
}

#define TRACE_RESETTABLE_PHASE_HOLD_EXEC_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RESETTABLE_PHASE_HOLD_EXEC) || \
    false)

static inline void _nocheck__trace_resettable_phase_hold_exec(void * obj, const char * objtype, int has_method)
{
    if (trace_event_get_state(TRACE_RESETTABLE_PHASE_HOLD_EXEC) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 18 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:resettable_phase_hold_exec " "obj=%p(%s) method=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj, objtype, has_method);
#line 472 "trace/trace-hw_core.h"
        } else {
#line 18 "/FEMU/hw/core/trace-events"
            qemu_log("resettable_phase_hold_exec " "obj=%p(%s) method=%d" "\n", obj, objtype, has_method);
#line 476 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_resettable_phase_hold_exec(void * obj, const char * objtype, int has_method)
{
    if (true) {
        _nocheck__trace_resettable_phase_hold_exec(obj, objtype, has_method);
    }
}

#define TRACE_RESETTABLE_PHASE_HOLD_END_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RESETTABLE_PHASE_HOLD_END) || \
    false)

static inline void _nocheck__trace_resettable_phase_hold_end(void * obj, const char * objtype, unsigned count)
{
    if (trace_event_get_state(TRACE_RESETTABLE_PHASE_HOLD_END) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 19 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:resettable_phase_hold_end " "obj=%p(%s) count=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj, objtype, count);
#line 503 "trace/trace-hw_core.h"
        } else {
#line 19 "/FEMU/hw/core/trace-events"
            qemu_log("resettable_phase_hold_end " "obj=%p(%s) count=%d" "\n", obj, objtype, count);
#line 507 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_resettable_phase_hold_end(void * obj, const char * objtype, unsigned count)
{
    if (true) {
        _nocheck__trace_resettable_phase_hold_end(obj, objtype, count);
    }
}

#define TRACE_RESETTABLE_PHASE_EXIT_BEGIN_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RESETTABLE_PHASE_EXIT_BEGIN) || \
    false)

static inline void _nocheck__trace_resettable_phase_exit_begin(void * obj, const char * objtype, unsigned count, int type)
{
    if (trace_event_get_state(TRACE_RESETTABLE_PHASE_EXIT_BEGIN) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 20 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:resettable_phase_exit_begin " "obj=%p(%s) count=%d type=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj, objtype, count, type);
#line 534 "trace/trace-hw_core.h"
        } else {
#line 20 "/FEMU/hw/core/trace-events"
            qemu_log("resettable_phase_exit_begin " "obj=%p(%s) count=%d type=%d" "\n", obj, objtype, count, type);
#line 538 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_resettable_phase_exit_begin(void * obj, const char * objtype, unsigned count, int type)
{
    if (true) {
        _nocheck__trace_resettable_phase_exit_begin(obj, objtype, count, type);
    }
}

#define TRACE_RESETTABLE_PHASE_EXIT_EXEC_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RESETTABLE_PHASE_EXIT_EXEC) || \
    false)

static inline void _nocheck__trace_resettable_phase_exit_exec(void * obj, const char * objtype, int has_method)
{
    if (trace_event_get_state(TRACE_RESETTABLE_PHASE_EXIT_EXEC) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 21 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:resettable_phase_exit_exec " "obj=%p(%s) method=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj, objtype, has_method);
#line 565 "trace/trace-hw_core.h"
        } else {
#line 21 "/FEMU/hw/core/trace-events"
            qemu_log("resettable_phase_exit_exec " "obj=%p(%s) method=%d" "\n", obj, objtype, has_method);
#line 569 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_resettable_phase_exit_exec(void * obj, const char * objtype, int has_method)
{
    if (true) {
        _nocheck__trace_resettable_phase_exit_exec(obj, objtype, has_method);
    }
}

#define TRACE_RESETTABLE_PHASE_EXIT_END_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RESETTABLE_PHASE_EXIT_END) || \
    false)

static inline void _nocheck__trace_resettable_phase_exit_end(void * obj, const char * objtype, unsigned count)
{
    if (trace_event_get_state(TRACE_RESETTABLE_PHASE_EXIT_END) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 22 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:resettable_phase_exit_end " "obj=%p(%s) count=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj, objtype, count);
#line 596 "trace/trace-hw_core.h"
        } else {
#line 22 "/FEMU/hw/core/trace-events"
            qemu_log("resettable_phase_exit_end " "obj=%p(%s) count=%d" "\n", obj, objtype, count);
#line 600 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_resettable_phase_exit_end(void * obj, const char * objtype, unsigned count)
{
    if (true) {
        _nocheck__trace_resettable_phase_exit_end(obj, objtype, count);
    }
}

#define TRACE_RESETTABLE_TRANSITIONAL_FUNCTION_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_RESETTABLE_TRANSITIONAL_FUNCTION) || \
    false)

static inline void _nocheck__trace_resettable_transitional_function(void * obj, const char * objtype)
{
    if (trace_event_get_state(TRACE_RESETTABLE_TRANSITIONAL_FUNCTION) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 23 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:resettable_transitional_function " "obj=%p(%s)" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , obj, objtype);
#line 627 "trace/trace-hw_core.h"
        } else {
#line 23 "/FEMU/hw/core/trace-events"
            qemu_log("resettable_transitional_function " "obj=%p(%s)" "\n", obj, objtype);
#line 631 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_resettable_transitional_function(void * obj, const char * objtype)
{
    if (true) {
        _nocheck__trace_resettable_transitional_function(obj, objtype);
    }
}

#define TRACE_CLOCK_SET_SOURCE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CLOCK_SET_SOURCE) || \
    false)

static inline void _nocheck__trace_clock_set_source(const char * clk, const char * src)
{
    if (trace_event_get_state(TRACE_CLOCK_SET_SOURCE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 26 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:clock_set_source " "'%s', src='%s'" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , clk, src);
#line 658 "trace/trace-hw_core.h"
        } else {
#line 26 "/FEMU/hw/core/trace-events"
            qemu_log("clock_set_source " "'%s', src='%s'" "\n", clk, src);
#line 662 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_clock_set_source(const char * clk, const char * src)
{
    if (true) {
        _nocheck__trace_clock_set_source(clk, src);
    }
}

#define TRACE_CLOCK_DISCONNECT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CLOCK_DISCONNECT) || \
    false)

static inline void _nocheck__trace_clock_disconnect(const char * clk)
{
    if (trace_event_get_state(TRACE_CLOCK_DISCONNECT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 27 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:clock_disconnect " "'%s'" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , clk);
#line 689 "trace/trace-hw_core.h"
        } else {
#line 27 "/FEMU/hw/core/trace-events"
            qemu_log("clock_disconnect " "'%s'" "\n", clk);
#line 693 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_clock_disconnect(const char * clk)
{
    if (true) {
        _nocheck__trace_clock_disconnect(clk);
    }
}

#define TRACE_CLOCK_SET_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CLOCK_SET) || \
    false)

static inline void _nocheck__trace_clock_set(const char * clk, uint64_t old, uint64_t new)
{
    if (trace_event_get_state(TRACE_CLOCK_SET) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 28 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:clock_set " "'%s', %"PRIu64"Hz->%"PRIu64"Hz" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , clk, old, new);
#line 720 "trace/trace-hw_core.h"
        } else {
#line 28 "/FEMU/hw/core/trace-events"
            qemu_log("clock_set " "'%s', %"PRIu64"Hz->%"PRIu64"Hz" "\n", clk, old, new);
#line 724 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_clock_set(const char * clk, uint64_t old, uint64_t new)
{
    if (true) {
        _nocheck__trace_clock_set(clk, old, new);
    }
}

#define TRACE_CLOCK_PROPAGATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CLOCK_PROPAGATE) || \
    false)

static inline void _nocheck__trace_clock_propagate(const char * clk)
{
    if (trace_event_get_state(TRACE_CLOCK_PROPAGATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 29 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:clock_propagate " "'%s'" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , clk);
#line 751 "trace/trace-hw_core.h"
        } else {
#line 29 "/FEMU/hw/core/trace-events"
            qemu_log("clock_propagate " "'%s'" "\n", clk);
#line 755 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_clock_propagate(const char * clk)
{
    if (true) {
        _nocheck__trace_clock_propagate(clk);
    }
}

#define TRACE_CLOCK_UPDATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CLOCK_UPDATE) || \
    false)

static inline void _nocheck__trace_clock_update(const char * clk, const char * src, uint64_t hz, int cb)
{
    if (trace_event_get_state(TRACE_CLOCK_UPDATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 30 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:clock_update " "'%s', src='%s', val=%"PRIu64"Hz cb=%d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , clk, src, hz, cb);
#line 782 "trace/trace-hw_core.h"
        } else {
#line 30 "/FEMU/hw/core/trace-events"
            qemu_log("clock_update " "'%s', src='%s', val=%"PRIu64"Hz cb=%d" "\n", clk, src, hz, cb);
#line 786 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_clock_update(const char * clk, const char * src, uint64_t hz, int cb)
{
    if (true) {
        _nocheck__trace_clock_update(clk, src, hz, cb);
    }
}

#define TRACE_CLOCK_SET_MUL_DIV_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_CLOCK_SET_MUL_DIV) || \
    false)

static inline void _nocheck__trace_clock_set_mul_div(const char * clk, uint32_t oldmul, uint32_t mul, uint32_t olddiv, uint32_t div)
{
    if (trace_event_get_state(TRACE_CLOCK_SET_MUL_DIV) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 31 "/FEMU/hw/core/trace-events"
            qemu_log("%d@%zu.%06zu:clock_set_mul_div " "'%s', mul: %u -> %u, div: %u -> %u" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , clk, oldmul, mul, olddiv, div);
#line 813 "trace/trace-hw_core.h"
        } else {
#line 31 "/FEMU/hw/core/trace-events"
            qemu_log("clock_set_mul_div " "'%s', mul: %u -> %u, div: %u -> %u" "\n", clk, oldmul, mul, olddiv, div);
#line 817 "trace/trace-hw_core.h"
        }
    }
}

static inline void trace_clock_set_mul_div(const char * clk, uint32_t oldmul, uint32_t mul, uint32_t olddiv, uint32_t div)
{
    if (true) {
        _nocheck__trace_clock_set_mul_div(clk, oldmul, mul, olddiv, div);
    }
}
#endif /* TRACE_HW_CORE_GENERATED_TRACERS_H */
