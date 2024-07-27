/***
 * Constants for Linux C Sockets API functions
 *
 * 20/08/14 - SHM - Initial Version
 * 01/09/14 - SHM - Added MSG_ constants
 ***/

%REPLACE AF_UNIX     by 1;
%REPLACE AF_LOCAL    by 1;
%REPLACE AF_INET     by 2;
%REPLACE AF_INET6    by 10;
%REPLACE AF_IPX      by 4;
%REPLACE AF_NETLINK  by 16;
%REPLACE AF_X25      by 9;
%REPLACE AF_PACKET   by 17;

%REPLACE SOCK_STREAM    by 1;
%REPLACE SOCK_DGRAM     by 2;
%REPLACE SOCK_SEQPACKET by 5;
%REPLACE SOCK_RAW       by 3;
%REPLACE SOCK_RDM       by 4;
%REPLACE SOCK_PACKET    by 10;

%REPLACE SS_FREE          by 0;
%REPLACE SS_UNCONNECTED   by 1;
%REPLACE SS_CONNECTING    by 2;
%REPLACE SS_CONNECTED     by 3;
%REPLACE SS_DISCONNECTING by 4;

%REPLACE MSG_OOB       by 1;
%REPLACE MSG_DONTWAIT  by 64;
%REPLACE MSG_CONFIRM   by 2048;
%REPLACE MSG_NOSIGNAL  by 16384;
%REPLACE MSG_MORE      by 32768;

%REPLACE IPPROTO_IP       by 0;   /* Dummy protocol for TCP.  */
%REPLACE IPPROTO_ICMP     by 1;   /* Internet Control Message Protocol.  */
%REPLACE IPPROTO_IGMP     by 2;   /* Internet Group Management Protocol. */
%REPLACE IPPROTO_IPIP     by 4;   /* IPIP tunnels (older KA9Q tunnels use 94).  */
%REPLACE IPPROTO_TCP      by 6;   /* Transmission Control Protocol.  */
%REPLACE IPPROTO_EGP      by 8;   /* Exterior Gateway Protocol.  */
%REPLACE IPPROTO_PUP      by 12;  /* PUP protocol.  */
%REPLACE IPPROTO_UDP      by 17;  /* User Datagram Protocol.  */
%REPLACE IPPROTO_IDP      by 22;  /* XNS IDP protocol.  */
%REPLACE IPPROTO_TP       by 29;  /* SO Transport Protocol Class 4.  */
%REPLACE IPPROTO_DCCP     by 33;  /* Datagram Congestion Control Protocol.  */
%REPLACE IPPROTO_IPV6     by 41;  /* IPv6 header.  */
%REPLACE IPPROTO_RSVP     by 46;  /* Reservation Protocol.  */
%REPLACE IPPROTO_GRE      by 47;  /* General Routing Encapsulation.  */
%REPLACE IPPROTO_ESP      by 50;  /* encapsulating security payload.  */
%REPLACE IPPROTO_AH       by 51;  /* authentication header.  */
%REPLACE IPPROTO_MTP      by 92;  /* Multicast Transport Protocol.  */
%REPLACE IPPROTO_BEETPH   by 94;  /* IP option pseudo header for BEET.  */
%REPLACE IPPROTO_ENCAP    by 98;  /* Encapsulation Header.  */
%REPLACE IPPROTO_PIM      by 103; /* Protocol Independent Multicast.  */
%REPLACE IPPROTO_COMP     by 108; /* Compression Header Protocol.  */
%REPLACE IPPROTO_L2TP     by 115; /* Layer 2 Tunnelling Protocol.  */
%REPLACE IPPROTO_SCTP     by 132; /* Stream Control Transmission Protocol.  */
%REPLACE IPPROTO_UDPLITE  by 136; /* UDP-Lite protocol.  */
%REPLACE IPPROTO_MPLS     by 137; /* MPLS in IP.  */
%REPLACE IPPROTO_ETHERNET by 143; /* Ethernet-within-IPv6 Encapsulation.  */
%REPLACE IPPROTO_RAW      by 255; /* Raw IP packets.  */
%REPLACE IPPROTO_MPTCP    by 262; /* Multipath TCP connection.  */

