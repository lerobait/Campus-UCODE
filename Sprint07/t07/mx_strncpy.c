char *mx_strncpy(char *dst, const char *src, int len);

char *mx_strncpy(char *dst, const char *src, int len) {
    if(len > 0) {
        for(int j = 0; src[j] && j != len; j++) {
            dst[j] = src[j];
        }
        return dst;
    }
    else
        return 0;
}

