#include <unistd.h>

void mx_printstr(const char *s);

void mx_printstr(const char *s) {
	unsigned long j = 0;
	while(s[j] != '\0') {
        j++;
    }
	write(1, s, j);
}

