/*----------------------------------------------------------------------------*/
/* File:       stat_32.inc                                                    */
/* Author:     W. David Ashley                                                */
/* Date:       2024-06-26                                                     */
/* Copyright:  Copyright © 2023 W. David Ashley                               */
/*             This source file is goverened by the The Open Software License  */
/*             3.0 which is included with the source code distribution.       */
/* Notes:      This PL/I source file defines the architecture (32 or 64 bit)    */
/*             to be used for compiling called C functions.                   */
/* Updates:    2024-06-26 WDA. Initial release.                               */
/*----------------------------------------------------------------------------*/


dcl 01 stat64 controlled,
    05 st_dev char(8),                       /* ID of device containing file */
    05 pad0 char(4),
    05 st_ino unsigned fixed bin(32),         /* Inode number */
    05 st_mode unsigned fixed bin(32),        /* File type and mode */
    05 st_nlink unsigned fixed bin(32),       /* Number of hard links */
    05 st_uid unsigned fixed bin(32),         /* User ID of owner */
    05 st_gid unsigned fixed bin(32),         /* Group ID of owner */
    05 st_rdev char(8),                      /* Device ID (if special file) */
    05 pad3 char(4),
    05 st_size fixed bin(31),                 /* Size in blocks */
    05 st_blksize unsigned fixed bin(32),     /* Block size for filesystem I/O */
    05 st_blocks char(8),                    /* Block size for filesystem I/O */
    05 st_atime unsigned fixed bin(32),       /* Time of last access seconds */
    05 st_atime_nsec unsigned fixed bin(32),  /* Time of last access nanoseconds */
    05 st_mtime unsigned fixed bin(32),       /* Time of last modification seconds */
    05 st_mtime_nsec unsigned fixed bin(32),  /* Time of last modification nanoseconds */
    05 st_ctime unsigned fixed bin(32),       /* Time of creation seconds */
    05 st_ctime_nsec unsigned fixed bin(32),  /* Time of creation nanoseconds */
    05 st_pad4 char(8);

