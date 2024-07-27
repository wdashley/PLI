/*----------------------------------------------------------------------------*/
/* File:       cfincspli.inc                                                   */
/* Author:     W. David Ashley                                                */
/* Date:       2024-07-14                                                     */
/* Copyright:  Copyright © 2023 W. David Ashley                               */
/*             This source file is goverened by the The Open Software License  */
/*             3.0 which is included with the source code distribution.       */
/* Notes:      This PL/I include file has all the prototypes for the           */
/*             libcfuncspli.a library.                                        */
/* Updates:    2023-07-10 WDA. Initial release.                               */
/*----------------------------------------------------------------------------*/


/******************************************************************************/
/******************************************************************************/
/* The following functions must be linked via GCC as they use the C library!! */
/******************************************************************************/
/******************************************************************************/

/******************************************************************************/
/* Date/Time function prototypes                                              */
/******************************************************************************/

dcl c_isodate  entry() returns(char(23));
dcl c_date_e   entry() returns(char(8));
dcl c_date_m   entry() returns(char(9) varying);
dcl c_date_n   entry() returns(char(10);
dcl c_date_u   entry() returns(char(8);
dcl c_date_w   entry() returns(char(9) varying;
dcl c_date_o   entry() returns(char(8);
dcl c_date_s   entry() returns(char(8));
dcl c_time_l   entry() returns(char(12));
dcl c_time_c   entry() returns(char(8));
dcl c_time_h   entry() returns(char(2));
dcl c_time_m   entry() returns(char(4) varying);
dcl c_time_s   entry() returns(char(5) varying);

/******************************************************************************/
/* File system function prototypes                                            */
/******************************************************************************/

dcl c_chdir entry(char(*)) returns(fixed bin(31));
dcl c_getuid entry() returns(fixed bin(31));
dcl c_rmdir entry(char(*)) returns(fixed bin(31));
dcl c_getgid entry()(fixed bin(31));
dcl c_geteuid entry() returns(fixed bin(31));
dcl c_getegid entry() returns(fixed bin(31));
dcl c_symlink entry(char(*), char(*)) returns(fixed bin(31));
dcl c_getcwd entry() returns(char(4096) var);
dcl c_mkdir entry(char(*), unsigned fixed bin(32)) returne(fixed bin(31));;
dcl c_chmod entry(char(*), unsigned fixed bin(31)) returns(fixed bin(31));
dcl c_stat entry(char(*), pointer) returns(fixed bin(31));
dcl c_sysinfo entry(pointer) returns(fixed bin(31));
dcl c_link entry(char(*), char(*)) returns(fixed bin(31));
dcl c_unlink entry(char(*)) returns(fixed bin(31));
dcl c_opendir entry(char(*)) returns(pointer);
dcl c_readdir64 entry(pointer) returns(char(256) var);

