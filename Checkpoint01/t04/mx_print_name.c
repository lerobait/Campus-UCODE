#include <unistd.h>

int main(int argc, char *argv[]) {
    int j = 0;
    char c;

    while(argv[0][j] != '\0') {
        write(1, &argv[0][j], 1);
        j++;
    }
    write(1, "\n", 1);
    c = argc + 48;
    write(1, &c, 1);
    write(1, "\n", 1);

    return 0;
}

