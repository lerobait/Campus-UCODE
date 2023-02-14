#ifndef HEADER_H
#define HEADER_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int mx_strlen(const char *);
void mx_printerr(const char *);
void mx_printstr(const char *);
int mx_len_of_file(int);

#endif
