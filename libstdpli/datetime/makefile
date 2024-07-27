# makefile for testing the is**** pl/i functions

all: test

#datetime.dek: datetime.pli
#	ispp -li "-cn(!)" -I -i/home/dashley/ad/pli/include datetime.pli -o datetime.dek

datetime.o: datetime.pli
	plic -C "-cn(!)" -i/home/dashley/ad/pli/include datetime.pli -o datetime.o

test.o: test.pli
	plic -C "-cn(!)" test.pli -o test.o

test: test.o datetime.o
	ld -z muldefs -Bstatic -M \
	 -o test --oformat=elf32-i386 -melf_i386 -e main test.o datetime.o \
	 --start-group /usr/local/lib/libprf.a --end-group > test.map

