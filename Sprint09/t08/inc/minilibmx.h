#ifndef MINILIBMX_H
#define MINILIBMX_H

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

int mx_atoi(const char *str);

bool mx_isdigit(int c);

bool mx_isspace(char c);

void mx_printchar(char c);

void mx_printint(int n);

int mx_strcmp(const char *s1, const char *s2);

void mx_printstr(const char *s);

char *mx_strcpy(char *dst, const char* src);

char *mx_strdup(const char *str);

int mx_strlen(const char *s);

char *mx_strnew(const int size);

typedef enum e_operation operation;
typedef enum e_error error;

#endif

