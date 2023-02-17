NAME = way_home
CFLAGS = -Wall -Wextra -Werror -Wpedantic

all: MINILIBMX

MINILIBMX:
	clang-14 $(CFLAGS) src/*.c -o $(NAME)

clean:
	rm -f $(NAME)

uninstall:
	rm -f $(NAME)

reinstall:
	make uninstall
	make

	