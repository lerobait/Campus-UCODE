char *mx_strchr(const char *s, int c);

int mx_strlen(const char *s);

int mx_strncmp(const char *s1, const char *s2, int n);

char *mx_strstr(const char *s1, const char *s2);

char *mx_strstr(const char *s1, const char *s2) {
	int l = mx_strlen(s2);
	const char *p = s1;
    
	while((p = mx_strchr(p, *s2)) != 0) {
		if (mx_strncmp(p, s2, l) == 0) {
			return (char*)p;
        }
        p++;
	}
	return 0;
}

