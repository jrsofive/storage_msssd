/* This file is autogenerated by tracetool, do not edit. */

#include "qemu/osdep.h"
#include "qemu/module.h"
#include "trace-hw_ide.h"

uint16_t _TRACE_IDE_IOPORT_READ_DSTATE;
uint16_t _TRACE_IDE_IOPORT_WRITE_DSTATE;
uint16_t _TRACE_IDE_STATUS_READ_DSTATE;
uint16_t _TRACE_IDE_CTRL_WRITE_DSTATE;
uint16_t _TRACE_IDE_DATA_READW_DSTATE;
uint16_t _TRACE_IDE_DATA_WRITEW_DSTATE;
uint16_t _TRACE_IDE_DATA_READL_DSTATE;
uint16_t _TRACE_IDE_DATA_WRITEL_DSTATE;
uint16_t _TRACE_IDE_BUS_EXEC_CMD_DSTATE;
uint16_t _TRACE_IDE_CANCEL_DMA_SYNC_BUFFERED_DSTATE;
uint16_t _TRACE_IDE_CANCEL_DMA_SYNC_REMAINING_DSTATE;
uint16_t _TRACE_IDE_SECTOR_READ_DSTATE;
uint16_t _TRACE_IDE_SECTOR_WRITE_DSTATE;
uint16_t _TRACE_IDE_RESET_DSTATE;
uint16_t _TRACE_IDE_BUS_RESET_AIO_DSTATE;
uint16_t _TRACE_IDE_DMA_CB_DSTATE;
uint16_t _TRACE_BMDMA_READ_CMD646_DSTATE;
uint16_t _TRACE_BMDMA_WRITE_CMD646_DSTATE;
uint16_t _TRACE_BMDMA_RESET_DSTATE;
uint16_t _TRACE_BMDMA_CMD_WRITEB_DSTATE;
uint16_t _TRACE_BMDMA_ADDR_READ_DSTATE;
uint16_t _TRACE_BMDMA_ADDR_WRITE_DSTATE;
uint16_t _TRACE_BMDMA_READ_DSTATE;
uint16_t _TRACE_BMDMA_WRITE_DSTATE;
uint16_t _TRACE_SII3112_READ_DSTATE;
uint16_t _TRACE_SII3112_WRITE_DSTATE;
uint16_t _TRACE_SII3112_SET_IRQ_DSTATE;
uint16_t _TRACE_BMDMA_READ_VIA_DSTATE;
uint16_t _TRACE_BMDMA_WRITE_VIA_DSTATE;
uint16_t _TRACE_CD_READ_SECTOR_SYNC_DSTATE;
uint16_t _TRACE_CD_READ_SECTOR_CB_DSTATE;
uint16_t _TRACE_CD_READ_SECTOR_DSTATE;
uint16_t _TRACE_IDE_ATAPI_CMD_ERROR_DSTATE;
uint16_t _TRACE_IDE_ATAPI_CMD_REPLY_END_DSTATE;
uint16_t _TRACE_IDE_ATAPI_CMD_REPLY_END_EOT_DSTATE;
uint16_t _TRACE_IDE_ATAPI_CMD_REPLY_END_BCL_DSTATE;
uint16_t _TRACE_IDE_ATAPI_CMD_REPLY_END_NEW_DSTATE;
uint16_t _TRACE_IDE_ATAPI_CMD_CHECK_STATUS_DSTATE;
uint16_t _TRACE_IDE_ATAPI_CMD_READ_DSTATE;
uint16_t _TRACE_IDE_ATAPI_CMD_DSTATE;
uint16_t _TRACE_IDE_ATAPI_CMD_READ_DMA_CB_AIO_DSTATE;
uint16_t _TRACE_IDE_ATAPI_CMD_PACKET_DSTATE;
uint16_t _TRACE_AHCI_PORT_READ_DSTATE;
uint16_t _TRACE_AHCI_PORT_READ_DEFAULT_DSTATE;
uint16_t _TRACE_AHCI_IRQ_RAISE_DSTATE;
uint16_t _TRACE_AHCI_IRQ_LOWER_DSTATE;
uint16_t _TRACE_AHCI_CHECK_IRQ_DSTATE;
uint16_t _TRACE_AHCI_TRIGGER_IRQ_DSTATE;
uint16_t _TRACE_AHCI_PORT_WRITE_DSTATE;
uint16_t _TRACE_AHCI_PORT_WRITE_UNIMPL_DSTATE;
uint16_t _TRACE_AHCI_MEM_READ_32_DSTATE;
uint16_t _TRACE_AHCI_MEM_READ_32_DEFAULT_DSTATE;
uint16_t _TRACE_AHCI_MEM_READ_32_HOST_DSTATE;
uint16_t _TRACE_AHCI_MEM_READ_32_HOST_DEFAULT_DSTATE;
uint16_t _TRACE_AHCI_MEM_READ_DSTATE;
uint16_t _TRACE_AHCI_MEM_WRITE_DSTATE;
uint16_t _TRACE_AHCI_MEM_WRITE_HOST_UNIMPL_DSTATE;
uint16_t _TRACE_AHCI_MEM_WRITE_HOST_DSTATE;
uint16_t _TRACE_AHCI_MEM_WRITE_UNIMPL_DSTATE;
uint16_t _TRACE_AHCI_SET_SIGNATURE_DSTATE;
uint16_t _TRACE_AHCI_RESET_PORT_DSTATE;
uint16_t _TRACE_AHCI_UNMAP_FIS_ADDRESS_NULL_DSTATE;
uint16_t _TRACE_AHCI_UNMAP_CLB_ADDRESS_NULL_DSTATE;
uint16_t _TRACE_AHCI_POPULATE_SGLIST_DSTATE;
uint16_t _TRACE_AHCI_POPULATE_SGLIST_NO_PRDTL_DSTATE;
uint16_t _TRACE_AHCI_POPULATE_SGLIST_NO_MAP_DSTATE;
uint16_t _TRACE_AHCI_POPULATE_SGLIST_SHORT_MAP_DSTATE;
uint16_t _TRACE_AHCI_POPULATE_SGLIST_BAD_OFFSET_DSTATE;
uint16_t _TRACE_NCQ_FINISH_DSTATE;
uint16_t _TRACE_EXECUTE_NCQ_COMMAND_READ_DSTATE;
uint16_t _TRACE_EXECUTE_NCQ_COMMAND_WRITE_DSTATE;
uint16_t _TRACE_EXECUTE_NCQ_COMMAND_UNSUP_DSTATE;
uint16_t _TRACE_PROCESS_NCQ_COMMAND_MISMATCH_DSTATE;
uint16_t _TRACE_PROCESS_NCQ_COMMAND_AUX_DSTATE;
uint16_t _TRACE_PROCESS_NCQ_COMMAND_PRIOICC_DSTATE;
uint16_t _TRACE_PROCESS_NCQ_COMMAND_FUA_DSTATE;
uint16_t _TRACE_PROCESS_NCQ_COMMAND_RARC_DSTATE;
uint16_t _TRACE_PROCESS_NCQ_COMMAND_LARGE_DSTATE;
uint16_t _TRACE_PROCESS_NCQ_COMMAND_DSTATE;
uint16_t _TRACE_HANDLE_REG_H2D_FIS_PMP_DSTATE;
uint16_t _TRACE_HANDLE_REG_H2D_FIS_RES_DSTATE;
uint16_t _TRACE_HANDLE_CMD_BUSY_DSTATE;
uint16_t _TRACE_HANDLE_CMD_NOLIST_DSTATE;
uint16_t _TRACE_HANDLE_CMD_BADPORT_DSTATE;
uint16_t _TRACE_HANDLE_CMD_BADFIS_DSTATE;
uint16_t _TRACE_HANDLE_CMD_BADMAP_DSTATE;
uint16_t _TRACE_HANDLE_CMD_UNHANDLED_FIS_DSTATE;
uint16_t _TRACE_AHCI_PIO_TRANSFER_DSTATE;
uint16_t _TRACE_AHCI_START_DMA_DSTATE;
uint16_t _TRACE_AHCI_DMA_PREPARE_BUF_DSTATE;
uint16_t _TRACE_AHCI_DMA_PREPARE_BUF_FAIL_DSTATE;
uint16_t _TRACE_AHCI_DMA_RW_BUF_DSTATE;
uint16_t _TRACE_AHCI_CMD_DONE_DSTATE;
uint16_t _TRACE_AHCI_RESET_DSTATE;
uint16_t _TRACE_HANDLE_REG_H2D_FIS_DUMP_DSTATE;
uint16_t _TRACE_HANDLE_CMD_FIS_DUMP_DSTATE;
uint16_t _TRACE_ALLWINNER_AHCI_MEM_READ_DSTATE;
uint16_t _TRACE_ALLWINNER_AHCI_MEM_WRITE_DSTATE;
TraceEvent _TRACE_IDE_IOPORT_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_ioport_read",
    .sstate = TRACE_IDE_IOPORT_READ_ENABLED,
    .dstate = &_TRACE_IDE_IOPORT_READ_DSTATE 
};
TraceEvent _TRACE_IDE_IOPORT_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_ioport_write",
    .sstate = TRACE_IDE_IOPORT_WRITE_ENABLED,
    .dstate = &_TRACE_IDE_IOPORT_WRITE_DSTATE 
};
TraceEvent _TRACE_IDE_STATUS_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_status_read",
    .sstate = TRACE_IDE_STATUS_READ_ENABLED,
    .dstate = &_TRACE_IDE_STATUS_READ_DSTATE 
};
TraceEvent _TRACE_IDE_CTRL_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_ctrl_write",
    .sstate = TRACE_IDE_CTRL_WRITE_ENABLED,
    .dstate = &_TRACE_IDE_CTRL_WRITE_DSTATE 
};
TraceEvent _TRACE_IDE_DATA_READW_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_data_readw",
    .sstate = TRACE_IDE_DATA_READW_ENABLED,
    .dstate = &_TRACE_IDE_DATA_READW_DSTATE 
};
TraceEvent _TRACE_IDE_DATA_WRITEW_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_data_writew",
    .sstate = TRACE_IDE_DATA_WRITEW_ENABLED,
    .dstate = &_TRACE_IDE_DATA_WRITEW_DSTATE 
};
TraceEvent _TRACE_IDE_DATA_READL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_data_readl",
    .sstate = TRACE_IDE_DATA_READL_ENABLED,
    .dstate = &_TRACE_IDE_DATA_READL_DSTATE 
};
TraceEvent _TRACE_IDE_DATA_WRITEL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_data_writel",
    .sstate = TRACE_IDE_DATA_WRITEL_ENABLED,
    .dstate = &_TRACE_IDE_DATA_WRITEL_DSTATE 
};
TraceEvent _TRACE_IDE_BUS_EXEC_CMD_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_bus_exec_cmd",
    .sstate = TRACE_IDE_BUS_EXEC_CMD_ENABLED,
    .dstate = &_TRACE_IDE_BUS_EXEC_CMD_DSTATE 
};
TraceEvent _TRACE_IDE_CANCEL_DMA_SYNC_BUFFERED_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_cancel_dma_sync_buffered",
    .sstate = TRACE_IDE_CANCEL_DMA_SYNC_BUFFERED_ENABLED,
    .dstate = &_TRACE_IDE_CANCEL_DMA_SYNC_BUFFERED_DSTATE 
};
TraceEvent _TRACE_IDE_CANCEL_DMA_SYNC_REMAINING_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_cancel_dma_sync_remaining",
    .sstate = TRACE_IDE_CANCEL_DMA_SYNC_REMAINING_ENABLED,
    .dstate = &_TRACE_IDE_CANCEL_DMA_SYNC_REMAINING_DSTATE 
};
TraceEvent _TRACE_IDE_SECTOR_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_sector_read",
    .sstate = TRACE_IDE_SECTOR_READ_ENABLED,
    .dstate = &_TRACE_IDE_SECTOR_READ_DSTATE 
};
TraceEvent _TRACE_IDE_SECTOR_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_sector_write",
    .sstate = TRACE_IDE_SECTOR_WRITE_ENABLED,
    .dstate = &_TRACE_IDE_SECTOR_WRITE_DSTATE 
};
TraceEvent _TRACE_IDE_RESET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_reset",
    .sstate = TRACE_IDE_RESET_ENABLED,
    .dstate = &_TRACE_IDE_RESET_DSTATE 
};
TraceEvent _TRACE_IDE_BUS_RESET_AIO_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_bus_reset_aio",
    .sstate = TRACE_IDE_BUS_RESET_AIO_ENABLED,
    .dstate = &_TRACE_IDE_BUS_RESET_AIO_DSTATE 
};
TraceEvent _TRACE_IDE_DMA_CB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_dma_cb",
    .sstate = TRACE_IDE_DMA_CB_ENABLED,
    .dstate = &_TRACE_IDE_DMA_CB_DSTATE 
};
TraceEvent _TRACE_BMDMA_READ_CMD646_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "bmdma_read_cmd646",
    .sstate = TRACE_BMDMA_READ_CMD646_ENABLED,
    .dstate = &_TRACE_BMDMA_READ_CMD646_DSTATE 
};
TraceEvent _TRACE_BMDMA_WRITE_CMD646_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "bmdma_write_cmd646",
    .sstate = TRACE_BMDMA_WRITE_CMD646_ENABLED,
    .dstate = &_TRACE_BMDMA_WRITE_CMD646_DSTATE 
};
TraceEvent _TRACE_BMDMA_RESET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "bmdma_reset",
    .sstate = TRACE_BMDMA_RESET_ENABLED,
    .dstate = &_TRACE_BMDMA_RESET_DSTATE 
};
TraceEvent _TRACE_BMDMA_CMD_WRITEB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "bmdma_cmd_writeb",
    .sstate = TRACE_BMDMA_CMD_WRITEB_ENABLED,
    .dstate = &_TRACE_BMDMA_CMD_WRITEB_DSTATE 
};
TraceEvent _TRACE_BMDMA_ADDR_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "bmdma_addr_read",
    .sstate = TRACE_BMDMA_ADDR_READ_ENABLED,
    .dstate = &_TRACE_BMDMA_ADDR_READ_DSTATE 
};
TraceEvent _TRACE_BMDMA_ADDR_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "bmdma_addr_write",
    .sstate = TRACE_BMDMA_ADDR_WRITE_ENABLED,
    .dstate = &_TRACE_BMDMA_ADDR_WRITE_DSTATE 
};
TraceEvent _TRACE_BMDMA_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "bmdma_read",
    .sstate = TRACE_BMDMA_READ_ENABLED,
    .dstate = &_TRACE_BMDMA_READ_DSTATE 
};
TraceEvent _TRACE_BMDMA_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "bmdma_write",
    .sstate = TRACE_BMDMA_WRITE_ENABLED,
    .dstate = &_TRACE_BMDMA_WRITE_DSTATE 
};
TraceEvent _TRACE_SII3112_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sii3112_read",
    .sstate = TRACE_SII3112_READ_ENABLED,
    .dstate = &_TRACE_SII3112_READ_DSTATE 
};
TraceEvent _TRACE_SII3112_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sii3112_write",
    .sstate = TRACE_SII3112_WRITE_ENABLED,
    .dstate = &_TRACE_SII3112_WRITE_DSTATE 
};
TraceEvent _TRACE_SII3112_SET_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "sii3112_set_irq",
    .sstate = TRACE_SII3112_SET_IRQ_ENABLED,
    .dstate = &_TRACE_SII3112_SET_IRQ_DSTATE 
};
TraceEvent _TRACE_BMDMA_READ_VIA_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "bmdma_read_via",
    .sstate = TRACE_BMDMA_READ_VIA_ENABLED,
    .dstate = &_TRACE_BMDMA_READ_VIA_DSTATE 
};
TraceEvent _TRACE_BMDMA_WRITE_VIA_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "bmdma_write_via",
    .sstate = TRACE_BMDMA_WRITE_VIA_ENABLED,
    .dstate = &_TRACE_BMDMA_WRITE_VIA_DSTATE 
};
TraceEvent _TRACE_CD_READ_SECTOR_SYNC_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cd_read_sector_sync",
    .sstate = TRACE_CD_READ_SECTOR_SYNC_ENABLED,
    .dstate = &_TRACE_CD_READ_SECTOR_SYNC_DSTATE 
};
TraceEvent _TRACE_CD_READ_SECTOR_CB_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cd_read_sector_cb",
    .sstate = TRACE_CD_READ_SECTOR_CB_ENABLED,
    .dstate = &_TRACE_CD_READ_SECTOR_CB_DSTATE 
};
TraceEvent _TRACE_CD_READ_SECTOR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "cd_read_sector",
    .sstate = TRACE_CD_READ_SECTOR_ENABLED,
    .dstate = &_TRACE_CD_READ_SECTOR_DSTATE 
};
TraceEvent _TRACE_IDE_ATAPI_CMD_ERROR_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_atapi_cmd_error",
    .sstate = TRACE_IDE_ATAPI_CMD_ERROR_ENABLED,
    .dstate = &_TRACE_IDE_ATAPI_CMD_ERROR_DSTATE 
};
TraceEvent _TRACE_IDE_ATAPI_CMD_REPLY_END_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_atapi_cmd_reply_end",
    .sstate = TRACE_IDE_ATAPI_CMD_REPLY_END_ENABLED,
    .dstate = &_TRACE_IDE_ATAPI_CMD_REPLY_END_DSTATE 
};
TraceEvent _TRACE_IDE_ATAPI_CMD_REPLY_END_EOT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_atapi_cmd_reply_end_eot",
    .sstate = TRACE_IDE_ATAPI_CMD_REPLY_END_EOT_ENABLED,
    .dstate = &_TRACE_IDE_ATAPI_CMD_REPLY_END_EOT_DSTATE 
};
TraceEvent _TRACE_IDE_ATAPI_CMD_REPLY_END_BCL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_atapi_cmd_reply_end_bcl",
    .sstate = TRACE_IDE_ATAPI_CMD_REPLY_END_BCL_ENABLED,
    .dstate = &_TRACE_IDE_ATAPI_CMD_REPLY_END_BCL_DSTATE 
};
TraceEvent _TRACE_IDE_ATAPI_CMD_REPLY_END_NEW_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_atapi_cmd_reply_end_new",
    .sstate = TRACE_IDE_ATAPI_CMD_REPLY_END_NEW_ENABLED,
    .dstate = &_TRACE_IDE_ATAPI_CMD_REPLY_END_NEW_DSTATE 
};
TraceEvent _TRACE_IDE_ATAPI_CMD_CHECK_STATUS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_atapi_cmd_check_status",
    .sstate = TRACE_IDE_ATAPI_CMD_CHECK_STATUS_ENABLED,
    .dstate = &_TRACE_IDE_ATAPI_CMD_CHECK_STATUS_DSTATE 
};
TraceEvent _TRACE_IDE_ATAPI_CMD_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_atapi_cmd_read",
    .sstate = TRACE_IDE_ATAPI_CMD_READ_ENABLED,
    .dstate = &_TRACE_IDE_ATAPI_CMD_READ_DSTATE 
};
TraceEvent _TRACE_IDE_ATAPI_CMD_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_atapi_cmd",
    .sstate = TRACE_IDE_ATAPI_CMD_ENABLED,
    .dstate = &_TRACE_IDE_ATAPI_CMD_DSTATE 
};
TraceEvent _TRACE_IDE_ATAPI_CMD_READ_DMA_CB_AIO_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_atapi_cmd_read_dma_cb_aio",
    .sstate = TRACE_IDE_ATAPI_CMD_READ_DMA_CB_AIO_ENABLED,
    .dstate = &_TRACE_IDE_ATAPI_CMD_READ_DMA_CB_AIO_DSTATE 
};
TraceEvent _TRACE_IDE_ATAPI_CMD_PACKET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ide_atapi_cmd_packet",
    .sstate = TRACE_IDE_ATAPI_CMD_PACKET_ENABLED,
    .dstate = &_TRACE_IDE_ATAPI_CMD_PACKET_DSTATE 
};
TraceEvent _TRACE_AHCI_PORT_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_port_read",
    .sstate = TRACE_AHCI_PORT_READ_ENABLED,
    .dstate = &_TRACE_AHCI_PORT_READ_DSTATE 
};
TraceEvent _TRACE_AHCI_PORT_READ_DEFAULT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_port_read_default",
    .sstate = TRACE_AHCI_PORT_READ_DEFAULT_ENABLED,
    .dstate = &_TRACE_AHCI_PORT_READ_DEFAULT_DSTATE 
};
TraceEvent _TRACE_AHCI_IRQ_RAISE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_irq_raise",
    .sstate = TRACE_AHCI_IRQ_RAISE_ENABLED,
    .dstate = &_TRACE_AHCI_IRQ_RAISE_DSTATE 
};
TraceEvent _TRACE_AHCI_IRQ_LOWER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_irq_lower",
    .sstate = TRACE_AHCI_IRQ_LOWER_ENABLED,
    .dstate = &_TRACE_AHCI_IRQ_LOWER_DSTATE 
};
TraceEvent _TRACE_AHCI_CHECK_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_check_irq",
    .sstate = TRACE_AHCI_CHECK_IRQ_ENABLED,
    .dstate = &_TRACE_AHCI_CHECK_IRQ_DSTATE 
};
TraceEvent _TRACE_AHCI_TRIGGER_IRQ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_trigger_irq",
    .sstate = TRACE_AHCI_TRIGGER_IRQ_ENABLED,
    .dstate = &_TRACE_AHCI_TRIGGER_IRQ_DSTATE 
};
TraceEvent _TRACE_AHCI_PORT_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_port_write",
    .sstate = TRACE_AHCI_PORT_WRITE_ENABLED,
    .dstate = &_TRACE_AHCI_PORT_WRITE_DSTATE 
};
TraceEvent _TRACE_AHCI_PORT_WRITE_UNIMPL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_port_write_unimpl",
    .sstate = TRACE_AHCI_PORT_WRITE_UNIMPL_ENABLED,
    .dstate = &_TRACE_AHCI_PORT_WRITE_UNIMPL_DSTATE 
};
TraceEvent _TRACE_AHCI_MEM_READ_32_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_mem_read_32",
    .sstate = TRACE_AHCI_MEM_READ_32_ENABLED,
    .dstate = &_TRACE_AHCI_MEM_READ_32_DSTATE 
};
TraceEvent _TRACE_AHCI_MEM_READ_32_DEFAULT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_mem_read_32_default",
    .sstate = TRACE_AHCI_MEM_READ_32_DEFAULT_ENABLED,
    .dstate = &_TRACE_AHCI_MEM_READ_32_DEFAULT_DSTATE 
};
TraceEvent _TRACE_AHCI_MEM_READ_32_HOST_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_mem_read_32_host",
    .sstate = TRACE_AHCI_MEM_READ_32_HOST_ENABLED,
    .dstate = &_TRACE_AHCI_MEM_READ_32_HOST_DSTATE 
};
TraceEvent _TRACE_AHCI_MEM_READ_32_HOST_DEFAULT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_mem_read_32_host_default",
    .sstate = TRACE_AHCI_MEM_READ_32_HOST_DEFAULT_ENABLED,
    .dstate = &_TRACE_AHCI_MEM_READ_32_HOST_DEFAULT_DSTATE 
};
TraceEvent _TRACE_AHCI_MEM_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_mem_read",
    .sstate = TRACE_AHCI_MEM_READ_ENABLED,
    .dstate = &_TRACE_AHCI_MEM_READ_DSTATE 
};
TraceEvent _TRACE_AHCI_MEM_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_mem_write",
    .sstate = TRACE_AHCI_MEM_WRITE_ENABLED,
    .dstate = &_TRACE_AHCI_MEM_WRITE_DSTATE 
};
TraceEvent _TRACE_AHCI_MEM_WRITE_HOST_UNIMPL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_mem_write_host_unimpl",
    .sstate = TRACE_AHCI_MEM_WRITE_HOST_UNIMPL_ENABLED,
    .dstate = &_TRACE_AHCI_MEM_WRITE_HOST_UNIMPL_DSTATE 
};
TraceEvent _TRACE_AHCI_MEM_WRITE_HOST_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_mem_write_host",
    .sstate = TRACE_AHCI_MEM_WRITE_HOST_ENABLED,
    .dstate = &_TRACE_AHCI_MEM_WRITE_HOST_DSTATE 
};
TraceEvent _TRACE_AHCI_MEM_WRITE_UNIMPL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_mem_write_unimpl",
    .sstate = TRACE_AHCI_MEM_WRITE_UNIMPL_ENABLED,
    .dstate = &_TRACE_AHCI_MEM_WRITE_UNIMPL_DSTATE 
};
TraceEvent _TRACE_AHCI_SET_SIGNATURE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_set_signature",
    .sstate = TRACE_AHCI_SET_SIGNATURE_ENABLED,
    .dstate = &_TRACE_AHCI_SET_SIGNATURE_DSTATE 
};
TraceEvent _TRACE_AHCI_RESET_PORT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_reset_port",
    .sstate = TRACE_AHCI_RESET_PORT_ENABLED,
    .dstate = &_TRACE_AHCI_RESET_PORT_DSTATE 
};
TraceEvent _TRACE_AHCI_UNMAP_FIS_ADDRESS_NULL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_unmap_fis_address_null",
    .sstate = TRACE_AHCI_UNMAP_FIS_ADDRESS_NULL_ENABLED,
    .dstate = &_TRACE_AHCI_UNMAP_FIS_ADDRESS_NULL_DSTATE 
};
TraceEvent _TRACE_AHCI_UNMAP_CLB_ADDRESS_NULL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_unmap_clb_address_null",
    .sstate = TRACE_AHCI_UNMAP_CLB_ADDRESS_NULL_ENABLED,
    .dstate = &_TRACE_AHCI_UNMAP_CLB_ADDRESS_NULL_DSTATE 
};
TraceEvent _TRACE_AHCI_POPULATE_SGLIST_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_populate_sglist",
    .sstate = TRACE_AHCI_POPULATE_SGLIST_ENABLED,
    .dstate = &_TRACE_AHCI_POPULATE_SGLIST_DSTATE 
};
TraceEvent _TRACE_AHCI_POPULATE_SGLIST_NO_PRDTL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_populate_sglist_no_prdtl",
    .sstate = TRACE_AHCI_POPULATE_SGLIST_NO_PRDTL_ENABLED,
    .dstate = &_TRACE_AHCI_POPULATE_SGLIST_NO_PRDTL_DSTATE 
};
TraceEvent _TRACE_AHCI_POPULATE_SGLIST_NO_MAP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_populate_sglist_no_map",
    .sstate = TRACE_AHCI_POPULATE_SGLIST_NO_MAP_ENABLED,
    .dstate = &_TRACE_AHCI_POPULATE_SGLIST_NO_MAP_DSTATE 
};
TraceEvent _TRACE_AHCI_POPULATE_SGLIST_SHORT_MAP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_populate_sglist_short_map",
    .sstate = TRACE_AHCI_POPULATE_SGLIST_SHORT_MAP_ENABLED,
    .dstate = &_TRACE_AHCI_POPULATE_SGLIST_SHORT_MAP_DSTATE 
};
TraceEvent _TRACE_AHCI_POPULATE_SGLIST_BAD_OFFSET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_populate_sglist_bad_offset",
    .sstate = TRACE_AHCI_POPULATE_SGLIST_BAD_OFFSET_ENABLED,
    .dstate = &_TRACE_AHCI_POPULATE_SGLIST_BAD_OFFSET_DSTATE 
};
TraceEvent _TRACE_NCQ_FINISH_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ncq_finish",
    .sstate = TRACE_NCQ_FINISH_ENABLED,
    .dstate = &_TRACE_NCQ_FINISH_DSTATE 
};
TraceEvent _TRACE_EXECUTE_NCQ_COMMAND_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "execute_ncq_command_read",
    .sstate = TRACE_EXECUTE_NCQ_COMMAND_READ_ENABLED,
    .dstate = &_TRACE_EXECUTE_NCQ_COMMAND_READ_DSTATE 
};
TraceEvent _TRACE_EXECUTE_NCQ_COMMAND_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "execute_ncq_command_write",
    .sstate = TRACE_EXECUTE_NCQ_COMMAND_WRITE_ENABLED,
    .dstate = &_TRACE_EXECUTE_NCQ_COMMAND_WRITE_DSTATE 
};
TraceEvent _TRACE_EXECUTE_NCQ_COMMAND_UNSUP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "execute_ncq_command_unsup",
    .sstate = TRACE_EXECUTE_NCQ_COMMAND_UNSUP_ENABLED,
    .dstate = &_TRACE_EXECUTE_NCQ_COMMAND_UNSUP_DSTATE 
};
TraceEvent _TRACE_PROCESS_NCQ_COMMAND_MISMATCH_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "process_ncq_command_mismatch",
    .sstate = TRACE_PROCESS_NCQ_COMMAND_MISMATCH_ENABLED,
    .dstate = &_TRACE_PROCESS_NCQ_COMMAND_MISMATCH_DSTATE 
};
TraceEvent _TRACE_PROCESS_NCQ_COMMAND_AUX_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "process_ncq_command_aux",
    .sstate = TRACE_PROCESS_NCQ_COMMAND_AUX_ENABLED,
    .dstate = &_TRACE_PROCESS_NCQ_COMMAND_AUX_DSTATE 
};
TraceEvent _TRACE_PROCESS_NCQ_COMMAND_PRIOICC_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "process_ncq_command_prioicc",
    .sstate = TRACE_PROCESS_NCQ_COMMAND_PRIOICC_ENABLED,
    .dstate = &_TRACE_PROCESS_NCQ_COMMAND_PRIOICC_DSTATE 
};
TraceEvent _TRACE_PROCESS_NCQ_COMMAND_FUA_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "process_ncq_command_fua",
    .sstate = TRACE_PROCESS_NCQ_COMMAND_FUA_ENABLED,
    .dstate = &_TRACE_PROCESS_NCQ_COMMAND_FUA_DSTATE 
};
TraceEvent _TRACE_PROCESS_NCQ_COMMAND_RARC_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "process_ncq_command_rarc",
    .sstate = TRACE_PROCESS_NCQ_COMMAND_RARC_ENABLED,
    .dstate = &_TRACE_PROCESS_NCQ_COMMAND_RARC_DSTATE 
};
TraceEvent _TRACE_PROCESS_NCQ_COMMAND_LARGE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "process_ncq_command_large",
    .sstate = TRACE_PROCESS_NCQ_COMMAND_LARGE_ENABLED,
    .dstate = &_TRACE_PROCESS_NCQ_COMMAND_LARGE_DSTATE 
};
TraceEvent _TRACE_PROCESS_NCQ_COMMAND_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "process_ncq_command",
    .sstate = TRACE_PROCESS_NCQ_COMMAND_ENABLED,
    .dstate = &_TRACE_PROCESS_NCQ_COMMAND_DSTATE 
};
TraceEvent _TRACE_HANDLE_REG_H2D_FIS_PMP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "handle_reg_h2d_fis_pmp",
    .sstate = TRACE_HANDLE_REG_H2D_FIS_PMP_ENABLED,
    .dstate = &_TRACE_HANDLE_REG_H2D_FIS_PMP_DSTATE 
};
TraceEvent _TRACE_HANDLE_REG_H2D_FIS_RES_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "handle_reg_h2d_fis_res",
    .sstate = TRACE_HANDLE_REG_H2D_FIS_RES_ENABLED,
    .dstate = &_TRACE_HANDLE_REG_H2D_FIS_RES_DSTATE 
};
TraceEvent _TRACE_HANDLE_CMD_BUSY_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "handle_cmd_busy",
    .sstate = TRACE_HANDLE_CMD_BUSY_ENABLED,
    .dstate = &_TRACE_HANDLE_CMD_BUSY_DSTATE 
};
TraceEvent _TRACE_HANDLE_CMD_NOLIST_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "handle_cmd_nolist",
    .sstate = TRACE_HANDLE_CMD_NOLIST_ENABLED,
    .dstate = &_TRACE_HANDLE_CMD_NOLIST_DSTATE 
};
TraceEvent _TRACE_HANDLE_CMD_BADPORT_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "handle_cmd_badport",
    .sstate = TRACE_HANDLE_CMD_BADPORT_ENABLED,
    .dstate = &_TRACE_HANDLE_CMD_BADPORT_DSTATE 
};
TraceEvent _TRACE_HANDLE_CMD_BADFIS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "handle_cmd_badfis",
    .sstate = TRACE_HANDLE_CMD_BADFIS_ENABLED,
    .dstate = &_TRACE_HANDLE_CMD_BADFIS_DSTATE 
};
TraceEvent _TRACE_HANDLE_CMD_BADMAP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "handle_cmd_badmap",
    .sstate = TRACE_HANDLE_CMD_BADMAP_ENABLED,
    .dstate = &_TRACE_HANDLE_CMD_BADMAP_DSTATE 
};
TraceEvent _TRACE_HANDLE_CMD_UNHANDLED_FIS_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "handle_cmd_unhandled_fis",
    .sstate = TRACE_HANDLE_CMD_UNHANDLED_FIS_ENABLED,
    .dstate = &_TRACE_HANDLE_CMD_UNHANDLED_FIS_DSTATE 
};
TraceEvent _TRACE_AHCI_PIO_TRANSFER_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_pio_transfer",
    .sstate = TRACE_AHCI_PIO_TRANSFER_ENABLED,
    .dstate = &_TRACE_AHCI_PIO_TRANSFER_DSTATE 
};
TraceEvent _TRACE_AHCI_START_DMA_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_start_dma",
    .sstate = TRACE_AHCI_START_DMA_ENABLED,
    .dstate = &_TRACE_AHCI_START_DMA_DSTATE 
};
TraceEvent _TRACE_AHCI_DMA_PREPARE_BUF_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_dma_prepare_buf",
    .sstate = TRACE_AHCI_DMA_PREPARE_BUF_ENABLED,
    .dstate = &_TRACE_AHCI_DMA_PREPARE_BUF_DSTATE 
};
TraceEvent _TRACE_AHCI_DMA_PREPARE_BUF_FAIL_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_dma_prepare_buf_fail",
    .sstate = TRACE_AHCI_DMA_PREPARE_BUF_FAIL_ENABLED,
    .dstate = &_TRACE_AHCI_DMA_PREPARE_BUF_FAIL_DSTATE 
};
TraceEvent _TRACE_AHCI_DMA_RW_BUF_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_dma_rw_buf",
    .sstate = TRACE_AHCI_DMA_RW_BUF_ENABLED,
    .dstate = &_TRACE_AHCI_DMA_RW_BUF_DSTATE 
};
TraceEvent _TRACE_AHCI_CMD_DONE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_cmd_done",
    .sstate = TRACE_AHCI_CMD_DONE_ENABLED,
    .dstate = &_TRACE_AHCI_CMD_DONE_DSTATE 
};
TraceEvent _TRACE_AHCI_RESET_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "ahci_reset",
    .sstate = TRACE_AHCI_RESET_ENABLED,
    .dstate = &_TRACE_AHCI_RESET_DSTATE 
};
TraceEvent _TRACE_HANDLE_REG_H2D_FIS_DUMP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "handle_reg_h2d_fis_dump",
    .sstate = TRACE_HANDLE_REG_H2D_FIS_DUMP_ENABLED,
    .dstate = &_TRACE_HANDLE_REG_H2D_FIS_DUMP_DSTATE 
};
TraceEvent _TRACE_HANDLE_CMD_FIS_DUMP_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "handle_cmd_fis_dump",
    .sstate = TRACE_HANDLE_CMD_FIS_DUMP_ENABLED,
    .dstate = &_TRACE_HANDLE_CMD_FIS_DUMP_DSTATE 
};
TraceEvent _TRACE_ALLWINNER_AHCI_MEM_READ_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "allwinner_ahci_mem_read",
    .sstate = TRACE_ALLWINNER_AHCI_MEM_READ_ENABLED,
    .dstate = &_TRACE_ALLWINNER_AHCI_MEM_READ_DSTATE 
};
TraceEvent _TRACE_ALLWINNER_AHCI_MEM_WRITE_EVENT = {
    .id = 0,
    .vcpu_id = TRACE_VCPU_EVENT_NONE,
    .name = "allwinner_ahci_mem_write",
    .sstate = TRACE_ALLWINNER_AHCI_MEM_WRITE_ENABLED,
    .dstate = &_TRACE_ALLWINNER_AHCI_MEM_WRITE_DSTATE 
};
TraceEvent *hw_ide_trace_events[] = {
    &_TRACE_IDE_IOPORT_READ_EVENT,
    &_TRACE_IDE_IOPORT_WRITE_EVENT,
    &_TRACE_IDE_STATUS_READ_EVENT,
    &_TRACE_IDE_CTRL_WRITE_EVENT,
    &_TRACE_IDE_DATA_READW_EVENT,
    &_TRACE_IDE_DATA_WRITEW_EVENT,
    &_TRACE_IDE_DATA_READL_EVENT,
    &_TRACE_IDE_DATA_WRITEL_EVENT,
    &_TRACE_IDE_BUS_EXEC_CMD_EVENT,
    &_TRACE_IDE_CANCEL_DMA_SYNC_BUFFERED_EVENT,
    &_TRACE_IDE_CANCEL_DMA_SYNC_REMAINING_EVENT,
    &_TRACE_IDE_SECTOR_READ_EVENT,
    &_TRACE_IDE_SECTOR_WRITE_EVENT,
    &_TRACE_IDE_RESET_EVENT,
    &_TRACE_IDE_BUS_RESET_AIO_EVENT,
    &_TRACE_IDE_DMA_CB_EVENT,
    &_TRACE_BMDMA_READ_CMD646_EVENT,
    &_TRACE_BMDMA_WRITE_CMD646_EVENT,
    &_TRACE_BMDMA_RESET_EVENT,
    &_TRACE_BMDMA_CMD_WRITEB_EVENT,
    &_TRACE_BMDMA_ADDR_READ_EVENT,
    &_TRACE_BMDMA_ADDR_WRITE_EVENT,
    &_TRACE_BMDMA_READ_EVENT,
    &_TRACE_BMDMA_WRITE_EVENT,
    &_TRACE_SII3112_READ_EVENT,
    &_TRACE_SII3112_WRITE_EVENT,
    &_TRACE_SII3112_SET_IRQ_EVENT,
    &_TRACE_BMDMA_READ_VIA_EVENT,
    &_TRACE_BMDMA_WRITE_VIA_EVENT,
    &_TRACE_CD_READ_SECTOR_SYNC_EVENT,
    &_TRACE_CD_READ_SECTOR_CB_EVENT,
    &_TRACE_CD_READ_SECTOR_EVENT,
    &_TRACE_IDE_ATAPI_CMD_ERROR_EVENT,
    &_TRACE_IDE_ATAPI_CMD_REPLY_END_EVENT,
    &_TRACE_IDE_ATAPI_CMD_REPLY_END_EOT_EVENT,
    &_TRACE_IDE_ATAPI_CMD_REPLY_END_BCL_EVENT,
    &_TRACE_IDE_ATAPI_CMD_REPLY_END_NEW_EVENT,
    &_TRACE_IDE_ATAPI_CMD_CHECK_STATUS_EVENT,
    &_TRACE_IDE_ATAPI_CMD_READ_EVENT,
    &_TRACE_IDE_ATAPI_CMD_EVENT,
    &_TRACE_IDE_ATAPI_CMD_READ_DMA_CB_AIO_EVENT,
    &_TRACE_IDE_ATAPI_CMD_PACKET_EVENT,
    &_TRACE_AHCI_PORT_READ_EVENT,
    &_TRACE_AHCI_PORT_READ_DEFAULT_EVENT,
    &_TRACE_AHCI_IRQ_RAISE_EVENT,
    &_TRACE_AHCI_IRQ_LOWER_EVENT,
    &_TRACE_AHCI_CHECK_IRQ_EVENT,
    &_TRACE_AHCI_TRIGGER_IRQ_EVENT,
    &_TRACE_AHCI_PORT_WRITE_EVENT,
    &_TRACE_AHCI_PORT_WRITE_UNIMPL_EVENT,
    &_TRACE_AHCI_MEM_READ_32_EVENT,
    &_TRACE_AHCI_MEM_READ_32_DEFAULT_EVENT,
    &_TRACE_AHCI_MEM_READ_32_HOST_EVENT,
    &_TRACE_AHCI_MEM_READ_32_HOST_DEFAULT_EVENT,
    &_TRACE_AHCI_MEM_READ_EVENT,
    &_TRACE_AHCI_MEM_WRITE_EVENT,
    &_TRACE_AHCI_MEM_WRITE_HOST_UNIMPL_EVENT,
    &_TRACE_AHCI_MEM_WRITE_HOST_EVENT,
    &_TRACE_AHCI_MEM_WRITE_UNIMPL_EVENT,
    &_TRACE_AHCI_SET_SIGNATURE_EVENT,
    &_TRACE_AHCI_RESET_PORT_EVENT,
    &_TRACE_AHCI_UNMAP_FIS_ADDRESS_NULL_EVENT,
    &_TRACE_AHCI_UNMAP_CLB_ADDRESS_NULL_EVENT,
    &_TRACE_AHCI_POPULATE_SGLIST_EVENT,
    &_TRACE_AHCI_POPULATE_SGLIST_NO_PRDTL_EVENT,
    &_TRACE_AHCI_POPULATE_SGLIST_NO_MAP_EVENT,
    &_TRACE_AHCI_POPULATE_SGLIST_SHORT_MAP_EVENT,
    &_TRACE_AHCI_POPULATE_SGLIST_BAD_OFFSET_EVENT,
    &_TRACE_NCQ_FINISH_EVENT,
    &_TRACE_EXECUTE_NCQ_COMMAND_READ_EVENT,
    &_TRACE_EXECUTE_NCQ_COMMAND_WRITE_EVENT,
    &_TRACE_EXECUTE_NCQ_COMMAND_UNSUP_EVENT,
    &_TRACE_PROCESS_NCQ_COMMAND_MISMATCH_EVENT,
    &_TRACE_PROCESS_NCQ_COMMAND_AUX_EVENT,
    &_TRACE_PROCESS_NCQ_COMMAND_PRIOICC_EVENT,
    &_TRACE_PROCESS_NCQ_COMMAND_FUA_EVENT,
    &_TRACE_PROCESS_NCQ_COMMAND_RARC_EVENT,
    &_TRACE_PROCESS_NCQ_COMMAND_LARGE_EVENT,
    &_TRACE_PROCESS_NCQ_COMMAND_EVENT,
    &_TRACE_HANDLE_REG_H2D_FIS_PMP_EVENT,
    &_TRACE_HANDLE_REG_H2D_FIS_RES_EVENT,
    &_TRACE_HANDLE_CMD_BUSY_EVENT,
    &_TRACE_HANDLE_CMD_NOLIST_EVENT,
    &_TRACE_HANDLE_CMD_BADPORT_EVENT,
    &_TRACE_HANDLE_CMD_BADFIS_EVENT,
    &_TRACE_HANDLE_CMD_BADMAP_EVENT,
    &_TRACE_HANDLE_CMD_UNHANDLED_FIS_EVENT,
    &_TRACE_AHCI_PIO_TRANSFER_EVENT,
    &_TRACE_AHCI_START_DMA_EVENT,
    &_TRACE_AHCI_DMA_PREPARE_BUF_EVENT,
    &_TRACE_AHCI_DMA_PREPARE_BUF_FAIL_EVENT,
    &_TRACE_AHCI_DMA_RW_BUF_EVENT,
    &_TRACE_AHCI_CMD_DONE_EVENT,
    &_TRACE_AHCI_RESET_EVENT,
    &_TRACE_HANDLE_REG_H2D_FIS_DUMP_EVENT,
    &_TRACE_HANDLE_CMD_FIS_DUMP_EVENT,
    &_TRACE_ALLWINNER_AHCI_MEM_READ_EVENT,
    &_TRACE_ALLWINNER_AHCI_MEM_WRITE_EVENT,
  NULL,
};

static void trace_hw_ide_register_events(void)
{
    trace_event_register_group(hw_ide_trace_events);
}
trace_init(trace_hw_ide_register_events)
