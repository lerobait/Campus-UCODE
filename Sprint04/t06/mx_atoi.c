#include <stdbool.h>

bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char *str);

int mx_atoi(const char *str) {
    int j = 0;
    int r = 0;

    while(str[j] != '\0') {
        if(mx_isdigit(str[j])) {
            r = r * 10 + str[j]  - '0';
        }
        if(mx_isspace(str[j])) {
            return r;   
        }
        j++;
    }
    return r;
}

