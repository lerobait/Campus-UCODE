NAME = way_home
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic

all: MINILIBMX

MINILIBMX:
	clang $(CFLAGS) src/*.c -o $(NAME)

clean:
	rm -f $(NAME)

uninstall:
	rm -f $(NAME)

reinstall:
	make uninstall
	make

	