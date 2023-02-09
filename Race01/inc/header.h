#ifndef HEADER_H
#define HEADER_H

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

int mx_atoi(const char *str);
bool mx_isdigit(int c);
bool mx_isspace(char c);
double mx_pow(double n, unsigned int pow);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(int n);
void mx_printstr(const char *s);
void mx_str_reverse(char *s);
char *mx_strcpy(char *dst, const char* src);
char *mx_strdup(const char *str);
int mx_strlen(const char *s);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str);
void mx_swap_char(char *s1, char *s2);

#endif

