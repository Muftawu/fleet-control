cc = clang
cflags = -Wall -Wextra -Iinclude 
ldflags = -Llib -lraylib
srcs = main.c
target = program

default: build run

build:
	$(cc) -o $(target) $(cflags) $(ldflags) $(srcs)

run:
	./$(target)

clean:
	rm -rf $(target)


