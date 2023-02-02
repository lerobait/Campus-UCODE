void mx_printchar(char c);

int mx_strlen(const char *s);

void mx_printstr(const char *s);

int main(int argc, char *argv[]) {
    if(argc > 1) {
        int j = 1;

        while(j < argc) {
            mx_printstr(argv[j]);
            mx_printchar('\n');
            j++;
        }
    }
    else
        return 0;
}

