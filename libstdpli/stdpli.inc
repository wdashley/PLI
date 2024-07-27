/*----------------------------------------------------------------------------*/
/* File:       stdpli.inc                                                     */
/* Author:     W. David Ashley                                                */
/* Date:       2023-11-17                                                     */
/* Copyright:  Copyright © 2023 W. David Ashley                               */
/*             This source file is goverened by the The Open Software License  */
/*             3.0 which is included with the source code distribution.       */
/* Notes:      This PL/I include file has all the prototypes for the           */
/*             libstdpli.a library.                                           */
/* Updates:    2023-07-10 WDA. Initial release.                               */
/*----------------------------------------------------------------------------*/


/******************************************************************************/
/* String function prototypes                                                 */
/******************************************************************************/

dcl b2x        entry(char(*)) returns(char(200) varying);
dcl c2d        entry(char(1)) returns(fixed bin(7));
dcl c2x        entry(char(*)) returns(char(100) varying);
dcl changestr  entry(char(*), char(*), char(*)) returns(char(200) varying);
dcl compare    entry(char(*), char(*)) returns(fixed bin(31));
dcl countstr   entry(char(*), char(*)) returns(fixed bin(15));
dcl d2c        entry(fixed bin(7)) returns(char(1));
dcl d2x        entry(fixed bin(31)) returns(char(100) varying);
dcl delstring  entry(char(*), fixed bin(31), fixed bin(31)) returns(char(200) varying);
dcl insert     entry(char(*), char(*), fixed bin(31)) returns(char(200) varying);
dcl lastpos    entry(char(30) varying, char(200) varying, fixed bin(31)) returns(fixed bin(31));
dcl pos        entry(char(30) varying, char(200) varying, fixed bin(31)) returns(fixed bin(31));
dcl word       entry(char(*) varying, fixed bin(31)) returns(char(50) varying);
dcl wordindex  entry(char(*) varying, fixed bin(31)) returns(fixed bin(31));
dcl wordlength entry(char(*) varying, fixed bin(31)) returns(fixed bin(31));
dcl words      entry(char(*) varying) returns(fixed bin(31));
dcl strzlen    entry(char(*)) returns(fixed bin(31));
dcl toupper    entry(char(*)) returns(char(250) var);
dcl tolower    entry(char(*)) returns(char(250) var);
dcl getstrz    entry(char(*)) returns(char(200) var);


/******************************************************************************/
/* C function prototypes                                                      */
/******************************************************************************/

dcl isalnum    entry(char(1)) returns(char(1));
dcl isalpha    entry(char(1)) returns(char(1));
dcl isblank    entry(char(1)) returns(char(1));
dcl isdigit    entry(char(1)) returns(char(1));
dcl islower    entry(char(1)) returns(char(1));
dcl isprint    entry(char(1)) returns(char(1));
dcl ispunct    entry(char(1)) returns(char(1));
dcl isupper    entry(char(1)) returns(char(1));
dcl isxdigit   entry(char(1)) returns(char(1));
dcl ismathsym  entry(char(1)) returns(char(1));
dcl istab      entry(char(1)) returns(char(1));
dcl islf       entry(char(1)) returns(char(1));
dcl iscr       entry(char(1)) returns(char(1));
dcl isbreak    entry(char(1)) returns(char(1));

/******************************************************************************/
/* Date/Time function prototypes                                              */
/******************************************************************************/

dcl date_e     entry() returns(char(8));
dcl date_m     entry() returns(char(9) varying);
dcl date_n     entry() returns(char(8));
dcl date_u     entry() returns(char(8));
dcl date_w     entry() returns(char(9) varying);
dcl date_o     entry() returns(char(8));
dcl date_b     entry() returns(fixed bin(31));
dcl date_s     entry() returns(char(8));
dcl date_t     entry() returns(fixed bin(31));
dcl time_l     entry() returns(char(12));
dcl time_c     entry() returns(char(8));
dcl time_h     entry() returns(char(2));
dcl time_m     entry() returns(char(4) varying);
dcl time_s     entry() returns(char(5) varying);
dcl time_t     entry() returns(fixed bin(31));

