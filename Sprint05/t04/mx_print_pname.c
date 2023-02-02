void mx_printchar(char c);

int mx_strlen(const char *s);

void mx_printstr(const char *s);

char *mx_strchr(const char *s, int c);

int main(int argc, char *argv[]) {
    char *str = mx_strchr(argv[argc - 1], '/');
    mx_printstr(++str);
    mx_printchar('\n');
}

