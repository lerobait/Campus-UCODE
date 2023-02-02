void mx_printchar(char c);

int mx_strlen(const char *s);

void mx_printstr(const char *s);

int mx_strcmp(const char *s1, const char *s2);

int main(int argc, char *argv[]) {
    if(argc > 1) {
        for(int g = 0; g < argc; g++) {
            for(int f = g + 1; f < argc; f++) {
                if((mx_strcmp(argv[g], argv[f])) > 0) {
                    char *t = argv[g];
                    argv[g] = argv[f];
                    argv[f] = t;
                }
            }
        }

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

