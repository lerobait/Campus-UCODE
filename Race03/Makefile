NAME = matrix_rain

SRCS = src/*.c
INC = inc/*.h

CC = clang
CFLAGS = -std=c11 -Wall -Wextra -Werror -Wpedantic -lncurses

RM = rm -rf

all: install clean

install:
	@$(CC) $(CFLAGS) -o $(NAME) $(SRCS) -I inc

clean:
	@$(RM) inc/*.gch

uninstall: clean
	@$(RM) $(NAME)

reinstall: uninstall all

	