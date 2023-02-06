#include <stdlib.h>
#include <stdbool.h>

char *mx_strnew(const int size);

char *mx_strncpy(char *dst, const char *src, int len);

int mx_strlen(const char *s);

void mx_strdel(char **str);

bool mx_isspace(char c);

char *mx_strtrim(const char *str);

char *mx_strtrim(const char *str) {
    if(str != NULL) {
        int sp1 = 0;
        int sp2 = mx_strlen(str);
        int a = 0;

        while(a < mx_strlen(str)) {
            if(!mx_isspace(str[a])) {
                sp1 = a;
                break;
            }
            a++;
        }
        int b = mx_strlen(str) - 1;

        while(b >= sp1) {
            if(!mx_isspace(str[b])) {
                sp2 = b;
                break;
            }
            b--;
        }
        int j = 0;
        int c = sp1;
        int l = sp2 - sp1 + 1;
        char *s = mx_strnew(l + 1);

        while(c <= sp2) {
            s[j] = str[c];
            c++;
            j++;
        }
        return s;
    }
    else 
        return NULL;
}

