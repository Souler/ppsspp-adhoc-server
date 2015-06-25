CC = gcc
SRC_DIR = ./src/
CFLAGS = -fpack-struct -I. -I$(SRC_DIR)
OBJ = main.o user.o status.o
TARGET = AdhocServer

LIBS = -lsqlite3

%.o: $(SRC_DIR)%.c
	$(CC) -c -o $@ $< $(CFLAGS)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(LIBS) $(CFLAGS)

clean:
#	rm -rf $(TARGET) *.o *~
	rm -rf *.o *~
