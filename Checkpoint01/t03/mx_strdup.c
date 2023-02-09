#include <stdlib.h>

char *mx_strdup(const char *str);

char *mx_strdup(const char *str) {
    int l = 0;
    int c = 0;

    while(str[l]) {
        l++;
    }
    if(l > 0) {
        char *s = (char *)malloc(l + 1);
        int j = 0;

        while(j < l) {
            s[j] = '\0';
            j++;
        }
        while(*str) {
            *s++ = *str++;
            c++;
        }
        s -= c;
        return s;
    }
    else 
        return NULL;
}

