#include "../inc/header.h"

void mx_strdel(char **str) {
    int j = 0;

    while(str[j]) {
        free(str[j]);
        str[j] = NULL;
        j++;
    }
}

