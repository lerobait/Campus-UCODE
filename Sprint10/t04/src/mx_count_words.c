#include "header.h"

int mx_count_words(const char *str) {
    int c = 0;
    char l = '\0';
    int j = 0;

    while(j < mx_strlen(str)) {
        if(mx_isspace(str[j])) {
            if(!mx_isspace(l)) {
                c++;
            }
            l = str[j];
        }
        j++;
    }
    return c;
}

