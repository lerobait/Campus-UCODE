#include "header.h"

int mx_strlen(const char *s) {
    unsigned long j = 0;

    while(s[j] != '\0') {
        j++;
    }
    return j;
}

