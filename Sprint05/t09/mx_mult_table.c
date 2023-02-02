#include <stdbool.h>

int mx_atoi(const char *str);

bool mx_isdigit(int c);

bool mx_isspace(char c);

void mx_printchar(char c);

void mx_printint(int n);

int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
    int a1 = mx_atoi(argv[1]);
    int a2 = mx_atoi(argv[2]);
    int t, j, g;

    if(argc != 3) {
        return -1;
    }
    else if((1 > a1 || 9 < a1) || (1 > a2 || 9 < a2)) {
        return -1;
    }
    else if(a1 > a2) {
        t = a1;
        a1 = a2;
        a2 = t;
    }
    for(j = a1; j <= a2; j++) {
        for(g = a1; g <= a2; g++) {
            mx_printint(j * g);
            if(g != a2) {
                mx_printchar('\t');
            }
        }
        mx_printchar('\n');
    }
    return 0;
}

