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

#ifndef QAPI_TYPES_NET_H
#define QAPI_TYPES_NET_H

#include "qapi/qapi-builtin-types.h"
#include "qapi-types-common.h"
#include "qapi-types-sockets.h"

typedef struct q_obj_set_link_arg q_obj_set_link_arg;

typedef struct q_obj_netdev_del_arg q_obj_netdev_del_arg;

typedef struct NetLegacyNicOptions NetLegacyNicOptions;

typedef struct NetdevUserOptions NetdevUserOptions;

typedef struct NetdevTapOptions NetdevTapOptions;

typedef struct NetdevSocketOptions NetdevSocketOptions;

typedef struct NetdevL2TPv3Options NetdevL2TPv3Options;

typedef struct NetdevVdeOptions NetdevVdeOptions;

typedef struct NetdevBridgeOptions NetdevBridgeOptions;

typedef struct NetdevHubPortOptions NetdevHubPortOptions;

typedef struct NetdevNetmapOptions NetdevNetmapOptions;

typedef struct NetdevVhostUserOptions NetdevVhostUserOptions;

typedef struct NetdevVhostVDPAOptions NetdevVhostVDPAOptions;

#if defined(CONFIG_VMNET)
typedef struct NetdevVmnetHostOptions NetdevVmnetHostOptions;
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
typedef struct NetdevVmnetSharedOptions NetdevVmnetSharedOptions;
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
typedef struct NetdevVmnetBridgedOptions NetdevVmnetBridgedOptions;
#endif /* defined(CONFIG_VMNET) */

typedef struct NetdevStreamOptions NetdevStreamOptions;

typedef struct NetdevDgramOptions NetdevDgramOptions;

typedef enum NetClientDriver {
    NET_CLIENT_DRIVER_NONE,
    NET_CLIENT_DRIVER_NIC,
    NET_CLIENT_DRIVER_USER,
    NET_CLIENT_DRIVER_TAP,
    NET_CLIENT_DRIVER_L2TPV3,
    NET_CLIENT_DRIVER_SOCKET,
    NET_CLIENT_DRIVER_STREAM,
    NET_CLIENT_DRIVER_DGRAM,
    NET_CLIENT_DRIVER_VDE,
    NET_CLIENT_DRIVER_BRIDGE,
    NET_CLIENT_DRIVER_HUBPORT,
    NET_CLIENT_DRIVER_NETMAP,
    NET_CLIENT_DRIVER_VHOST_USER,
    NET_CLIENT_DRIVER_VHOST_VDPA,
#if defined(CONFIG_VMNET)
    NET_CLIENT_DRIVER_VMNET_HOST,
#endif /* defined(CONFIG_VMNET) */
#if defined(CONFIG_VMNET)
    NET_CLIENT_DRIVER_VMNET_SHARED,
#endif /* defined(CONFIG_VMNET) */
#if defined(CONFIG_VMNET)
    NET_CLIENT_DRIVER_VMNET_BRIDGED,
#endif /* defined(CONFIG_VMNET) */
    NET_CLIENT_DRIVER__MAX,
} NetClientDriver;

#define NetClientDriver_str(val) \
    qapi_enum_lookup(&NetClientDriver_lookup, (val))

extern const QEnumLookup NetClientDriver_lookup;

typedef struct q_obj_Netdev_base q_obj_Netdev_base;

typedef struct Netdev Netdev;

typedef enum RxState {
    RX_STATE_NORMAL,
    RX_STATE_NONE,
    RX_STATE_ALL,
    RX_STATE__MAX,
} RxState;

#define RxState_str(val) \
    qapi_enum_lookup(&RxState_lookup, (val))

extern const QEnumLookup RxState_lookup;

typedef struct RxFilterInfo RxFilterInfo;

typedef struct q_obj_query_rx_filter_arg q_obj_query_rx_filter_arg;

typedef struct RxFilterInfoList RxFilterInfoList;

typedef struct q_obj_NIC_RX_FILTER_CHANGED_arg q_obj_NIC_RX_FILTER_CHANGED_arg;

typedef struct AnnounceParameters AnnounceParameters;

typedef struct q_obj_FAILOVER_NEGOTIATED_arg q_obj_FAILOVER_NEGOTIATED_arg;

typedef struct q_obj_NETDEV_STREAM_CONNECTED_arg q_obj_NETDEV_STREAM_CONNECTED_arg;

typedef struct q_obj_NETDEV_STREAM_DISCONNECTED_arg q_obj_NETDEV_STREAM_DISCONNECTED_arg;

struct q_obj_set_link_arg {
    char *name;
    bool up;
};

struct q_obj_netdev_del_arg {
    char *id;
};

struct NetLegacyNicOptions {
    char *netdev;
    char *macaddr;
    char *model;
    char *addr;
    bool has_vectors;
    uint32_t vectors;
};

void qapi_free_NetLegacyNicOptions(NetLegacyNicOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetLegacyNicOptions, qapi_free_NetLegacyNicOptions)

struct NetdevUserOptions {
    char *hostname;
    bool has_q_restrict;
    bool q_restrict;
    bool has_ipv4;
    bool ipv4;
    bool has_ipv6;
    bool ipv6;
    char *ip;
    char *net;
    char *host;
    char *tftp;
    char *bootfile;
    char *dhcpstart;
    char *dns;
    bool has_dnssearch;
    StringList *dnssearch;
    char *domainname;
    char *ipv6_prefix;
    bool has_ipv6_prefixlen;
    int64_t ipv6_prefixlen;
    char *ipv6_host;
    char *ipv6_dns;
    char *smb;
    char *smbserver;
    bool has_hostfwd;
    StringList *hostfwd;
    bool has_guestfwd;
    StringList *guestfwd;
    char *tftp_server_name;
};

void qapi_free_NetdevUserOptions(NetdevUserOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevUserOptions, qapi_free_NetdevUserOptions)

struct NetdevTapOptions {
    char *ifname;
    char *fd;
    char *fds;
    char *script;
    char *downscript;
    char *br;
    char *helper;
    bool has_sndbuf;
    uint64_t sndbuf;
    bool has_vnet_hdr;
    bool vnet_hdr;
    bool has_vhost;
    bool vhost;
    char *vhostfd;
    char *vhostfds;
    bool has_vhostforce;
    bool vhostforce;
    bool has_queues;
    uint32_t queues;
    bool has_poll_us;
    uint32_t poll_us;
};

void qapi_free_NetdevTapOptions(NetdevTapOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevTapOptions, qapi_free_NetdevTapOptions)

struct NetdevSocketOptions {
    char *fd;
    char *listen;
    char *connect;
    char *mcast;
    char *localaddr;
    char *udp;
};

void qapi_free_NetdevSocketOptions(NetdevSocketOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevSocketOptions, qapi_free_NetdevSocketOptions)

struct NetdevL2TPv3Options {
    char *src;
    char *dst;
    char *srcport;
    char *dstport;
    bool has_ipv6;
    bool ipv6;
    bool has_udp;
    bool udp;
    bool has_cookie64;
    bool cookie64;
    bool has_counter;
    bool counter;
    bool has_pincounter;
    bool pincounter;
    bool has_txcookie;
    uint64_t txcookie;
    bool has_rxcookie;
    uint64_t rxcookie;
    uint32_t txsession;
    bool has_rxsession;
    uint32_t rxsession;
    bool has_offset;
    uint32_t offset;
};

void qapi_free_NetdevL2TPv3Options(NetdevL2TPv3Options *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevL2TPv3Options, qapi_free_NetdevL2TPv3Options)

struct NetdevVdeOptions {
    char *sock;
    bool has_port;
    uint16_t port;
    char *group;
    bool has_mode;
    uint16_t mode;
};

void qapi_free_NetdevVdeOptions(NetdevVdeOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevVdeOptions, qapi_free_NetdevVdeOptions)

struct NetdevBridgeOptions {
    char *br;
    char *helper;
};

void qapi_free_NetdevBridgeOptions(NetdevBridgeOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevBridgeOptions, qapi_free_NetdevBridgeOptions)

struct NetdevHubPortOptions {
    int32_t hubid;
    char *netdev;
};

void qapi_free_NetdevHubPortOptions(NetdevHubPortOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevHubPortOptions, qapi_free_NetdevHubPortOptions)

struct NetdevNetmapOptions {
    char *ifname;
    char *devname;
};

void qapi_free_NetdevNetmapOptions(NetdevNetmapOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevNetmapOptions, qapi_free_NetdevNetmapOptions)

struct NetdevVhostUserOptions {
    char *chardev;
    bool has_vhostforce;
    bool vhostforce;
    bool has_queues;
    int64_t queues;
};

void qapi_free_NetdevVhostUserOptions(NetdevVhostUserOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevVhostUserOptions, qapi_free_NetdevVhostUserOptions)

struct NetdevVhostVDPAOptions {
    char *vhostdev;
    char *vhostfd;
    bool has_queues;
    int64_t queues;
    bool has_x_svq;
    bool x_svq;
};

void qapi_free_NetdevVhostVDPAOptions(NetdevVhostVDPAOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevVhostVDPAOptions, qapi_free_NetdevVhostVDPAOptions)

#if defined(CONFIG_VMNET)
struct NetdevVmnetHostOptions {
    char *start_address;
    char *end_address;
    char *subnet_mask;
    bool has_isolated;
    bool isolated;
    char *net_uuid;
};
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
void qapi_free_NetdevVmnetHostOptions(NetdevVmnetHostOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevVmnetHostOptions, qapi_free_NetdevVmnetHostOptions)
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
struct NetdevVmnetSharedOptions {
    char *start_address;
    char *end_address;
    char *subnet_mask;
    bool has_isolated;
    bool isolated;
    char *nat66_prefix;
};
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
void qapi_free_NetdevVmnetSharedOptions(NetdevVmnetSharedOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevVmnetSharedOptions, qapi_free_NetdevVmnetSharedOptions)
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
struct NetdevVmnetBridgedOptions {
    char *ifname;
    bool has_isolated;
    bool isolated;
};
#endif /* defined(CONFIG_VMNET) */

#if defined(CONFIG_VMNET)
void qapi_free_NetdevVmnetBridgedOptions(NetdevVmnetBridgedOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevVmnetBridgedOptions, qapi_free_NetdevVmnetBridgedOptions)
#endif /* defined(CONFIG_VMNET) */

struct NetdevStreamOptions {
    SocketAddress *addr;
    bool has_server;
    bool server;
    bool has_reconnect;
    uint32_t reconnect;
};

void qapi_free_NetdevStreamOptions(NetdevStreamOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevStreamOptions, qapi_free_NetdevStreamOptions)

struct NetdevDgramOptions {
    SocketAddress *local;
    SocketAddress *remote;
};

void qapi_free_NetdevDgramOptions(NetdevDgramOptions *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(NetdevDgramOptions, qapi_free_NetdevDgramOptions)

struct q_obj_Netdev_base {
    char *id;
    NetClientDriver type;
};

struct Netdev {
    char *id;
    NetClientDriver type;
    union { /* union tag is @type */
        NetLegacyNicOptions nic;
        NetdevUserOptions user;
        NetdevTapOptions tap;
        NetdevL2TPv3Options l2tpv3;
        NetdevSocketOptions socket;
        NetdevStreamOptions stream;
        NetdevDgramOptions dgram;
        NetdevVdeOptions vde;
        NetdevBridgeOptions bridge;
        NetdevHubPortOptions hubport;
        NetdevNetmapOptions netmap;
        NetdevVhostUserOptions vhost_user;
        NetdevVhostVDPAOptions vhost_vdpa;
#if defined(CONFIG_VMNET)
        NetdevVmnetHostOptions vmnet_host;
#endif /* defined(CONFIG_VMNET) */
#if defined(CONFIG_VMNET)
        NetdevVmnetSharedOptions vmnet_shared;
#endif /* defined(CONFIG_VMNET) */
#if defined(CONFIG_VMNET)
        NetdevVmnetBridgedOptions vmnet_bridged;
#endif /* defined(CONFIG_VMNET) */
    } u;
};

void qapi_free_Netdev(Netdev *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(Netdev, qapi_free_Netdev)

struct RxFilterInfo {
    char *name;
    bool promiscuous;
    RxState multicast;
    RxState unicast;
    RxState vlan;
    bool broadcast_allowed;
    bool multicast_overflow;
    bool unicast_overflow;
    char *main_mac;
    intList *vlan_table;
    strList *unicast_table;
    strList *multicast_table;
};

void qapi_free_RxFilterInfo(RxFilterInfo *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RxFilterInfo, qapi_free_RxFilterInfo)

struct q_obj_query_rx_filter_arg {
    char *name;
};

struct RxFilterInfoList {
    RxFilterInfoList *next;
    RxFilterInfo *value;
};

void qapi_free_RxFilterInfoList(RxFilterInfoList *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(RxFilterInfoList, qapi_free_RxFilterInfoList)

struct q_obj_NIC_RX_FILTER_CHANGED_arg {
    char *name;
    char *path;
};

struct AnnounceParameters {
    int64_t initial;
    int64_t max;
    int64_t rounds;
    int64_t step;
    bool has_interfaces;
    strList *interfaces;
    char *id;
};

void qapi_free_AnnounceParameters(AnnounceParameters *obj);
G_DEFINE_AUTOPTR_CLEANUP_FUNC(AnnounceParameters, qapi_free_AnnounceParameters)

struct q_obj_FAILOVER_NEGOTIATED_arg {
    char *device_id;
};

struct q_obj_NETDEV_STREAM_CONNECTED_arg {
    char *netdev_id;
    SocketAddress *addr;
};

struct q_obj_NETDEV_STREAM_DISCONNECTED_arg {
    char *netdev_id;
};

#endif /* QAPI_TYPES_NET_H */
