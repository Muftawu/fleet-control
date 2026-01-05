CC = clang
CFLAGS = -Wall -Wextra -Iinclude 
LDFLAGS = -Llib -lraylib
SRCS = main.c include/*.c
TARGET = program

default: build run

build:
	$(CC) -o $(TARGET) $(LDFLAGS) $(SRCS) $(CFLAGS)

run:
	./$(TARGET)

clean:
	rm -rf $(TARGET)


