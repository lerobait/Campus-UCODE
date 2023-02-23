#include <stdlib.h>

char *mx_strnew(const int size);

char *mx_strnew(const int size) {
    if(size > 1) {
        char *s = (char *)malloc(size + 1);
        int j = 0;

        while(j < size) {
            s[j] = '\0';
            j++;
        }
        return s; 
    }
    else
        return NULL;
}

