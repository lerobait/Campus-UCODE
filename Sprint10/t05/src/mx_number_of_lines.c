#include "header.h"

int mx_number_of_lines(const char *str) {
    int c = 0;
    int j = 0;

    while(j < mx_strlen(str)) {
        if(str[j] == '\n') {
            c++;
        }
        j++;
    }
    return c;
}

