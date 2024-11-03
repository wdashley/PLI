# makefile for mainpgm

ALL: test_wordsbook


wordsbook.o: wordsbook.pli
	plic -C wordsbook.pli -o wordsbook.o

test_wordsbook.o: test_wordsbook.pli
	plic -C test_wordsbook.pli -o test_wordsbook.o

test_wordsbook: test_wordsbook.o wordsbook.o
	ld -z muldefs -Bstatic -M \
	 -o test_wordsbook --oformat=elf32-i386 -melf_i386 -e main test_wordsbook.o wordsbook.o\
	 --start-group /usr/local/lib/libprf.a --end-group > test_wordsbook.map
