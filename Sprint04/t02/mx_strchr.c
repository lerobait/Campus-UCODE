char *mx_strchr(const char *s, int c);

char *mx_strchr(const char *s, int c) {
    if (c > 0 && c < 127) {
        char g = (char)c;
    
        for (int j = 0; s[j]; ++j) {
            if (s[j] == g) {
                return (char*)(s + j);
            }
        }
        return 0;
    }
    else
        return 0;
}

