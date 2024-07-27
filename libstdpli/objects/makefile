# makefile for testing the is**** pl/i functions

all: skeleton.o

skeleton.o: skeleton.pli
	plic -C "-cn(!)" -i/home/dashley/ad/pli/include skeleton.pli -o skeleton.o

#test.o: test.pli
#	plic -C "-cn(!)" test.pli -o test.o

#test: test.o datetime.o
#	ld -z muldefs -Bstatic -M \
#	 -o test --oformat=elf32-i386 -melf_i386 -e main test.o datetime.o \
#	 --start-group /usr/local/lib/libprf.a --end-group > test.map

