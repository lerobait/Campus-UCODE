#include "file_to_str.h"

char *mx_strdup(const char *str) {
    int l = mx_strlen(str);
    char *s1 = mx_strnew(l);
    char *s2 = mx_strcpy(s1, str);
    return s2;
}

