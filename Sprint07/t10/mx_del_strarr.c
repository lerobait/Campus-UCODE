#include <stdlib.h>

void mx_strdel(char **str);

void mx_del_strarr(char ***arr);

void mx_del_strarr(char ***arr) {
    int j = 0;

    while((*arr)[j] != NULL) {
        mx_strdel(&((*arr)[j]));
        j++;
    }
    free(*arr);
    *arr = NULL;
}

