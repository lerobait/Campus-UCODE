#include "header.h"

void mx_str_reverse(char *s) {
    int l = mx_strlen(s);
    int j = 0;
    while(j < l / 2) {
        mx_swap_char(&s[j], &s[l-1]);
        j++;
        l--;
    }
}
