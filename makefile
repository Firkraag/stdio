CC = gcc
CFLAGS = -g -Wall -O2 -I .

LIB=libstdio.a
OBJS = fclose.o fopen.o fflush.o fillbuf.o flushbuf.o fgets.o getline.o\
	   fputs.o putc.o stdio.o fseek.o


test: test.o $(LIB)
	$(CC) $(CFLAGS) -static -o $@ $^

$(LIB): $(OBJS)
	ar rcs $(LIB) $(OBJS)

clean:
	rm -rf test $(LIB) *.o *~
