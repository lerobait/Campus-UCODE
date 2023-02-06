#include <stdlib.h>

char *mx_strnew(const int size);

int mx_strlen(const char *s);

char *mx_strjoin(char const *s1, char const *s2);

char *mx_strdup(const char *str);

void mx_strdel(char **str);

char *mx_strcpy(char *dst, const char* src);

char *mx_strcat(char *s1, const char *s2);

char *mx_concat_words(char **words);

char *mx_concat_words(char **words) {
    if(words != NULL) {
        int j = 0;
        int l = 0;

        while(words[j] != NULL) {
            l = l + mx_strlen(words[j]) + 1;
            j++;
        }
        l--;
        char *s = mx_strnew(l);

        while(words[j] != 0) {
            s = mx_strcat(s, mx_strjoin(words[j], " "));
        }
        s[l] = '\0';
        mx_strdel(words);
        return s;
    }
    else
        return NULL;
}

