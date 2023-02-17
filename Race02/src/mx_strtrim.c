#include "../inc/header.h"

char *mx_strtrim(const char *str) {
    int l = mx_strlen(str);
    int st = 0;
    int lt = 0;
    int j = 0;
    char *r;

    if(!str) {
        return NULL;
    }
    while(mx_isspace(str[j])) {
        st++;
        j++;
    }
    int g = l - 1;

    while(mx_isspace(str[g])) {
        lt++;
        --g;
    }
    r = mx_strnew(l - st - lt);
    mx_strncpy(r, str + st , l - st - lt);
    return r;
}

