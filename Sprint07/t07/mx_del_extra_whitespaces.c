#include <stdbool.h>
#include <stdlib.h>

bool mx_isspace(char c);

void mx_strdel(char **str);

int mx_strlen(const char *s);

char *mx_strncpy(char *dst, const char *src, int len);

char *mx_strnew(const int size);

char *mx_strtrim(const char *str);

char *mx_del_extra_whitespaces(const char *str);

char *mx_del_extra_whitespaces(const char *str) {
    if(str != NULL) {
        int j, g;
        char t;
        char *s = mx_strtrim(str);

        for(j = 1; j < mx_strlen(s) - 1; j++) {
            if(mx_isspace(s[j + 1]) && mx_isspace(s[j])) {
                while(mx_isspace(s[j + 1])) {
                    t = s[j + 1];

                    for(g = j; g < mx_strlen(s) - 1; g++) {
                        t = s[g];
                        s[g] = s[g + 1];
                        s[g + 1] = t;
                    }
                    s[g] = t;
                    s = mx_strtrim(s);
                }
            }
            else {
                if(mx_isspace(s[j] != ' ' && s[j])) {
                    s[j] = ' ';
                }
            }
        }
        char *r = mx_strtrim(s);
        free(s);
        return r;
    }
    else 
        return NULL;
}

