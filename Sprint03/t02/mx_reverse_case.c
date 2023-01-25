#include <stdbool.h>

int mx_tolower(int c);

int mx_toupper(int c);

bool mx_islower(int c);

bool mx_isupper(int c);

void mx_reverse_case(char *s);

void mx_reverse_case(char *s) {
    int j = 0;
    char t = s[j];
    while (t != '\0') {
        if (mx_islower(s[j]) == true) 
            s[j] =  mx_toupper(t);
        else if (mx_isupper(s[j]) == true) 
            s[j] = mx_tolower(t);
        j++;
        t = s[j];
    }
}
