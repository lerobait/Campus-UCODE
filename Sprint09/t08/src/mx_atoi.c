#include <stdbool.h>

bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char *str);

int mx_atoi(const char *str) {
    int m = 0;
    int r = 0;

    for(int j = 0; str[j]; j++) {
        for(int g = 48; g <= 57; g++) {
            if((int)str[j] == 45) {
                m = 1;
                continue;
            }
            else if(mx_isspace(str[j])) {
                continue;
            }
            else if(!mx_isdigit(str[j])) {
                return -351351351;
            }
            else if((int)str[j] == g) {
                r += (g - 48);
                if(str[j + 1]) {
                    r = r * 10;
                }
            }
        }
    }
    if(m == 1) {
        r *= -1;
    }
    return r;
}

