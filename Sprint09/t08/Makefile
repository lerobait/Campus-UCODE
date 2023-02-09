CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic
FUNCTIONS = src/*.c
OBJECTS = obj/*.o

all: clean MINILIBMX

MINILIBMX:
	mkdir obj
	cd obj && $(CC) -c ../$(FUNCTIONS)
	ar rcs minilibmx.a $(OBJECTS)
	$(CC) $(CFLAGS) -o calc minilibmx.a

clean: 
	rm -rf minilibmx.a obj

uninstall:
	rm -rf minilibmx.a obj

reinstall: all
