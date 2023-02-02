#include <stdbool.h>

int mx_atoi(const char *str);

bool mx_isdigit(int c);

bool mx_isspace(char c);

void mx_printchar(char c);

void mx_printint(int n);

int main(int argc, char *argv[]) {
    int n, f, j, g;

    for(j = 1; j < argc; j++) {
        n = mx_atoi(argv[j]);

        for(g = 31; g >= 0; g--) {
            f = n >> g;
            if(f & 1) {
                mx_printint(1);
            }
            else
                mx_printint(0);
        }
        mx_printchar('\n');
    }
    return 0;
}

