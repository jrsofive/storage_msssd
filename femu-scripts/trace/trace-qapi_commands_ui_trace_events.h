/* This file is autogenerated by tracetool, do not edit. */

#ifndef TRACE_QAPI_COMMANDS_UI_TRACE_EVENTS_GENERATED_TRACERS_H
#define TRACE_QAPI_COMMANDS_UI_TRACE_EVENTS_GENERATED_TRACERS_H

#include "trace/control.h"

extern TraceEvent _TRACE_QMP_ENTER_SET_PASSWORD_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_SET_PASSWORD_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_EXPIRE_PASSWORD_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_EXPIRE_PASSWORD_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_SCREENDUMP_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_SCREENDUMP_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_QUERY_SPICE_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_SPICE_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_QUERY_VNC_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_VNC_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_QUERY_VNC_SERVERS_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_VNC_SERVERS_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_CHANGE_VNC_PASSWORD_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_CHANGE_VNC_PASSWORD_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_QUERY_MICE_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_MICE_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_SEND_KEY_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_SEND_KEY_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_INPUT_SEND_EVENT_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_INPUT_SEND_EVENT_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_QUERY_DISPLAY_OPTIONS_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_QUERY_DISPLAY_OPTIONS_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_DISPLAY_RELOAD_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_DISPLAY_RELOAD_EVENT;
extern TraceEvent _TRACE_QMP_ENTER_DISPLAY_UPDATE_EVENT;
extern TraceEvent _TRACE_QMP_EXIT_DISPLAY_UPDATE_EVENT;
extern uint16_t _TRACE_QMP_ENTER_SET_PASSWORD_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_SET_PASSWORD_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_EXPIRE_PASSWORD_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_EXPIRE_PASSWORD_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_SCREENDUMP_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_SCREENDUMP_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_QUERY_SPICE_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_SPICE_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_QUERY_VNC_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_VNC_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_QUERY_VNC_SERVERS_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_VNC_SERVERS_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_CHANGE_VNC_PASSWORD_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_CHANGE_VNC_PASSWORD_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_QUERY_MICE_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_MICE_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_SEND_KEY_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_SEND_KEY_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_INPUT_SEND_EVENT_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_INPUT_SEND_EVENT_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_QUERY_DISPLAY_OPTIONS_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_QUERY_DISPLAY_OPTIONS_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_DISPLAY_RELOAD_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_DISPLAY_RELOAD_DSTATE;
extern uint16_t _TRACE_QMP_ENTER_DISPLAY_UPDATE_DSTATE;
extern uint16_t _TRACE_QMP_EXIT_DISPLAY_UPDATE_DSTATE;
#define TRACE_QMP_ENTER_SET_PASSWORD_ENABLED 1
#define TRACE_QMP_EXIT_SET_PASSWORD_ENABLED 1
#define TRACE_QMP_ENTER_EXPIRE_PASSWORD_ENABLED 1
#define TRACE_QMP_EXIT_EXPIRE_PASSWORD_ENABLED 1
#define TRACE_QMP_ENTER_SCREENDUMP_ENABLED 1
#define TRACE_QMP_EXIT_SCREENDUMP_ENABLED 1
#define TRACE_QMP_ENTER_QUERY_SPICE_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_SPICE_ENABLED 1
#define TRACE_QMP_ENTER_QUERY_VNC_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_VNC_ENABLED 1
#define TRACE_QMP_ENTER_QUERY_VNC_SERVERS_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_VNC_SERVERS_ENABLED 1
#define TRACE_QMP_ENTER_CHANGE_VNC_PASSWORD_ENABLED 1
#define TRACE_QMP_EXIT_CHANGE_VNC_PASSWORD_ENABLED 1
#define TRACE_QMP_ENTER_QUERY_MICE_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_MICE_ENABLED 1
#define TRACE_QMP_ENTER_SEND_KEY_ENABLED 1
#define TRACE_QMP_EXIT_SEND_KEY_ENABLED 1
#define TRACE_QMP_ENTER_INPUT_SEND_EVENT_ENABLED 1
#define TRACE_QMP_EXIT_INPUT_SEND_EVENT_ENABLED 1
#define TRACE_QMP_ENTER_QUERY_DISPLAY_OPTIONS_ENABLED 1
#define TRACE_QMP_EXIT_QUERY_DISPLAY_OPTIONS_ENABLED 1
#define TRACE_QMP_ENTER_DISPLAY_RELOAD_ENABLED 1
#define TRACE_QMP_EXIT_DISPLAY_RELOAD_ENABLED 1
#define TRACE_QMP_ENTER_DISPLAY_UPDATE_ENABLED 1
#define TRACE_QMP_EXIT_DISPLAY_UPDATE_ENABLED 1
#include "qemu/log-for-trace.h"
#include "qemu/error-report.h"


#define TRACE_QMP_ENTER_SET_PASSWORD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_SET_PASSWORD) || \
    false)

static inline void _nocheck__trace_qmp_enter_set_password(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_SET_PASSWORD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 3 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_set_password " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 106 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 3 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_enter_set_password " "%s" "\n", json);
#line 110 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_set_password(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_set_password(json);
    }
}

#define TRACE_QMP_EXIT_SET_PASSWORD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_SET_PASSWORD) || \
    false)

static inline void _nocheck__trace_qmp_exit_set_password(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_SET_PASSWORD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 4 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_set_password " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 137 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 4 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_exit_set_password " "%s %d" "\n", result, succeeded);
#line 141 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_set_password(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_set_password(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_EXPIRE_PASSWORD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_EXPIRE_PASSWORD) || \
    false)

static inline void _nocheck__trace_qmp_enter_expire_password(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_EXPIRE_PASSWORD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 5 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_expire_password " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 168 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 5 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_enter_expire_password " "%s" "\n", json);
#line 172 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_expire_password(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_expire_password(json);
    }
}

#define TRACE_QMP_EXIT_EXPIRE_PASSWORD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_EXPIRE_PASSWORD) || \
    false)

static inline void _nocheck__trace_qmp_exit_expire_password(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_EXPIRE_PASSWORD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 6 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_expire_password " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 199 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 6 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_exit_expire_password " "%s %d" "\n", result, succeeded);
#line 203 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_expire_password(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_expire_password(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_SCREENDUMP_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_SCREENDUMP) || \
    false)

static inline void _nocheck__trace_qmp_enter_screendump(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_SCREENDUMP) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 7 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_screendump " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 230 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 7 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_enter_screendump " "%s" "\n", json);
#line 234 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_screendump(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_screendump(json);
    }
}

#define TRACE_QMP_EXIT_SCREENDUMP_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_SCREENDUMP) || \
    false)

static inline void _nocheck__trace_qmp_exit_screendump(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_SCREENDUMP) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 8 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_screendump " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 261 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 8 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_exit_screendump " "%s %d" "\n", result, succeeded);
#line 265 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_screendump(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_screendump(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_QUERY_SPICE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_SPICE) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_spice(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_SPICE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 9 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_spice " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 292 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 9 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_enter_query_spice " "%s" "\n", json);
#line 296 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_spice(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_spice(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_SPICE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_SPICE) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_spice(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_SPICE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 10 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_spice " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 323 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 10 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_exit_query_spice " "%s %d" "\n", result, succeeded);
#line 327 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_spice(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_spice(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_QUERY_VNC_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_VNC) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_vnc(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_VNC) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 11 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_vnc " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 354 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 11 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_enter_query_vnc " "%s" "\n", json);
#line 358 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_vnc(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_vnc(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_VNC_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_VNC) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_vnc(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_VNC) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 12 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_vnc " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 385 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 12 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_exit_query_vnc " "%s %d" "\n", result, succeeded);
#line 389 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_vnc(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_vnc(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_QUERY_VNC_SERVERS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_VNC_SERVERS) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_vnc_servers(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_VNC_SERVERS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 13 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_vnc_servers " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 416 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 13 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_enter_query_vnc_servers " "%s" "\n", json);
#line 420 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_vnc_servers(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_vnc_servers(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_VNC_SERVERS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_VNC_SERVERS) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_vnc_servers(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_VNC_SERVERS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 14 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_vnc_servers " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 447 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 14 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_exit_query_vnc_servers " "%s %d" "\n", result, succeeded);
#line 451 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_vnc_servers(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_vnc_servers(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_CHANGE_VNC_PASSWORD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_CHANGE_VNC_PASSWORD) || \
    false)

static inline void _nocheck__trace_qmp_enter_change_vnc_password(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_CHANGE_VNC_PASSWORD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 15 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_change_vnc_password " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 478 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 15 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_enter_change_vnc_password " "%s" "\n", json);
#line 482 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_change_vnc_password(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_change_vnc_password(json);
    }
}

#define TRACE_QMP_EXIT_CHANGE_VNC_PASSWORD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_CHANGE_VNC_PASSWORD) || \
    false)

static inline void _nocheck__trace_qmp_exit_change_vnc_password(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_CHANGE_VNC_PASSWORD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 16 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_change_vnc_password " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 509 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 16 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_exit_change_vnc_password " "%s %d" "\n", result, succeeded);
#line 513 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_change_vnc_password(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_change_vnc_password(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_QUERY_MICE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_MICE) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_mice(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_MICE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 17 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_mice " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 540 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 17 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_enter_query_mice " "%s" "\n", json);
#line 544 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_mice(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_mice(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_MICE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_MICE) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_mice(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_MICE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 18 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_mice " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 571 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 18 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_exit_query_mice " "%s %d" "\n", result, succeeded);
#line 575 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_mice(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_mice(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_SEND_KEY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_SEND_KEY) || \
    false)

static inline void _nocheck__trace_qmp_enter_send_key(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_SEND_KEY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 19 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_send_key " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 602 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 19 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_enter_send_key " "%s" "\n", json);
#line 606 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_send_key(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_send_key(json);
    }
}

#define TRACE_QMP_EXIT_SEND_KEY_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_SEND_KEY) || \
    false)

static inline void _nocheck__trace_qmp_exit_send_key(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_SEND_KEY) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 20 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_send_key " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 633 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 20 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_exit_send_key " "%s %d" "\n", result, succeeded);
#line 637 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_send_key(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_send_key(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_INPUT_SEND_EVENT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_INPUT_SEND_EVENT) || \
    false)

static inline void _nocheck__trace_qmp_enter_input_send_event(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_INPUT_SEND_EVENT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 21 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_input_send_event " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 664 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 21 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_enter_input_send_event " "%s" "\n", json);
#line 668 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_input_send_event(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_input_send_event(json);
    }
}

#define TRACE_QMP_EXIT_INPUT_SEND_EVENT_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_INPUT_SEND_EVENT) || \
    false)

static inline void _nocheck__trace_qmp_exit_input_send_event(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_INPUT_SEND_EVENT) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 22 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_input_send_event " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 695 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 22 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_exit_input_send_event " "%s %d" "\n", result, succeeded);
#line 699 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_input_send_event(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_input_send_event(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_QUERY_DISPLAY_OPTIONS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_QUERY_DISPLAY_OPTIONS) || \
    false)

static inline void _nocheck__trace_qmp_enter_query_display_options(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_QUERY_DISPLAY_OPTIONS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 23 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_query_display_options " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 726 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 23 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_enter_query_display_options " "%s" "\n", json);
#line 730 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_query_display_options(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_query_display_options(json);
    }
}

#define TRACE_QMP_EXIT_QUERY_DISPLAY_OPTIONS_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_QUERY_DISPLAY_OPTIONS) || \
    false)

static inline void _nocheck__trace_qmp_exit_query_display_options(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_QUERY_DISPLAY_OPTIONS) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 24 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_query_display_options " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 757 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 24 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_exit_query_display_options " "%s %d" "\n", result, succeeded);
#line 761 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_query_display_options(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_query_display_options(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_DISPLAY_RELOAD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_DISPLAY_RELOAD) || \
    false)

static inline void _nocheck__trace_qmp_enter_display_reload(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_DISPLAY_RELOAD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 25 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_display_reload " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 788 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 25 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_enter_display_reload " "%s" "\n", json);
#line 792 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_display_reload(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_display_reload(json);
    }
}

#define TRACE_QMP_EXIT_DISPLAY_RELOAD_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_DISPLAY_RELOAD) || \
    false)

static inline void _nocheck__trace_qmp_exit_display_reload(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_DISPLAY_RELOAD) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 26 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_display_reload " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 819 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 26 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_exit_display_reload " "%s %d" "\n", result, succeeded);
#line 823 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_display_reload(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_display_reload(result, succeeded);
    }
}

#define TRACE_QMP_ENTER_DISPLAY_UPDATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_ENTER_DISPLAY_UPDATE) || \
    false)

static inline void _nocheck__trace_qmp_enter_display_update(const char * json)
{
    if (trace_event_get_state(TRACE_QMP_ENTER_DISPLAY_UPDATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 27 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_enter_display_update " "%s" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , json);
#line 850 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 27 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_enter_display_update " "%s" "\n", json);
#line 854 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_enter_display_update(const char * json)
{
    if (true) {
        _nocheck__trace_qmp_enter_display_update(json);
    }
}

#define TRACE_QMP_EXIT_DISPLAY_UPDATE_BACKEND_DSTATE() ( \
    trace_event_get_state_dynamic_by_id(TRACE_QMP_EXIT_DISPLAY_UPDATE) || \
    false)

static inline void _nocheck__trace_qmp_exit_display_update(const char * result, bool succeeded)
{
    if (trace_event_get_state(TRACE_QMP_EXIT_DISPLAY_UPDATE) && qemu_loglevel_mask(LOG_TRACE)) {
        if (message_with_timestamp) {
            struct timeval _now;
            gettimeofday(&_now, NULL);
#line 28 "qapi/qapi-commands-ui.trace-events"
            qemu_log("%d@%zu.%06zu:qmp_exit_display_update " "%s %d" "\n",
                     qemu_get_thread_id(),
                     (size_t)_now.tv_sec, (size_t)_now.tv_usec
                     , result, succeeded);
#line 881 "trace/trace-qapi_commands_ui_trace_events.h"
        } else {
#line 28 "qapi/qapi-commands-ui.trace-events"
            qemu_log("qmp_exit_display_update " "%s %d" "\n", result, succeeded);
#line 885 "trace/trace-qapi_commands_ui_trace_events.h"
        }
    }
}

static inline void trace_qmp_exit_display_update(const char * result, bool succeeded)
{
    if (true) {
        _nocheck__trace_qmp_exit_display_update(result, succeeded);
    }
}
#endif /* TRACE_QAPI_COMMANDS_UI_TRACE_EVENTS_GENERATED_TRACERS_H */
