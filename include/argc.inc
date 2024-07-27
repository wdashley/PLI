/********************************************************************/
/*                                                                  */
/*      Module:        argc_s Argc/Argv/Envp                        */
/*      Version:       1.0                                          */
/*      Date:          Aug, 2016                                    */
/*      Author:        Peter Flass                                  */
/*                                                                  */
/*      Function:      Makes argc etc. available to PL/I program.   */
/*                                                                  */
/*      Dependencies:  Unix-like startup                            */
/*                                                                  */
/*      Created by:   _pli_Init at startup                          */
/*                                                                  */
/*      To Do:                                                      */
/*                                                                  */
/*      Modifications:                                               */
/*                                                                  */
/********************************************************************/

 dcl   1 argc_s              ext( '_pli_argc' ),
         5 argc              fixed bin(31),       /* Arg count        */
         5 ppargv            ptr,                /* **argv           */
         5 ppenv             ptr;                /* **envp           */

 dcl     arg_addr       (0:1)ptr        based;   /* *argv[]          */

