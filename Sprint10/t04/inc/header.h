#ifndef HEADER_H
#define HEADER_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

int mx_count_words(const char *);
char *mx_file_to_str(const char *);
bool mx_isspace(char);
int mx_len_of_file(int);
void mx_printchar(char);
void mx_printerr(const char *);
void mx_printint(int);
void mx_printstr(const char *);
int mx_strcmp(const char *, const char *);
int mx_strlen(const char *);
char *mx_strnew(const int);
int mx_number_of_lines(const char *);

#endif

