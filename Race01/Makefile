CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: part_of_the_matrix

part_of_the_matrix:
	$(CC) $(CFLAGS) -Iinc -o part_of_the_matrix src/*.c

clean: 
	rm -rf part_of_the_matrix

uninstall:
	rm -rf part_of_the_matrix

reinstall:
	make uninstall
	make

	