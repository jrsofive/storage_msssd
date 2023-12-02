/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-target_riscv.h"

uint16_t _TRACE_RISCV_TRAP_DSTATE;
uint16_t _TRACE_PMPCFG_CSR_READ_DSTATE;
uint16_t _TRACE_PMPCFG_CSR_WRITE_DSTATE;
uint16_t _TRACE_PMPADDR_CSR_READ_DSTATE;
uint16_t _TRACE_PMPADDR_CSR_WRITE_DSTATE;
uint16_t _TRACE_MSECCFG_CSR_READ_DSTATE;
uint16_t _TRACE_MSECCFG_CSR_WRITE_DSTATE;
TraceEvent _TRACE_RISCV_TRAP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "riscv_trap",
    .sstate = TRACE_RISCV_TRAP_ENABLED,
    .dstate = &_TRACE_RISCV_TRAP_DSTATE 
};
TraceEvent _TRACE_PMPCFG_CSR_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pmpcfg_csr_read",
    .sstate = TRACE_PMPCFG_CSR_READ_ENABLED,
    .dstate = &_TRACE_PMPCFG_CSR_READ_DSTATE 
};
TraceEvent _TRACE_PMPCFG_CSR_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pmpcfg_csr_write",
    .sstate = TRACE_PMPCFG_CSR_WRITE_ENABLED,
    .dstate = &_TRACE_PMPCFG_CSR_WRITE_DSTATE 
};
TraceEvent _TRACE_PMPADDR_CSR_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pmpaddr_csr_read",
    .sstate = TRACE_PMPADDR_CSR_READ_ENABLED,
    .dstate = &_TRACE_PMPADDR_CSR_READ_DSTATE 
};
TraceEvent _TRACE_PMPADDR_CSR_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "pmpaddr_csr_write",
    .sstate = TRACE_PMPADDR_CSR_WRITE_ENABLED,
    .dstate = &_TRACE_PMPADDR_CSR_WRITE_DSTATE 
};
TraceEvent _TRACE_MSECCFG_CSR_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mseccfg_csr_read",
    .sstate = TRACE_MSECCFG_CSR_READ_ENABLED,
    .dstate = &_TRACE_MSECCFG_CSR_READ_DSTATE 
};
TraceEvent _TRACE_MSECCFG_CSR_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "mseccfg_csr_write",
    .sstate = TRACE_MSECCFG_CSR_WRITE_ENABLED,
    .dstate = &_TRACE_MSECCFG_CSR_WRITE_DSTATE 
};
TraceEvent *target_riscv_trace_events[] = {
    &_TRACE_RISCV_TRAP_EVENT,
    &_TRACE_PMPCFG_CSR_READ_EVENT,
    &_TRACE_PMPCFG_CSR_WRITE_EVENT,
    &_TRACE_PMPADDR_CSR_READ_EVENT,
    &_TRACE_PMPADDR_CSR_WRITE_EVENT,
    &_TRACE_MSECCFG_CSR_READ_EVENT,
    &_TRACE_MSECCFG_CSR_WRITE_EVENT,
  NULL,
};

static void trace_target_riscv_register_events(void)
{
    trace_event_register_group(target_riscv_trace_events);
}
trace_init(trace_target_riscv_register_events)
