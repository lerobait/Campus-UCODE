int mx_strcmp(const char *s1, const char *s2);

int mx_strcmp(const char *s1, const char *s2) {
    int j = 0;
    while(s1[j] != '\0' || s2[j] != '\0') {
        if(s1[j] > s2[j])
            return 1;
        else if(s1[j] < s2[j])
            return -1;
        j++;
    }
    return 0;
}

