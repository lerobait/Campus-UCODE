#include <stdlib.h>

int *mx_copy_int_arr(const int *src, int size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size);

int *mx_del_dup_arr(int *src, int src_size, int *dst_size) {
    if(src != NULL) {
        int j;
        int g;

        for(j = 0; j < src_size; j++) {
            for(g = j + 1; g < src_size; g++) {
                if(src[j] == src[g]) {
                    int f = g;
                    
                    while(f < src_size - 1) {
                        src[f] = src[f + 1];
                        f++;
                    }
                    src_size -= 1;
                    if(src[j] == src[g]) {
                        g--;
                    }
                }
            }
        }
        *dst_size = src_size;
        int *n = (int*)malloc(*dst_size);
        n = mx_copy_int_arr(src, *dst_size);
        return n;
    }
    else
        return NULL;
}

