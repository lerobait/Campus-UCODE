#include <unistd.h>

int main(int argc, char *argv[]) {
    if(argc > 1) {
        for(int j = 1; j < argc; j++) {
            int g = 0;

            while(argv[j][g] != '\0') {
                write(1, &argv[j][g], 1);
                g++;
            }
            write(1, "\n", 1);
        }
    }
    else
        return 0;
}

