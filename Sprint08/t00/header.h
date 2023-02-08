#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>

#include <stdbool.h>

#include <unistd.h>

void mx_printchar(char);

void mx_only_printable(void);

void mx_hexadecimal(void);

int mx_strlen(const char *);

void mx_printstr(const char *);

bool mx_is_odd(int);

bool mx_isalpha(int);

bool mx_isdigit(int);

bool mx_isspace(char);

bool mx_islower(int);

bool mx_isupper(int);

int mx_tolower(int);

int mx_toupper(int);

bool mx_multiple_number(int, int);

int mx_max(int, int, int);

int mx_mid(int, int, int);

int mx_sum_digits(int);

void mx_printchar(char);

void mx_swap_char(char *, char *);

int mx_strcmp(const char *, const char *);

char *mx_strcpy(char *, const char*);

double mx_pow(double, unsigned int);

bool mx_is_prime(int);

void mx_print_arr_int(const int *, int);

int mx_sqrt(int);

char *mx_strchr(const char *, int);

char *mx_strncpy(char *, const char *, int);

char *mx_strcat(char *, const char *);

void mx_sort_arr_int(int *, int);

int mx_atoi(const char *);

int mx_strncmp(const char *, const char *, int);

char *mx_strstr(const char *, const char *);

int mx_factorial_iter(int);

int mx_factorial_rec(int);

double mx_pow_rec(double, unsigned int);

int mx_gcd(int, int);

int mx_lcm(int, int);

int mx_linear_search(char **, const char *);

int mx_bubble_sort(char **, int);

int mx_binary_search(char **, int, const char *, int *);

int mx_insertion_sort(char **, int);

int mx_selection_sort(char **, int);

void mx_arr_rotate(int *, int, int);

char *mx_strnew(const int );

char *mx_strdup(const char *);

char *mx_strjoin(char const *, char const *);

int *mx_copy_int_arr(const int *, int );

void mx_strdel(char **);

char *mx_strtrim(const char *);

char **mx_strsplit(char const *, char);

#endif

