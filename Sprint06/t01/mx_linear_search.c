#include <stdio.h>

int mx_strcmp(const char *s1, const char *s2);

int mx_linear_search(char **arr, const char *s);

int mx_linear_search(char **arr, const char *s) {
    if(s != NULL) {
        for(int j = 0; arr[j] != NULL; j++) {
            if(mx_strcmp(arr[j], s) == 0) {
                return j;
            }
        }
        return -1;
    }
    else 
        return -1;
}

