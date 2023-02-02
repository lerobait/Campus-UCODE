#include <stdbool.h>

bool mx_isdigit(int c);

bool mx_isspace(char c);

int mx_atoi(const char *str);

void mx_printchar(char c);

void mx_printint(int n);

int main(int argc, char *argv[]) {
    int s = 0, j = 1;

    while(j <= argc -1) {
        s += mx_atoi(argv[j]);
        j++;
    }
    mx_printint(s);
    mx_printchar('\n');
}

