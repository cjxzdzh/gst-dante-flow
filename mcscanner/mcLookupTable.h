/*
 * Project: mcscanner - Multicast Network Scanner
 * File name: MCLookupTable.h
 * Description:  Contains the multicast address ranges.
 * These were taken from: http://www.iana.org/assignments/multicast-addresses/
 *
 * Author: Vince Gibson, Georgia Tech Research Institute
 * Copyright: Georgia Tech Research Corporation, Copyright (C) 2010
 *
 * @see The GNU Public License (GPL)
 */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as published by
 * the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 */

#include <time.h>
#include <netinet/in.h>

struct multicastAddress
{
    char start[16];
    char end[16];
    char description[256];
    char reference[256];
    in_addr_t startAddr;
    in_addr_t endAddr;
};

struct multicastAddress multicastAddressLUT[] =
{
    {"224.0.0.0", "224.0.0.0", "Base Address (Reserved)", "[RFC1112][JBP]"},
    {"224.0.0.1", "224.0.0.1", "All Systems on this Subnet", "[RFC1112][JBP]"},
    {"224.0.0.2", "224.0.0.2", "All Routers on this Subnet", "[JBP]"},
    {"224.0.0.3", "224.0.0.3", "Unassigned", "[JBP]"},
    {"224.0.0.4", "224.0.0.4", "DVMRP    Routers", "[RFC1075][JBP]"},
    {"224.0.0.5", "224.0.0.5", "OSPFIGP  OSPFIGP All Routers", "[RFC2328][JXM1]"},
    {"224.0.0.6", "224.0.0.6", "OSPFIGP  OSPFIGP Designated Routers", "[RFC2328][JXM1]"},
    {"224.0.0.7", "224.0.0.7", "ST Routers", "[RFC1190][KS14]"},
    {"224.0.0.8", "224.0.0.8", "ST Hosts", "[RFC1190][KS14]"},
    {"224.0.0.9", "224.0.0.9", "RIP2 Routers", "[RFC1723][GSM11]"},
    {"224.0.0.10", "224.0.0.10", "IGRP Routers", "[Farinacci]"},
    {"224.0.0.11", "224.0.0.11", "Mobile-Agents", "[Bill Simpson]"},
    {"224.0.0.12", "224.0.0.12", "DHCP Server / Relay Agent", "[RFC1884]"},
    {"224.0.0.13", "224.0.0.13", "All PIM Routers", "[Farinacci]"},
    {"224.0.0.14", "224.0.0.14", "RSVP-ENCAPSULATION", "[Braden]"},
    {"224.0.0.15", "224.0.0.15", "all-cbt-routers", "[RFC2189][Ballardie]"},
    {"224.0.0.16", "224.0.0.16", "designated-sbm", "[Baker]"},
    {"224.0.0.17", "224.0.0.17", "all-sbms", "[Baker]"},
    {"224.0.0.18", "224.0.0.18", "VRRP", "[RFC3768]"},
    {"224.0.0.19", "224.0.0.19", "IPAllL1ISs", "[Przygienda]"},
    {"224.0.0.20", "224.0.0.20", "IPAllL2ISs", "[Przygienda]"},
    {"224.0.0.21", "224.0.0.21", "IPAllIntermediate Systems", "[Przygienda]"},
    {"224.0.0.22", "224.0.0.22", "IGMP", "[Deering]"},
    {"224.0.0.23", "224.0.0.23", "GLOBECAST-ID", "[Scannell]"},
    {"224.0.0.24", "224.0.0.24", "OSPFIGP-TE", "[RFC4973]"},
    {"224.0.0.25", "224.0.0.25", "router-to-switch", "[Wu]"},
    {"224.0.0.26", "224.0.0.26", "Unassigned", "[JBP]"},
    {"224.0.0.27", "224.0.0.27", "Al MPP Hello", "[Martinicky]"},
    {"224.0.0.28", "224.0.0.28", "ETC Control", "[Polishinski]"},
    {"224.0.0.29", "224.0.0.29", "GE-FANUC", "[Wacey]"},
    {"224.0.0.30", "224.0.0.30", "indigo-vhdp", "[Caughie]"},
    {"224.0.0.31", "224.0.0.31", "shinbroadband", "[Kittivatcharapong]"},
    {"224.0.0.32", "224.0.0.32", "digistar", "[Kerkan]"},
    {"224.0.0.33", "224.0.0.33", "ff-system-management", "[Glanzer]"},
    {"224.0.0.34", "224.0.0.34", "pt2-discover", "[Kammerlander]"},
    {"224.0.0.35", "224.0.0.35", "DXCLUSTER", "[Koopman]"},
    {"224.0.0.36", "224.0.0.36", "DTCP Announcement", "[Cipiere]"},
    {"224.0.0.37", "224.0.0.68", "zeroconfaddr   (renew 12/02)", "[Guttman]"},
    {"224.0.0.69", "224.0.0.100", "Reserved", "[IANA]"},
    {"224.0.0.101", "224.0.0.101", "cisco-nhap", "[Bakke]"},
    {"224.0.0.102", "224.0.0.102", "HSRP", "[Wilson]"},
    {"224.0.0.103", "224.0.0.103", "MDAP", "[Deleu]"},
    {"224.0.0.104", "224.0.0.104", "Nokia MC CH", "[Kalhour]"},
    {"224.0.0.105", "224.0.0.105", "ff-lr-address", "[Glanzer]"},
    {"224.0.0.106", "224.0.0.106", "All-Snoopers", "[RFC4286]"},
    {"224.0.0.107", "224.0.0.107", "PTP-pdelay", "[IEEE1588][K.Lee]"},
    {"224.0.0.108", "224.0.0.108", "Saratoga", "[Wood]"},
    {"224.0.0.109", "224.0.0.109", "LL-MANET-Routers", "[RFC5498]"},
    {"224.0.0.110", "224.0.0.110", "IGRS", "[Zhou]"},
    {"224.0.0.111", "224.0.0.250", "Unassigned", "[JBP]"},
    {"224.0.0.251", "224.0.0.251", "mDNS", "[Cheshire]"},
    {"224.0.0.252", "224.0.0.252", "Link-local Multicast Name Resolution", "[RFC4795]"},
    {"224.0.0.253", "224.0.0.253", "Teredo", "[RFC-huitema-v6ops-teredo-05.txt]"},
    {"224.0.0.254", "224.0.0.254", "RFC3692-style Experiment (*)", "[RFC4727]"},
    {"224.0.0.255", "224.0.0.255", "Unassigned", "[JBP]"},

//224.0.1.0 - 224.0.1.255  (224.0.1/24) Internetwork Control Block
//----------------------------------------------------------------

    {"224.0.1.0", "224.0.1.0", "VMTP Managers Group", "[RFC1045][DRC3]"},
    {"224.0.1.1", "224.0.1.1", "NTP      Network Time Protocol", "[RFC1119][DLM1]"},
    {"224.0.1.2", "224.0.1.2", "SGI-Dogfight", "[AXC]"},
    {"224.0.1.3", "224.0.1.3", "Rwhod", "[SXD]"},
    {"224.0.1.4", "224.0.1.4", "VNP", "[DRC3]"},
    {"224.0.1.5", "224.0.1.5", "Artificial Horizons - Aviator", "[BXF]"},
    {"224.0.1.6", "224.0.1.6", "NSS - Name Service Server", "[BXS2]"},
    {"224.0.1.7", "224.0.1.7", "AUDIONEWS - Audio News Multicast", "[MXF2]"},
    {"224.0.1.8", "224.0.1.8", "SUN NIS+ Information Service", "[CXM3]"},
    {"224.0.1.9", "224.0.1.9", "MTP Multicast Transport Protocol", "[SXA]"},
    {"224.0.1.10", "224.0.1.10", "IETF-1-LOW-AUDIO", "[SC3]"},
    {"224.0.1.11", "224.0.1.11", "IETF-1-AUDIO", "[SC3]"},
    {"224.0.1.12", "224.0.1.12", "IETF-1-VIDEO", "[SC3]"},
    {"224.0.1.13", "224.0.1.13", "IETF-2-LOW-AUDIO", "[SC3]"},
    {"224.0.1.14", "224.0.1.14", "IETF-2-AUDIO", "[SC3]"},
    {"224.0.1.15", "224.0.1.15", "IETF-2-VIDEO", "[SC3]"},
    {"224.0.1.16", "224.0.1.16", "MUSIC-SERVICE", "[Guido van Rossum]"},
    {"224.0.1.17", "224.0.1.17", "SEANET-TELEMETRY", "[Andrew Maffei]"},
    {"224.0.1.18", "224.0.1.18", "SEANET-IMAGE", "[Andrew Maffei]"},
    {"224.0.1.19", "224.0.1.19", "MLOADD", "[Braden]"},
    {"224.0.1.20", "224.0.1.20", "any private experiment", "[JBP]"},
    {"224.0.1.21", "224.0.1.21", "DVMRP on MOSPF", "[John Moy]"},
    {"224.0.1.22", "224.0.1.22", "SVRLOC", "[Veizades]"},
    {"224.0.1.23", "224.0.1.23", "XINGTV", "[Gordon]"},
    {"224.0.1.24", "224.0.1.24", "microsoft-ds", "<arnoldm&microsoft.com>"},
    {"224.0.1.25", "224.0.1.25", "nbc-pro", "<bloomer&birch.crd.ge.com>"},
    {"224.0.1.26", "224.0.1.26", "nbc-pfn", "<bloomer&birch.crd.ge.com>"},
    {"224.0.1.27", "224.0.1.27", "lmsc-calren-1", "[Uang]"},
    {"224.0.1.28", "224.0.1.28", "lmsc-calren-2", "[Uang]"},
    {"224.0.1.29", "224.0.1.29", "lmsc-calren-3", "[Uang]"},
    {"224.0.1.30", "224.0.1.30", "lmsc-calren-4", "[Uang]"},
    {"224.0.1.31", "224.0.1.31", "ampr-info", "[Janssen]"},
    {"224.0.1.32", "224.0.1.32", "mtrace", "[Casner]"},
    {"224.0.1.33", "224.0.1.33", "RSVP-encap-1", "[Braden]"},
    {"224.0.1.34", "224.0.1.34", "RSVP-encap-2", "[Braden]"},
    {"224.0.1.35", "224.0.1.35", "SVRLOC-DA", "[Veizades]"},
    {"224.0.1.36", "224.0.1.36", "rln-server", "[Kean]"},
    {"224.0.1.37", "224.0.1.37", "proshare-mc", "[Lewis]"},
    {"224.0.1.38", "224.0.1.38", "unassigned", "[]"},
    {"224.0.1.39", "224.0.1.39", "cisco-rp-announce", "[Farinacci]"},
    {"224.0.1.40", "224.0.1.40", "cisco-rp-discovery", "[Farinacci]"},
    {"224.0.1.41", "224.0.1.41", "gatekeeper", "[Toga]"},
    {"224.0.1.42", "224.0.1.42", "iberiagames", "[Marocho]"},
    {"224.0.1.43", "224.0.1.43", "nwn-discovery", "[Zwemmer]"},
    {"224.0.1.44", "224.0.1.44", "nwn-adaptor", "[Zwemmer]"},
    {"224.0.1.45", "224.0.1.45", "isma-1", "[Dunne]"},
    {"224.0.1.46", "224.0.1.46", "isma-2", "[Dunne]"},
    {"224.0.1.47", "224.0.1.47", "telerate", "[Peng]"},
    {"224.0.1.48", "224.0.1.48", "ciena", "[Rodbell]"},
    {"224.0.1.49", "224.0.1.49", "dcap-servers", "[RFC2114]"},
    {"224.0.1.50", "224.0.1.50", "dcap-clients", "[RFC2114]"},
    {"224.0.1.51", "224.0.1.51", "mcntp-directory", "[Rupp]"},
    {"224.0.1.52", "224.0.1.52", "mbone-vcr-directory", "[Holfelder]"},
    {"224.0.1.53", "224.0.1.53", "heartbeat", "[Mamakos]"},
    {"224.0.1.54", "224.0.1.54", "sun-mc-grp", "[DeMoney]"},
    {"224.0.1.55", "224.0.1.55", "extended-sys", "[Poole]"},
    {"224.0.1.56", "224.0.1.56", "pdrncs", "[Wissenbach]"},
    {"224.0.1.57", "224.0.1.57", "tns-adv-multi", "[Albin]"},
    {"224.0.1.58", "224.0.1.58", "vcals-dmu", "[Shindoh]"},
    {"224.0.1.59", "224.0.1.59", "zuba", "[Jackson]"},
    {"224.0.1.60", "224.0.1.60", "hp-device-disc", "[Albright]"},
    {"224.0.1.61", "224.0.1.61", "tms-production", "[Gilani]"},
    {"224.0.1.62", "224.0.1.62", "sunscalar", "[Gibson]"},
    {"224.0.1.63", "224.0.1.63", "mmtp-poll", "[Costales]"},
    {"224.0.1.64", "224.0.1.64", "compaq-peer", "[Volpe]"},
    {"224.0.1.65", "224.0.1.65", "iapp", "[Meier]"},
    {"224.0.1.66", "224.0.1.66", "multihasc-com", "[Brockbank]"},
    {"224.0.1.67", "224.0.1.67", "serv-discovery", "[Honton]"},
    {"224.0.1.68", "224.0.1.68", "mdhcpdisover", "[RFC2730]"},
    {"224.0.1.69", "224.0.1.69", "MMP-bundle-discovery1", "[Malkin]"},
    {"224.0.1.70", "224.0.1.70", "MMP-bundle-discovery2", "[Malkin]"},
    {"224.0.1.71", "224.0.1.71", "XYPOINT DGPS Data Feed", "[Green]"},
    {"224.0.1.72", "224.0.1.72", "GilatSkySurfer", "[Gal]"},
    {"224.0.1.73", "224.0.1.73", "SharesLive", "[Rowatt]"},
    {"224.0.1.74", "224.0.1.74", "NorthernData", "[Sheers]"},
    {"224.0.1.75", "224.0.1.75", "SIP", "[Schulzrinne]"},
    {"224.0.1.76", "224.0.1.76", "IAPP", "[Moelard]"},
    {"224.0.1.77", "224.0.1.77", "AGENTVIEW", "[Iyer]"},
    {"224.0.1.78", "224.0.1.78", "Tibco Multicast1", "[Shum]"},
    {"224.0.1.79", "224.0.1.79", "Tibco Multicast2", "[Shum]"},
    {"224.0.1.80", "224.0.1.80", "MSP", "[Caves]"},
    {"224.0.1.81", "224.0.1.81", "OTT (One-way Trip Time)", "[Schwartz]"},
    {"224.0.1.82", "224.0.1.82", "TRACKTICKER", "[Novick]"},
    {"224.0.1.83", "224.0.1.83", "dtn-mc", "[Gaddie]"},
    {"224.0.1.84", "224.0.1.84", "jini-announcement", "[Scheifler]"},
    {"224.0.1.85", "224.0.1.85", "jini-request", "[Scheifler]"},
    {"224.0.1.86", "224.0.1.86", "sde-discovery", "[Aronson]"},
    {"224.0.1.87", "224.0.1.87", "DirecPC-SI", "[Dillon]"},
    {"224.0.1.88", "224.0.1.88", "B1RMonitor", "[Purkiss]"},
    {"224.0.1.89", "224.0.1.89", "3Com-AMP3 dRMON", "[Banthia]"},
    {"224.0.1.90", "224.0.1.90", "imFtmSvc", "[Bhatti]"},
    {"224.0.1.91", "224.0.1.91", "NQDS4", "[Flynn]"},
    {"224.0.1.92", "224.0.1.92", "NQDS5", "[Flynn]"},
    {"224.0.1.93", "224.0.1.93", "NQDS6", "[Flynn]"},
    {"224.0.1.94", "224.0.1.94", "NLVL12", "[Flynn]"},
    {"224.0.1.95", "224.0.1.95", "NTDS1", "[Flynn]"},
    {"224.0.1.96", "224.0.1.96", "NTDS2", "[Flynn]"},
    {"224.0.1.97", "224.0.1.97", "NODSA", "[Flynn]"},
    {"224.0.1.98", "224.0.1.98", "NODSB", "[Flynn]"},
    {"224.0.1.99", "224.0.1.99", "NODSC", "[Flynn]"},
    {"224.0.1.100", "224.0.1.100", "NODSD", "[Flynn]"},
    {"224.0.1.101", "224.0.1.101", "NQDS4R", "[Flynn]"},
    {"224.0.1.102", "224.0.1.102", "NQDS5R", "[Flynn]"},
    {"224.0.1.103", "224.0.1.103", "NQDS6R", "[Flynn]"},
    {"224.0.1.104", "224.0.1.104", "NLVL12R", "[Flynn]"},
    {"224.0.1.105", "224.0.1.105", "NTDS1R", "[Flynn]"},
    {"224.0.1.106", "224.0.1.106", "NTDS2R", "[Flynn]"},
    {"224.0.1.107", "224.0.1.107", "NODSAR", "[Flynn]"},
    {"224.0.1.108", "224.0.1.108", "NODSBR", "[Flynn]"},
    {"224.0.1.109", "224.0.1.109", "NODSCR", "[Flynn]"},
    {"224.0.1.110", "224.0.1.110", "NODSDR", "[Flynn]"},
    {"224.0.1.111", "224.0.1.111", "MRM", "[Wei]"},
    {"224.0.1.112", "224.0.1.112", "TVE-FILE", "[Blackketter]"},
    {"224.0.1.113", "224.0.1.113", "TVE-ANNOUNCE", "[Blackketter]"},
    {"224.0.1.114", "224.0.1.114", "Mac Srv Loc", "[Woodcock]"},
    {"224.0.1.115", "224.0.1.115", "Simple Multicast", "[Crowcroft]"},
    {"224.0.1.116", "224.0.1.116", "SpectraLinkGW", "[Hamilton]"},
    {"224.0.1.117", "224.0.1.117", "dieboldmcast", "[Marsh]"},
    {"224.0.1.118", "224.0.1.118", "Tivoli Systems", "[Gabriel]"},
    {"224.0.1.119", "224.0.1.119", "pq-lic-mcast", "[Sledge]"},
    {"224.0.1.120", "224.0.1.120", "SPRYWARE LLC", "[Kreutzjans]"},
    {"224.0.1.121", "224.0.1.121", "Pipesplatform", "[Dissett]"},
    {"224.0.1.122", "224.0.1.122", "LiebDevMgmg-DM", "[Velten]"},
    {"224.0.1.123", "224.0.1.123", "TRIBALVOICE", "[Thompson]"},
    {"224.0.1.124", "224.0.1.124", "Unassigned (Retracted 1/29/01)", "[]"},
    {"224.0.1.125", "224.0.1.125", "PolyCom Relay1", "[Coutiere]"},
    {"224.0.1.126", "224.0.1.126", "Infront Multi1", "[Lindeman]"},
    {"224.0.1.127", "224.0.1.127", "XRX DEVICE DISC", "[Wang]"},
    {"224.0.1.128", "224.0.1.128", "CNN", "[Lynch]"},
    {"224.0.1.129", "224.0.1.129", "PTP-primary", "[IEEE1588][K.Lee]"},
    {"224.0.1.130", "224.0.1.130", "PTP-alternate1", "[IEEE1588][K.Lee]"},
    {"224.0.1.131", "224.0.1.131", "PTP-alternate2", "[IEEE1588][K.Lee]"},
    {"224.0.1.132", "224.0.1.132", "PTP-alternate3", "[IEEE1588][K.Lee]"},
    {"224.0.1.133", "224.0.1.133", "ProCast", "[Revzen]"},
    {"224.0.1.134", "224.0.1.134", "3Com Discp", "[White]"},
    {"224.0.1.135", "224.0.1.135", "CS-Multicasting", "[Stanev]"},
    {"224.0.1.136", "224.0.1.136", "TS-MC-1", "[Sveistrup]"},
    {"224.0.1.137", "224.0.1.137", "Make Source", "[Daga]"},
    {"224.0.1.138", "224.0.1.138", "Teleborsa", "[Strazzera]"},
    {"224.0.1.139", "224.0.1.139", "SUMAConfig", "[Wallach]"},
    {"224.0.1.140", "224.0.1.140", "capwap-ac", "[RFC5415]"},
    {"224.0.1.141", "224.0.1.141", "DHCP-SERVERS", "[Hall]"},
    {"224.0.1.142", "224.0.1.142", "CN Router-LL", "[Armitage]"},
    {"224.0.1.143", "224.0.1.143", "EMWIN", "[Querubin]"},
    {"224.0.1.144", "224.0.1.144", "Alchemy Cluster", "[O'Rourke]"},
    {"224.0.1.145", "224.0.1.145", "Satcast One", "[Nevell]"},
    {"224.0.1.146", "224.0.1.146", "Satcast Two", "[Nevell]"},
    {"224.0.1.147", "224.0.1.147", "Satcast Three", "[Nevell]"},
    {"224.0.1.148", "224.0.1.148", "Intline", "[Sliwinski]"},
    {"224.0.1.149", "224.0.1.149", "8x8 Multicast", "[Roper]"},
    {"224.0.1.150", "224.0.1.150", "Unassigned", "[JBP]"},
    {"224.0.1.151", "224.0.1.151", "Intline-1", "[Sliwinski]"},
    {"224.0.1.152", "224.0.1.152", "Intline-2", "[Sliwinski]"},
    {"224.0.1.153", "224.0.1.153", "Intline-3", "[Sliwinski]"},
    {"224.0.1.154", "224.0.1.154", "Intline-4", "[Sliwinski]"},
    {"224.0.1.155", "224.0.1.155", "Intline-5", "[Sliwinski]"},
    {"224.0.1.156", "224.0.1.156", "Intline-6", "[Sliwinski]"},
    {"224.0.1.157", "224.0.1.157", "Intline-7", "[Sliwinski]"},
    {"224.0.1.158", "224.0.1.158", "Intline-8", "[Sliwinski]"},
    {"224.0.1.159", "224.0.1.159", "Intline-9", "[Sliwinski]"},
    {"224.0.1.160", "224.0.1.160", "Intline-10", "[Sliwinski]"},
    {"224.0.1.161", "224.0.1.161", "Intline-11", "[Sliwinski]"},
    {"224.0.1.162", "224.0.1.162", "Intline-12", "[Sliwinski]"},
    {"224.0.1.163", "224.0.1.163", "Intline-13", "[Sliwinski]"},
    {"224.0.1.164", "224.0.1.164", "Intline-14", "[Sliwinski]"},
    {"224.0.1.165", "224.0.1.165", "Intline-15", "[Sliwinski]"},
    {"224.0.1.166", "224.0.1.166", "marratech-cc", "[Parnes]"},
    {"224.0.1.167", "224.0.1.167", "EMS-InterDev", "[Lyda]"},
    {"224.0.1.168", "224.0.1.168", "itb301", "[Rueskamp]"},
    {"224.0.1.169", "224.0.1.169", "rtv-audio", "[Adams]"},
    {"224.0.1.170", "224.0.1.170", "rtv-video", "[Adams]"},
    {"224.0.1.171", "224.0.1.171", "HAVI-Sim", "[Wasserroth]"},
    {"224.0.1.172", "224.0.1.172", "Nokia Cluster", "[O'Rourke]"},
    {"224.0.1.173", "224.0.1.173", "host-request", "[K.Thompson]"},
    {"224.0.1.174", "224.0.1.174", "host-announce", "[K.Thompson]"},
    {"224.0.1.175", "224.0.1.175", "ptk-cluster", "[Hodgson]"},
    {"224.0.1.176", "224.0.1.176", "Proxim Protocol", "[Shukla]"},
    {"224.0.1.177", "224.0.1.177", "Gemtek Systems", "[A.Lee]"},
    {"224.0.1.178", "224.0.1.178", "IEEE IAPP", "[Kerry]"},
    {"224.0.1.179", "224.0.1.179", "1451_Dot5_802_Discovery", "[Coleman]"},
    {"224.0.1.180", "224.0.1.180", "1451_Dot5_802_Group_1", "[Coleman]"},
    {"224.0.1.181", "224.0.1.181", "1451_Dot5_802_Group_2", "[Coleman]"},
    {"224.0.1.182", "224.0.1.182", "1451_Dot5_802_Group_3", "[Coleman]"},
    {"224.0.1.183", "224.0.1.183", "1451_Dot5_802_Group_4", "[Coleman]"},
    {"224.0.1.184", "224.0.1.184", "VFSDP", "[Zorc]"},
    {"224.0.1.185", "224.0.1.185", "ASAP", "[RFC5352]"},
    {"224.0.1.186", "224.0.1.255", "Unassigned", "[JBP]"},


//224.0.2.0 - 224.0.255.0   AD-HOC Block
//--------------------------------------
    {"224.0.2.0", "224.0.2.0", "Unassigned", "[]"},
    {"224.0.2.1", "224.0.2.1", "rwho Group (BSD) (unofficial)", "[JBP]"},
    {"224.0.2.2", "224.0.2.2", "SUN RPC PMAPPROC_CALLIT", "[BXE1]"},
    {"224.0.2.3", "224.0.2.3", "EPSON-disc-set", "[SEIKO EPSON Corp]"},
    {"224.0.2.4", "224.0.2.063", "Unassigned", "[]"},
    {"224.0.2.064", "224.0.2.095", "Amex MDD Service", "[Madry]"},
    {"224.0.2.096", "224.0.2.127", "BallisterNet", "[Ballister]"},
    {"224.0.2.128", "224.0.2.191", "WOZ-Garage", "[Marquardt]"},
    {"224.0.2.192", "224.0.2.255", "SIAC MDD Market Service", "[Lamberg]"},
    {"224.0.3.000", "224.0.3.255", "RFE Generic Service", "[DXS3]"},
    {"224.0.4.000", "224.0.4.255", "RFE Individual Conferences", "[DXS3]"},
    {"224.0.5.000", "224.0.5.127", "CDPD Groups", "[Bob Brenner]"},
    {"224.0.5.128", "224.0.5.191", "SIAC Market Service", "[Cho]"},
    {"224.0.5.192", "224.0.5.255", "SIAC NYSE Order PDP protocol", "[Chan]"},
    {"224.0.6.000", "224.0.6.127", "Cornell ISIS Project", "[Tim Clark]"},
    {"224.0.6.128", "224.0.6.255", "Unassigned", "[IANA]"},
    {"224.0.7.000", "224.0.7.255", "Where-Are-You", "[Simpson]"},
    {"224.0.8.000", "224.0.8.255", "INTV", "[Tynan]"},
    {"224.0.9.000", "224.0.9.255", "Invisible Worlds", "[Malamud]"},
    {"224.0.10.000", "224.0.10.255", "DLSw Groups", "[Lee]"},
    {"224.0.11.000", "224.0.11.255", "NCC.NET Audio", "[Rubin]"},
    {"224.0.12.000", "224.0.12.063", "Microsoft and MSNBC", "[Blank]"},
    {"224.0.13.000", "224.0.13.255", "WorldCom Broadcast Services", "[Barber]"},
    {"224.0.14.000", "224.0.14.255", "NLANR", "[Wessels]"},
    {"224.0.15.000", "224.0.15.255", "Agilent Technologies", "[van der Meulen]"},
    {"224.0.16.000", "224.0.16.255", "XingNet", "[Uusitalo]"},
    {"224.0.17.000", "224.0.17.031", "Mercantile & Commodity Exchange", "[Gilani]"},
    {"224.0.17.032", "224.0.17.063", "NDQMD1", "[Nelson]"},
    {"224.0.17.064", "224.0.17.127", "ODN-DTV", "[Hodges]"},
    {"224.0.18.000", "224.0.18.255", "Dow Jones", "[Peng]"},
    {"224.0.19.000", "224.0.19.063", "Walt Disney Company", "[Watson]"},
    {"224.0.19.064", "224.0.19.095", "Cal Multicast", "[Moran]"},
    {"224.0.19.096", "224.0.19.127", "Amex Market Service", "[Madry]"},
    {"224.0.19.128", "224.0.19.191", "IIG Multicast", "[Carr]"},
    {"224.0.19.192", "224.0.19.207", "Metropol", "[Crawford]"},
    {"224.0.19.208", "224.0.19.239", "Xenoscience, Inc.", "[Timm]"},
    {"224.0.19.240", "224.0.19.255", "MJDPM", "[Straight]"},
    {"224.0.20.000", "224.0.20.063", "MS-IP/TV", "[Wong]"},
    {"224.0.20.064", "224.0.20.127", "Reliable Network Solutions", "[Vogels]"},
    {"224.0.20.128", "224.0.20.143", "TRACKTICKER Group", "[Novick]"},
    {"224.0.20.144", "224.0.20.207", "CNR Rebroadcast MCA", "[Sautter]"},
    {"224.0.21.000", "224.0.21.127", "Talarian MCAST", "[Mendal]"},
    {"224.0.22.000", "224.0.22.239", "WORLD MCAST", "[Stewart]"},
    {"224.0.22.240", "224.0.22.255", "Jones International", "[Ginsburg]"},
    {"224.0.23.0", "224.0.23.0", "ECHONET", "[Saito]"},
    {"224.0.23.1", "224.0.23.1", "Ricoh-device-ctrl", "[Nishida]"},
    {"224.0.23.2", "224.0.23.2", "Ricoh-device-ctrl", "[Nishida]"},
    {"224.0.23.3", "224.0.23.10", "Telefeed", "[Beddoe]"},
    {"224.0.23.11", "224.0.23.11", "SpectraTalk", "[Karhade]"},
    {"224.0.23.12", "224.0.23.12", "EIBnet/IP", "[Goossens]"},
    {"224.0.23.13", "224.0.23.13", "TVE-ANNOUNCE2", "[Dolan]"},
    {"224.0.23.14", "224.0.23.14", "DvbServDisc", "[van Willigen]"},
    {"224.0.23.15", "224.0.23.31", "MJDPM", "[Straight]"},
    {"224.0.23.32", "224.0.23.32", "Norman MCMP", "[Bognaes]"},
    {"224.0.23.33", "224.0.23.33", "RRDP", "[Hoshi]"},
    {"224.0.23.34", "224.0.23.34", "AF_NA", "[Brzezinski]"},
    {"224.0.23.35", "224.0.23.35", "AF_OPRA_NBBO", "[Brzezinski]"},
    {"224.0.23.36", "224.0.23.36", "AF_OPRA_FULL", "[Brzezinski]"},
    {"224.0.23.37", "224.0.23.37", "AF_NEWS", "[Brzezinski]"},
    {"224.0.23.38", "224.0.23.38", "AF_NA_CHI", "[Brzezinski]"},
    {"224.0.23.39", "224.0.23.39", "AF_OPRA_NBBO_CHI", "[Brzezinski]"},
    {"224.0.23.40", "224.0.23.40", "AF_OPRA_FULL_CHI", "[Brzezinski]"},
    {"224.0.23.41", "224.0.23.41", "AF_NEWS_CHI", "[Brzezinski]"},
    {"224.0.23.42", "224.0.23.42", "Control for IP Video", "[Guillaume]"},
    {"224.0.23.43", "224.0.23.43", "acp-discovery", "[Belk]"},
    {"224.0.23.44", "224.0.23.44", "acp-management", "[Belk]"},
    {"224.0.23.45", "224.0.23.45", "acp-data", "[Belk]"},
    {"224.0.23.46", "224.0.23.46", "oap-multicast", "[Eastham]"},
    {"224.0.23.47", "224.0.23.47", "AF_DOB_CHI", "[Brzezinski]"},
    {"224.0.23.48", "224.0.23.48", "AF_OPRA_FULL2_CHI", "[Brzezinski]"},
    {"224.0.23.49", "224.0.23.49", "AF_DOB", "[Brzezinski]"},
    {"224.0.23.50", "224.0.23.50", "AF_OPRA_FULL2", "[Brzezinski]"},
    {"224.0.23.51", "224.0.23.51", "Fairview", "[Lyle]"},
    {"224.0.23.52", "224.0.23.52", "Amex Market Data", "[Madry]"},
    {"224.0.23.53", "224.0.23.53", "MCP", "[DeBaillie]"},
    {"224.0.23.54", "224.0.23.54", "ServDiscovery", "[Langille]"},
    {"224.0.23.55", "224.0.23.55", "noaaport1", "[Querubin]"},
    {"224.0.23.56", "224.0.23.56", "noaaport2", "[Querubin]"},
    {"224.0.23.57", "224.0.23.57", "noaaport3", "[Querubin]"},
    {"224.0.23.58", "224.0.23.58", "noaaport4", "[Querubin]"},
    {"224.0.23.59", "224.0.23.59", "DigacIP7", "[Niedfeldt]"},
    {"224.0.23.60", "224.0.23.60", "AtscSvcSig", "[Whitaker]"},
    {"224.0.23.61", "224.0.23.61", "SafetyNET p (potentially IGMPv1)", "[Pilz]"},
    {"224.0.23.62", "224.0.23.62", "BluemoonGamesMC", "[Mettin]"},
    {"224.0.23.63", "224.0.23.63", "iADT Discovery", "[Suhler]"},
    {"224.0.23.64", "224.0.23.80", "Moneyline", "[Petronio]"},
    {"224.0.23.81", "224.0.23.127", "Reserved (Moneyline)", "[]"},
    {"224.0.23.128", "224.0.23.157", "PHLX", "[Linthicum]"},
    {"224.0.23.158", "224.0.23.158", "VSCP", "[Tewiah]"},
    {"224.0.23.159", "224.0.23.159", "LXI-EVENT", "[Barendt]"},
    {"224.0.23.160", "224.0.23.160", "solera_lmca", "[Armstrong]"},
    {"224.0.23.161", "224.0.23.161", "VBooster", "[Pevzner]"},
    {"224.0.23.162", "224.0.23.162", "cajo discovery", "[Catherino]"},
    {"224.0.23.163", "224.0.23.163", "INTELLIDEN", "[Schenk]"},
    {"224.0.23.164", "224.0.23.164", "IceEDCP", "[O.Lewis]"},
    {"224.0.23.165", "224.0.23.165", "omasg", "[Lipford]"},
    {"224.0.23.166", "224.0.23.166", "MEDIASTREAM", "[Robberson]"},
    {"224.0.23.167", "224.0.23.167", "Systech Mcast", "[Jakubiec]"},
    {"224.0.23.168", "224.0.23.168", "tricon-system-management", "[Gabler]"},
    {"224.0.23.169", "224.0.23.169", "MNET discovery", "[Crick]"},
    {"224.0.23.170", "224.0.23.191", "Unassigned", "[]"},
    {"224.0.23.192", "224.0.23.255", "PINKOTC", "[Shulgin]"},
    {"224.0.24.0", "224.0.24.127", "AGSC UK VVs", "[Rowley]"},
    {"224.0.24.128", "224.0.24.255", "EM-MULTI", "[Sorensen]"},
    {"224.0.25.0", "224.0.28.255", "CME Market Data", "[Brakauskas]"},
    {"224.0.29.0", "224.0.30.255", "Deutsche Boerse", "[Drwal]"},
    {"224.0.31.0", "224.0.34.255", "CME Market Data", "[Brakauskas]"},
    {"224.0.35.0", "224.0.35.255", "M2S", "[Gilad]"},
    {"224.0.36.0", "224.0.38.255", "Unassigned", "[]"},
    {"224.0.39.0", "224.0.40.255", "CDAS", "[Olsen]"},
    {"224.0.41.0", "224.0.41.255", "NYSE-EURONEXT", "[Gupta]"},
    {"224.0.42.0", "224.0.45.255", "MEDIAL", "[MEDIAL]"},
    {"224.0.46.0", "224.0.50.255", "Deutsche Boerse", "[Drwal]"},
    {"224.0.51.0", "224.0.51.255", "ALCOM-IPTV", "[Erikson]"},
    {"224.0.52.0", "224.0.53.255", "NYSE-EURONEXT", "[Stevenson]"},
    {"224.0.54.0", "224.0.57.255", "Get - BCN", "[Hvidsten]"},
    {"224.0.58.0", "224.0.61.255", "NYSE-AMEX_L1_L2", "[Castillo]"},
    {"224.0.62.0", "224.0.62.255", "BATS", "[Brown]"},
    {"224.0.63.0", "224.0.63.255", "BATS Trading", "[Gorsline]"},
    {"224.0.64.0", "224.0.67.255", "NYSE Euronext", "[Gupta2]"},
    {"224.0.68.0", "224.0.69.255", "ISE", "[Albert]"},
    {"224.0.70.0", "224.0.71.255", "NYSE-AB-UTP", "[Serrano]"},
    {"224.0.72.0", "224.0.251.255", "Unassigned", "[]"},
    {"224.0.252.0", "224.0.252.255", "KPN Broadcast Services", "[Spelt]"},
    {"224.0.253.000", "224.0.253.255", "KPN Broadcast Services", "[Spelt]"},
    {"224.0.254.000", "224.0.254.255", "Intelsat IPTV", "[Elad]"},
    {"224.0.255.000", "224.0.255.255", "Intelsat IPTV", "[Elad]"},

//"224.1.0.0-224.1.255.255" (224.1/16) ST Multicast Groups
//-------------------------------------------------------

    {"224.1.0.0", "224.1.0.37", "Reserved", "[IANA]"},
    {"224.1.0.38", "224.1.0.38", "dantz", "[Zulch]"},
    {"224.1.0.39", "224.1.1.255", "Reserved", "[IANA]"},
    {"224.1.2.0", "224.1.2.255", "arca-ex", "[Andrews]"},
    {"224.1.3.0", "224.1.4.255", "NOB Cross media facilities", "[Mattheijer]"},
    {"224.1.5.0", "224.1.255.255", "Reserved", "[IANA]"},

//"224.2.0.0-224.2.255.255" (224.2/16) SDP/SAP Block
//--------------------------------------------------

    {"224.2.0.0", "224.2.127.253", "Multimedia Conference Calls", "[SC3]"},
    {"224.2.127.254", "224.2.127.254", "SAPv1 Announcements", "[SC3]"},
    {"224.2.127.255", "224.2.127.255", "SAPv0 Announcements (deprecated)", "[SC3]"},
    {"224.2.128.0", "224.2.255.255", "SAP Dynamic Assignments", "[SC3]"},

//"224.3.0.0-224.4.255.255", "(224.3/16, 224.4/16)  AD-HOC Block
//-----------------------------------------------------------

    {"224.3.0.0", "224.3.0.63", "Nasdaqmdfeeds  (re-new/March 2003)", "[Nelson]"},
    {"224.3.0.64", "224.3.255.255", "Reserved", "[IANA]"},
    {"224.4.0.0", "224.4.0.255", "London Stock Exchange", "[Whitehouse]"},
    {"224.4.1.0", "224.4.1.255", "London Stock Exchange", "[Saunders]"},
    {"224.4.2.0", "224.4.2.255", "London Stock Exchange", "[Saunders]"},
    {"224.4.3.0", "224.4.4.255", "London Stock Exchange", "[Saunders]"},
    {"224.4.5.0", "224.4.6.255", "London Stock Exchange", "[Saunders]"},
    {"224.4.7.0", "224.251.255.255", "Reserved", "[IANA]"},
    {"224.252.000.000", "224.255.255.255", "DIS Transient Groups", "[IANA][RFC2365]"},
    {"225.000.000.000", "231.255.255.255", "Reserved", "[IANA]"},


    {"232.0.0.0", "232.255.255.255", "(232/8) Source-Specific Multicast Block", "[]"},
//Registration Rules: IETF Consensus
//Addresses within the 232.0.1.0-232.255.255.255 are dynamically
//allocated by hosts when needed [RFC4607]

//Address/Range                    Description                         Reference
//-------------------------        ----------------------------------  ---------
    {"232.0.0.0", "232.0.0.0", "Reserved", "[RFC4607]"},
    {"232.0.0.1", "232.0.0.255", "Reserved for IANA allocation", "[RFC4607]"},
    {"232.0.1.0", "232.255.255.255", "Reserved for local host allocation", "[RFC4607]"},


    {"233.000.000.000", "233.255.255.255", "GLOP Block", "[RFC3180]"},
    {"234.000.000.000", "238.255.255.255", "Reserved", "[IANA]"},

    //{"239.000.000.000", "239.255.255.255", "Administratively Scoped", "[IANA][RFC2365]"},

    {"239.000.000.000", "239.063.255.255", "Reserved", "[IANA]"},
    {"239.064.000.000", "239.127.255.255", "Reserved", "[IANA]"},
    {"239.128.000.000", "239.191.255.255", "Reserved", "[IANA]"},
    {"239.192.000.000", "239.251.255.255", "Organization-Local Scope", "[Meyer][RFC2365]"},
    {"239.252.000.000", "239.252.255.255", "Site-Local Scope (reserved)", "[Meyer][RFC2365]"},
    {"239.253.000.000", "239.253.255.255", "Site-Local Scope (reserved)", "[Meyer][RFC2365]"},
    {"239.254.000.000", "239.254.255.255", "Site-Local Scope (reserved)", "[Meyer][RFC2365]"},
    {"239.255.000.000", "239.255.255.255", "Site-Local Scope", "[Meyer][RFC2365]"},
    {"239.255.002.002", "239.255.002.002", "rasadv", "[Thaler]"},
    {"239.255.002.003", "239.255.255.255", "?", "[?]"}, //vrg had to add
    {"END", "END", "END", "END"}
};

/*
There is a concept of relative addresses to be used with the scoped
multicast addresses.  These relative addresses are listed here:


Relative     Description                                       Reference
//---------    ------------------------------------------------- ---------
  0          SAP Session Announcement Protocol                 [Handley]
  1          MADCAP Protocol                                   [RFC2730]
  2          SLPv2 Discovery                                   [Guttman]
  3          MZAP                                              [Thaler]
  4          Multicast Discovery of DNS Services               [Manning]
  5          SSDP                                              [UPnP]
  6          DHCP v4                                           [Hall]
  7          AAP                                               [Hanna]
  8          MBUS                                              [RFC3259]
  9          UPnP                                              [UPnP]
  10-252     Reserved - To be assigned by the IANA
  253        Reserved
  254        RFC3692-style Experiment (*)                      [RFC4727]
  255        Reserved - To be assigned by the IANA

*/
