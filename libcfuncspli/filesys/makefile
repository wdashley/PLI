
# makefile for testing pl/i string functions

all: filesys.o test

filesys.o: filesys.pli
	plic -C "-cn(!)" -i/home/dashley/ad/pli/include filesys.pli -o filesys.o

test.o: test.pli
	plic -C "-cn(!)" -i/home/dashley/ad/pli/include test.pli -o test.o

test: test.o filesys.o
	gcc -m32 -o test test.o filesys.o \
 	   -lprf -Wl,-M -Wl,-zmuldefs > test.map

