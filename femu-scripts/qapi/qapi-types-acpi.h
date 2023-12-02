/* AUTOMATICALLY GENERATED, DO NOT MODIFY */

/*
 * Schema-defined QAPI types
 *
 * Copyright IBM, Corp. 2011
 * Copyright (c) 2013-2018 Red Hat Inc.
 *
 * This work is licensed under the terms of the GNU LGPL, version 2.1 or later.
 * See the COPYING.LIB file in the top-level directory.
 */

#ifndef QAPI_TYPES_ACPI_H
#define QAPI_TYPES_ACPI_H

#include "qapi/qapi-builtin-types.h"

typedef struct AcpiTableOptions AcpiTableOptions;

typedef enum ACPISlotType {
    ACPI_SLOT_TYPE_DIMM,
    ACPI_SLOT_TYPE_CPU,
    ACPI_SLOT_TYPE__MAX,
} ACPISlotType;

#define ACPISlotType_str(val) \
    qapi_enum_lookup(&ACPISlotType_lookup, (val))

extern const QEnumLookup ACPISlotType_lookup;

typedef struct ACPIOSTInfo ACPIOSTInfo;

typedef struct ACPIOSTInfoList ACPIOSTInfoList;

typedef struct q_obj_ACPI_DEVICE_OST_arg q_obj_ACPI_DEVICE_OST_arg;

struct AcpiTableOptions {
    char *sig;
    bool has_rev;
    uint8_t rev;
    char *oem_id;
    char *oem_table_id;
    bool has_oem_rev;
    uint32_t oem_rev;
    char *asl_compiler_id;
    bool has_asl_compiler_rev;
    uint32_t asl_compiler_rev;
    char *file;
    char *data;
};

void qapi_free_AcpiTableOptions(AcpiTableOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AcpiTableOptions, qapi_free_AcpiTableOptions)

struct ACPIOSTInfo {
    char *device;
    char *slot;
    ACPISlotType slot_type;
    int64_t source;
    int64_t status;
};

void qapi_free_ACPIOSTInfo(ACPIOSTInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ACPIOSTInfo, qapi_free_ACPIOSTInfo)

struct ACPIOSTInfoList {
    ACPIOSTInfoList *next;
    ACPIOSTInfo *value;
};

void qapi_free_ACPIOSTInfoList(ACPIOSTInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(ACPIOSTInfoList, qapi_free_ACPIOSTInfoList)

struct q_obj_ACPI_DEVICE_OST_arg {
    ACPIOSTInfo *info;
};

#endif /* QAPI_TYPES_ACPI_H */
