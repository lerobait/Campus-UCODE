#include "../inc/header.h"

int mx_atoi(const char *str) {
    int f = 1;
    int c = 0;
    int r = 0;
    int j = 0;

    while(str[j] != '\0') {
        if(mx_isdigit(str[j])) {
            r *= 10;
            r += str[j] - 48;
        }
        else if(f != -1 && str[j] == '-') {
            ++c;
            f = -1;
        }
        else if(c < 1 && str[j] == '+') {
            ++c;
        }
        else if(c > 1 || (!mx_isspace(str[j]) && !mx_isdigit(str[j]))) {
            return r * f;
        }
        j++;
    }
    return r * f;
}

