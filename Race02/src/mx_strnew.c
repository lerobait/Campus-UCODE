#include "../inc/header.h"

char *mx_strnew(const int size) {
    char *s = malloc(size + 1);
    if(s == NULL) {
        return s;
    }
    int j = 0;

    while(j < size) {
        s[j] = '\0';
        j++;
    }
    return s; 
}

