#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_copy_int_arr(const int *src, int size) {
    if(src != NULL) {
        int *r = malloc(size * 4);
        int j = 0;

        while(j < size) {
            r[j] = src[j];
            j++;
        }
        return r;
    }
    else
        return NULL;    
}

