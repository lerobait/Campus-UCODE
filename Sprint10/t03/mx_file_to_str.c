#include "file_to_str.h"

char *mx_file_to_str(const char *filename) {
    if(!filename) {
        return NULL;
    }
    int f = open(filename, O_RDONLY);

    if(f < 0) {
        return NULL;
    }
    int l = 0;
    char c;

    while(read(f, &c, 1) != 0) {
        l++;
    }
    close(f);

    f = open(filename, O_RDONLY);
    char *t = mx_strnew(l);

    read(f, t, l);

    close(f);
    return t;
}

