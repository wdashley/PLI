/*----------------------------------------------------------------------------*/
/*                                                                            */
/* File:       sysinfo.inc                                                    */
/*                                                                            */
/* Author:     W. David Ashley                                                */
/*                                                                            */
/* Date:       2024-06-24                                                     */
/*                                                                            */
/* Copyright:  Copyright © 2023 W. David Ashley                               */
/*             This source file is goverened by the The Open Software License  */
/*             3.0 which is included with the source code distribution.       */
/*                                                                            */
/* Notes:      This PL/I source file defines the C sysinfo structure.           */
/*                                                                            */
/* Updates:    2024-06-24 WDA. Initial release.                               */
/*                                                                            */
/*----------------------------------------------------------------------------*/


dcl 01 sysinfo_32 controlled,
    05 uptime fixed bin(31),               /* Seconds since boot */
    05 loads(3) unsigned fixed bin(32),    /* 1, 5, and 15 minute load averages */
    05 totalram unsigned fixed bin(32),    /* Total usable main memory size */
    05 freeram unsigned fixed bin(32),     /* Available memory size */
    05 sharedram unsigned fixed bin(32),   /* Amount of shared memory */
    05 bufferram unsigned fixed bin(32),    /* Memory used by buffers */
    05 totalswap unsigned fixed bin(32),   /* Total swap space size */
    05 freeswap unsigned fixed bin(32),    /* Swap space still available */
    05 procs unsigned fixed bin(16),       /* Number of current processes */
    05 pad unsigned fixed bin(16),
    05 totalhigh unsigned fixed bin(32),   /* Total high memory size */
    05 freehigh unsigned fixed bin(32),    /* Available high memory size */
    05 mem_unit unsigned fixed bin(32),    /* Memory unit size in bytes */
    05 f char(8);                         /* Padding to 64 bytes */

