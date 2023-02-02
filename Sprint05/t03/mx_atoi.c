#include <stdbool.h>

bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char *str);

int mx_atoi(const char *str) {
    int r = 0; 
    int s = 0; 
    int j = -1;
    while(str[++j]) {
        if(str[j] == '-' && s == 0) {
            s = -1;
            j++;
        }
        else if(str[j] == '+' && s == 0) {
            s = 1;
            continue;
        }
        if(mx_isdigit(str[j])) {
            r = r * 10 + (str[j] - '0');
        }
        else {
            r = 0;
            break;
        }
    }
    if(s == -1) {
        r *= -1;
    }
    return r;
}

