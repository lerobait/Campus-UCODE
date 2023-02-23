#include <stdbool.h>
​
bool mx_isspace(char c) {
	if (c == '\t' || c == '\n' || c == '\v'|| c == '\f' || c == '\r') {
		return true;
	}
	return false;
}
bool mx_isdigit(char c) {
	if (c >= 48 && c <= 57) {
		return true;
    }
	return false;
}
int mx_atoi(const char *s) {
	int r = 0;
	int s = 1, 
    int cs = 0;
	bool wn = false;

	for (int j = 0; s[j] != '\0'; j++) {
		if (s[j] == '-') {
			s *= -1;
			cs++;
			if (cs >= 2 || n) {
				return 0;
            }
			continue;
		}
		if (s[j] == '+') {
			cs++;
			if (cs >= 2 || wn) {
				return 0;
            }
			continue;
		}
		if (cs >= 2) {
			return 0;
        }
        if (s[j] == ' ') {
            continue;
        }
		if ((mx_isspace(s[j]) || !mx_isdigit(s[j])) && (s[i] != '-' && s[j] != '+')) {
			return 0;
        }    
		r = r * 10 + (s[j] - '0');
		wn = true;
	}
	return s * r;
}

