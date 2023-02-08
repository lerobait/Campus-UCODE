#include "duplicate.h"

t_intarr *mx_del_dup_arr(t_intarr *src) {
    if(src != NULL) {
        int j;
        int g;

        for(j = 0; j < src->size; j++) {
            for(g = j + 1; g < src->size; g++) {
                if(src->arr[j] == src->arr[g]) {
                    int f = g;
                    
                    while(f < src->size - 1) {
                        src->arr[f] = src->arr[f + 1];
                        f++;
                    }
                    src->size -= 1;
                    if(src->arr[j] == src->arr[g]) {
                        g--;
                    }
                }
            }
        }
        t_intarr dst;
        dst.size = src->size;
        dst.arr = (int*)malloc(dst.size * 4);
        dst.arr = mx_copy_int_arr(src->arr, dst.size);
        t_intarr *p = &dst;
        src = NULL;
        return *p;
    }
    else
        return NULL;
}

