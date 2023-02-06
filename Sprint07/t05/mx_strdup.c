char *mx_strcpy(char *dst, const char* src);

int mx_strlen(const char *s);

char *mx_strnew(const int size);

char *mx_strdup(const char *str);

char *mx_strdup(const char *str) {
    int l = mx_strlen(str);
    char *s1 = mx_strnew(l);
    char *s2 = mx_strcpy(s1, str);
    return s2;
}

