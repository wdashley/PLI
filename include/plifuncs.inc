/*----------------------------------------------------------------------------*/
/*                                                                            */
/* File:       plifuncs.inc                                                   */
/*                                                                            */
/* Author:     W. David Ashley                                                */
/*                                                                            */
/* Date:       2024-06-25                                                     */
/*                                                                            */
/* Copyright:  Copyright © 2023 W. David Ashley                               */
/*             This source file is goverened by the The Open Software License  */
/*             3.0 which is included with the source code distribution.       */
/*                                                                            */
/* Notes:      This PL/I source file defines additional functions available to  */
/*             the programmer.                                                */
/*                                                                            */
/* Updates:    2024-06-25 WDA. Initial release.                               */
/*                                                                            */
/*----------------------------------------------------------------------------*/


DECLARE gmtime        ENTRY(PTR, PTR) RETURNS(PTR) EXT('_pli_GMTime');
DECLARE mktime        ENTRY(PTR) RETURNS(FIXED BIN(31)) EXT('_pli_MKTime');
DECLARE osdelete      ENTRY(CHAR(*) VAR) RETURNS(FIXED BIN(31))
                      EXT('_pli_OSDelete');
DECLARE osgetenv      ENTRY(PTR) RETURNS(PTR) OPTIONS(LINKAGE(SYSTEM))
                      EXT('_pli_OSGetEnv');
DECLARE osgetprocinfo ENTRY(PTR) RETURNS(FIXED BIN(31)) OPTIONS(LINKAGE(SYSTEM))
                      EXT('_pli_OSGetProcInfo');
DECLARE kill_thread   ENTRY(FIXED BINARY(31)) OPTIONS(LINKAGE(SYSTEM))
                      EXT('_pli_OSKillThread');
DECLARE syscall       ENTRY RETURNS(FIXED BINARY(31)) EXT('_pli_Syscall');
DECLARE sysid         ENTRY RETURNS(PTR) OPTIONS(LINKAGE(SYSTEM))
                      EXT('_pli_Sysid');
DECLARE tempnam       ENTRY(CHAR(*) VAR, CHAR(*) VAR, CHAR(*) VAR)
                      RETURNS(CHAR(260) VARYING) EXT('_pli_Tempnam');
DECLARE name          ENTRY(PTR, FIXED BIN(31)) OPTIONS(LINKAGE(SYSTEM))
                      EXT('_pli_mutex_init');
DECLARE name          ENTRY(PTR) OPTIONS(LINKAGE(SYSTEM))
                      EXT('_pli_mutex_destroy');
DECLARE name          ENTRY(PTR) OPTIONS(LINKAGE(SYSTEM)) EXT('_pli_mutex_wait');
DECLARE name          ENTRY(PTR, PTR) OPTIONS(LINKAGE(SYSTEM))
                      EXT('_pli_mutex_timedwait');
DECLARE name          ENTRY(PTR) OPTIONS(LINKAGE(SYSTEM)) EXT('_pli_mutex_post');
DECLARE hexdump       ENTRY(PTR, FIXED BIN(31), CHAR(80) VAR) EXT('_pli_Hexdump');

