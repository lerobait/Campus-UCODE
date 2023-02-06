#include <stdlib.h>

int mx_count_words(const char *str, char delimiter);

void mx_strdel(char **str);

char *mx_strncpy(char *dst, const char *src, int len);

char *mx_strnew(const int size);

char **mx_strsplit(char const *s, char c);

char **mx_strsplit(char const *s, char c) {
    int j;
    int g = 0;
    int cw = mx_count_words(s, c);
    char **r = (char**)malloc(8 * cw);

    for(j = 0; j < cw; j++) {
        int l = 0;
        int st = 0;
        
        while(s[g]) {
            if(s[g] != c) {
                l += 1;
                if(st == 0) {
                    st = g;
                }
            }
            else if(s[g] == c && l) {
                break;
            }
            g++;
        }
        char* n = mx_strnew(l);
        int f = 0;
        int u = st;

        while(u < g) {
            n[f] = s[u];
            f++;
            u++;
        }
        r[j] = n;
    }
    r[cw] = NULL;
    return r;
}

