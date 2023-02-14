#include "file_to_str.h"

int mx_strlen(const char *s) {
    int c = 0;

    while(*s++) {
        c++;
    }
    return c;
}

