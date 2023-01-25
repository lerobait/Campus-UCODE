void mx_printchar(char c);

void mx_str_separate(const char *str, char delim);

void mx_str_separate(const char *str, char delim) {
int j;
for(j = 0; str[j] != '\0'; j++) {
    if(str[j] == delim && str[j - 1] != delim)
        mx_printchar('\n');
    else if(str[j] == delim && str[j - 1] == delim)
        mx_printchar('\0');
    else
        mx_printchar(str[j]);
    }
    mx_printchar('\n');
}
