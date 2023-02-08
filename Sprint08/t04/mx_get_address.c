#include "get_address.h"

char *mx_get_address(void *p) {
    int l;
    unsigned long a;
    char* s_a;
    char* r;

    a = (unsigned long)&p;
    s_a = mx_nbr_to_hex(a);
    l = mx_strlen(s_a);
    r = (char*)malloc(l + 2);
    *r++ = '0';
    *r++ = 'x';
    mx_strcpy(r, s_a);
    free(s_a);

    return r -= 2;
}

