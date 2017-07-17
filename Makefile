# compiler
CC=gcc

# compiler flags
CFLAGS=-Wall -c

# output flag
OUTF=-O3

#------------------------ build ------------------------

build: bin/obj/CRACKME_0.o \
       bin/obj/CRACKME_1.o \
       bin/obj/CRACKME_2.o \
       bin/obj/CRACKME_3.o
	$(CC) $(OUTF) -o bin/CRACKME_0 bin/obj/CRACKME_0.o
	$(CC) $(OUTF) -o bin/CRACKME_1 bin/obj/CRACKME_1.o
	$(CC) $(OUTF) -o bin/CRACKME_2 bin/obj/CRACKME_2.o
	$(CC) $(OUTF) -o bin/CRACKME_3 bin/obj/CRACKME_3.o

bin/obj/CRACKME_0.o:src/CRACKME_0.c
	$(CC) $(CFLAGS) $(OUTF) src/CRACKME_0.c -o bin/obj/CRACKME_0.o

bin/obj/CRACKME_1.o:src/CRACKME_1.c
	$(CC) $(CFLAGS) $(OUTF) src/CRACKME_1.c -o bin/obj/CRACKME_1.o

bin/obj/CRACKME_2.o:src/CRACKME_2.c
	$(CC) $(CFLAGS) $(OUTF) src/CRACKME_2.c -o bin/obj/CRACKME_2.o

bin/obj/CRACKME_3.o:src/CRACKME_3.c
	$(CC) $(CFLAGS) $(OUTF) src/CRACKME_3.c -o bin/obj/CRACKME_3.o

clean:
	rm -rf bin/obj/*.o