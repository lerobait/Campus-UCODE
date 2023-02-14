#ifndef HEADER_H
#define HEADER_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct s_agent {
    char *name;
    int power;
    int strength;
}              t_agent;

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
void mx_sort(t_agent ***arr, int size, char factor);
char *mx_strcpy(char *dst, const char* src);
char *mx_strdup(const char *str);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strncpy(char *dst, const char *src, int len);
char *mx_strstr(const char *haystack, const char *needle);
void mx_answer(t_agent **list_of_agents, int size);
int mx_count_agents(char *cpy);
bool mx_flags(char *flag);
void mx_parse(t_agent ***list_of_agents, char *text, int size);


#endif

