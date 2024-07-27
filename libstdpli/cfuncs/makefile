# makefile for testing the is**** pl/i functions

ALL: isvalue.o test
all: ALL

isvalue.o: isvalue.pli
	plic -C "-cn(^)" isvalue.pli -o isvalue.o

test.o: test.pli
	plic -C "-cn(!)" test.pli -o test.o

test: test.o isvalue.o
	ld -z muldefs -Bstatic -M \
	 -o test --oformat=elf32-i386 -melf_i386 -e main test.o isvalue.o \
	 --start-group /usr/local/lib/libprf.a --end-group > test.map

