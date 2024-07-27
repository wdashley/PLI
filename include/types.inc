/* bits/types.h -- definitions of __*_t types underlying *_t types.
   Copyright (C) 2002-2024 Free Software Foundation, Inc.
   This file is part of the GNU C Library.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library; if not, see
   <https://www.gnu.org/licenses/>.  */

/* Convenience types.  */
%replace __u_char_t   by 'unsigned fixed bin(8)';
%replace __u_short_t  by 'unsigned fixed bin(16)';
%replace __u_int_t    by 'unsigned fixed bin(32)';
%replace __u_long_t   by 'unsigned fixed bin(32)';

/* Fixed-size types, underlying types depend on word size and compiler.  */
%replace __int_8_t    by 'fixed bin(7);
%replace __uint_8_t   by 'unsigned fixed bin(8);
%replace __int_16_t   by 'fixed bin(15);
%replace __uint_16_t  by 'unsigned fixed bin(16);
%replace __int_32_t   by 'fixed bin(31);
%replace __uint_32_t  by 'unsigned fixed bin(32);
%replace __int_64_t   by 'fixed bin(63);
%replace __uint_64_t  by 'insigned fixed bin(64);
%replace __quad_64_t  by 'fixed bin(63);
%replace __uquad_64_t by 'insigned fixed bin(64);

