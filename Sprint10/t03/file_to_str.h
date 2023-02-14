#ifndef FILE_TO_STR_H
#define FILE_TO_STR_H

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

char *mx_strcat(char *, const char *);
char *mx_strcpy(char *, const char*);
char *mx_strdup(const char *);
char *mx_strjoin(char const *, char const *);
int mx_strlen(const char *);
char *mx_strnew(const int);
char *mx_file_to_str(const char *filename);

#endif

