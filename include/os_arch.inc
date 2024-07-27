/*----------------------------------------------------------------------------*/
/*                                                                            */
/* File:       os_arch.inc                                                    */
/*                                                                            */
/* Author:     W. David Ashley                                                */
/*                                                                            */
/* Date:       2024-06-18                                                     */
/*                                                                            */
/* Copyright:  Copyright © 2023 W. David Ashley                               */
/*             This source file is goverened by the The Open Software License  */
/*             3.0 which is included with the source code distribution.       */
/*                                                                            */
/* Notes:      This PL/I source file defines the architecture (32 or 64 bit)    */
/*             to be used for compiling called C functions.                   */
/*                                                                            */
/* Updates:    2024-06-18 WDA. Initial release.                               */
/*                                                                            */
/*----------------------------------------------------------------------------*/


/* the following needs to be included at th e top od all PL/I main programs! */
%declare os_arch char;
% os_arch = 'i386';
/* %os_arch = 'x86_64'; */
%activate os_arch;

