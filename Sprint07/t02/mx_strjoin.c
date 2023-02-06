#include <stdlib.h>

char *mx_strnew(const int size);

int mx_strlen(const char *s);

char *mx_strdup(const char *str);

char *mx_strcpy(char *dst, const char* src);

char *mx_strcat(char *s1, const char *s2);

char *mx_strjoin(char const *s1, char const *s2);

char *mx_strjoin(char const *s1, char const *s2) {
    int l, l1, l2;

    if(!s1 && !s2) {
        return NULL;
    }
    else if(s2 != NULL && s1 == NULL) {
        l = mx_strlen(s2);
        char *s = mx_strnew(l);
        s = mx_strdup(s2);
        return s;
    }
    else if(s1 != NULL && s2 == NULL) {
        l = mx_strlen(s1);
        char *s = mx_strnew(l);
        s = mx_strdup(s1);
        return s;
    }
    l = 0;
    l1 = mx_strlen(s1);
    l2 = mx_strlen(s2);
    l = l1 + l2;
    char *n = mx_strnew(l);
    n = mx_strcat(n, s1);
    n = mx_strcat(n, s2);
    return n;
}

