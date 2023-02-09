#include <unistd.h>

void mx_printerr(const char *s);

void mx_printerr(const char *s) {
    int j = 0;

    while(s[j]) {
        j++;
    }
    write(2, s, j);
}

