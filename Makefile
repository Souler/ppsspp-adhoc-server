CC = gcc
CFLAGS = -fpack-struct -I.
OBJ = main.o user.o status.o
TARGET = AdhocSever

LIBS = -lsqlite3

%.o: %.c
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(LIBS) $(CFLAGS)

clean:
#	rm -rf $(TARGET) *.o *~
	rm -rf *.o *~
