#include "header.h"

char *mx_file_to_str(const char *filename) {
    char s[1];
    int c = 0;
    int f = open(filename, O_RDONLY);
    int u = read(f, s, sizeof(s));
    
    while(u > 0) {
        if(s[0] == '.' || s[0] == '#' || s[0] == '\n') {
            ++c;
        }
        u = read(f, s, sizeof(s));
    }
    close(f);

    f = open(filename, O_RDONLY);
    char *r = (char *)malloc(sizeof(char) * c + 1);
    u = read(f, s, 1);
    int j = 0;

    while(u > 0 && j < c) {
        if(s[0] == '.' || s[0] == '#' || s[0] == '\n') {
            r[j] = s[0];
            ++j;
        }
        u = read(f, s, 1);
        --j;
        j++;
    }
    r[c] = '\0';
    close(f);
    return r;
}

