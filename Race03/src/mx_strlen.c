#include "../inc/header.h"

unsigned int mx_strlen(const char *s) {
unsigned int m = 0;
while(s[m] != '\0') {
m++;
}
return m;
}
