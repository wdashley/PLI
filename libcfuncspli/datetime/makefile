# makefile for testing the is**** pl/i functions

all: test

datetime.o: datetime.pli
	plic -C "-cn(!)" datetime.pli -o datetime.o

test.o: test.pli
	plic -C "-cn(!)" test.pli -o test.o

test: test.o datetime.o
	gcc -m32 -o test test.o datetime.o \
 	   -lprf -Wl,-M -Wl,-zmuldefs > test.map



