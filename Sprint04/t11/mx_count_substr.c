char *mx_strchr(const char *s, int c);

int mx_strlen(const char *s);

int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strstr(const char *s1, const char *s2);

int mx_count_substr(const char *str, const char *sub);

int mx_count_substr(const char *str, const char *sub) {
    const char *n = sub;
    const char *p = str;
    int t;

    for(t = 0;(p = mx_strstr(p, n)) != 0; t++) {
        p += mx_strlen(n);
    }
    return t;
}

