/***
 * Entries and structures for Linux C Sockets API functions
 *
 * Initial version - 20/08/14 - SHM
 * 01/09/14 - SHM - Added c_recv, c_recvfrom
 *
 ***/

dcl c_socket entry(fixed bin(31), fixed bin(31), fixed bin(31))
                /* domain,        type,          protocol */
         returns(fixed bin(31)) /* fd or -1 for failure */
      ext('socket')
      options(assembler linkage(system));

dcl c_bind entry(fixed bin(31), pointer, fixed bin(31))
              /* sockfd,        sockaddr,sockaddrlen */
         returns(fixed bin(31)) /* 0 = OK, -1 for failure */
      ext('bind')
      options(assembler linkage(system));

dcl c_connect entry(fixed bin(31), pointer, fixed bin(31))
                 /* sockfd,        sockaddr,sockaddrlen */
         returns(fixed bin(31)) /* 0 = OK, -1 for failure */
      ext('connect')
      options(assembler linkage(system));

dcl c_listen entry(fixed bin(31), fixed bin(31))
                /* sockfd,        backlog */
         returns(fixed bin(31)) /* 0 = OK, -1 for failure */
      ext('listen')
      options(assembler linkage(system));

dcl c_accept entry(fixed bin(31), pointer, pointer)
                /* sockfd,        sockaddr,sockaddrlen */
         returns(fixed bin(31))
      ext('accept')
      options(assembler linkage(system));

dcl c_send entry(fixed bin(31), pointer, fixed bin(31), fixed bin(31))
              /* sockfd,        buffaddr,buffsize,      flags */
         returns(fixed bin(31))
      ext('send')
      options(assembler linkage(system));

dcl c_recv entry(fixed bin(31), pointer, fixed bin(31), fixed bin(31))
              /* sockfd,        buffaddr,buffsize,      flags */
         returns(fixed bin(31))
      ext('recv')
      options(assembler linkage(system));

dcl c_sendto entry(fixed bin(31), pointer, fixed bin(31), fixed bin(31), pointer, fixed bin(31))
                /* sockfd,        buffaddr,buffsize,      flags,         sockaddrptr, addrlen */
         returns(fixed bin(31))
      ext('sendto')
      options(assembler linkage(system));

dcl c_recvfrom entry(fixed bin(31), pointer, fixed bin(31), fixed bin(31), pointer, fixed bin(31))
                  /* sockfd,        buffaddr,buffsize,      flags,         sockaddrptr, addrlen */
         returns(fixed bin(31))
      ext('recvfrom')
      options(assembler linkage(system));

dcl c_sendmsg entry(fixed bin(31), pointer, fixed bin(31))
                 /* sockfd,        msghdrptr,flags */
         returns(fixed bin(31))
      ext('sendmsg')
      options(assembler linkage(system));

dcl c_htonl entry(fixed bin(31))
         returns(fixed bin(31))
      ext('htonl')
      options(assembler linkage(system));

dcl c_htons entry( fixed bin(15) )
         returns(fixed bin(15))
      ext('htons')
      options(assembler linkage(system));

dcl c_inet_ntoa entry(fixed bin(31))
         returns(pointer)
      ext('inet_ntoa')
      options(assembler linkage(system));

dcl c_close entry(fixed bin(31))
               /* sockfd */
         returns(fixed bin(31))
      ext('close')
      options(assembler linkage(system));

/*** structures ***/

dcl 1 sockaddr_in_struct,
     5 sin_family  fixed binary(15),
     5 sin_port    fixed binary(15),
     5 sin_addr    fixed binary(31),
     5 sin_zero    char(8);
%REPLACE SOCKADDR_IN_SZ by 16;
