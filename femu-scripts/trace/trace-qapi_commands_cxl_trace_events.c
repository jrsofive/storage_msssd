/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-qapi_commands_cxl_trace_events.h"

uint16_t _TRACE_QMP_ENTER_CXL_INJECT_UNCORRECTABLE_ERRORS_DSTATE;
uint16_t _TRACE_QMP_EXIT_CXL_INJECT_UNCORRECTABLE_ERRORS_DSTATE;
uint16_t _TRACE_QMP_ENTER_CXL_INJECT_CORRECTABLE_ERROR_DSTATE;
uint16_t _TRACE_QMP_EXIT_CXL_INJECT_CORRECTABLE_ERROR_DSTATE;
TraceEvent _TRACE_QMP_ENTER_CXL_INJECT_UNCORRECTABLE_ERRORS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_cxl_inject_uncorrectable_errors",
    .sstate = TRACE_QMP_ENTER_CXL_INJECT_UNCORRECTABLE_ERRORS_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_CXL_INJECT_UNCORRECTABLE_ERRORS_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_CXL_INJECT_UNCORRECTABLE_ERRORS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_cxl_inject_uncorrectable_errors",
    .sstate = TRACE_QMP_EXIT_CXL_INJECT_UNCORRECTABLE_ERRORS_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_CXL_INJECT_UNCORRECTABLE_ERRORS_DSTATE 
};
TraceEvent _TRACE_QMP_ENTER_CXL_INJECT_CORRECTABLE_ERROR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_enter_cxl_inject_correctable_error",
    .sstate = TRACE_QMP_ENTER_CXL_INJECT_CORRECTABLE_ERROR_ENABLED,
    .dstate = &_TRACE_QMP_ENTER_CXL_INJECT_CORRECTABLE_ERROR_DSTATE 
};
TraceEvent _TRACE_QMP_EXIT_CXL_INJECT_CORRECTABLE_ERROR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "qmp_exit_cxl_inject_correctable_error",
    .sstate = TRACE_QMP_EXIT_CXL_INJECT_CORRECTABLE_ERROR_ENABLED,
    .dstate = &_TRACE_QMP_EXIT_CXL_INJECT_CORRECTABLE_ERROR_DSTATE 
};
TraceEvent *qapi_commands_cxl_trace_events_trace_events[] = {
    &_TRACE_QMP_ENTER_CXL_INJECT_UNCORRECTABLE_ERRORS_EVENT,
    &_TRACE_QMP_EXIT_CXL_INJECT_UNCORRECTABLE_ERRORS_EVENT,
    &_TRACE_QMP_ENTER_CXL_INJECT_CORRECTABLE_ERROR_EVENT,
    &_TRACE_QMP_EXIT_CXL_INJECT_CORRECTABLE_ERROR_EVENT,
  NULL,
};

static void trace_qapi_commands_cxl_trace_events_register_events(void)
{
    trace_event_register_group(qapi_commands_cxl_trace_events_trace_events);
}
trace_init(trace_qapi_commands_cxl_trace_events_register_events)
