# makefile for testing pl/i string functions

ALL: strfuncs.o test
all: ALL

strfuncs.o: strfuncs.pli
	plic -C "-cn(!)" strfuncs.pli -o strfuncs.o

test.o: test.pli
	plic -C "-cn(!)" test.pli -o test.o

test: test.o strfuncs.o
	ld -z muldefs -Bstatic -M \
	 -o test --oformat=elf32-i386 -melf_i386 -e main test.o strfuncs.o \
	 --start-group /usr/local/lib/libprf.a --end-group > test.map

