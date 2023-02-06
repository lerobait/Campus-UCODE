char *mx_strcpy(char *dst, const char* src);

char *mx_strcpy(char *dst, const char* src) {
    int j;
    for(j = 0; src[j] != '\0'; j++) {
        dst[j] = src[j];
    }
    dst[j] = '\0';
    return dst;
}
