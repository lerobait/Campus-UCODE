#include "header.h"

int mx_len_of_file(int file) {
    int l = 0;
    char c;

    while (read(file, &c, 1) != 0) {
        l++;
    }
    return l;
}

