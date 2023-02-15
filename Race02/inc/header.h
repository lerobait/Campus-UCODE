#ifndef HEADER_H
#define HEADER_H

#include <stdbool.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>

int mx_atoi(const char *str);
char *mx_file_to_str(const char *filename);
bool mx_isdigit(int c);
bool mx_isspace(char c);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strcmp(const char *s1, const char *s2);
void mx_strdel(char **str);
int mx_strlen(const char *s);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);

#endif
