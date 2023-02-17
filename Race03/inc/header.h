#ifndef HEADER
#define HEADER

#include <stdbool.h>
#include <ncurses.h>
#include <string.h>
#include <unistd.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

void mx_preview();
unsigned int mx_strlen(const char*);
void mx_initcolor();
void mx_matrix_rain();
void mx_printerr();

#endif
