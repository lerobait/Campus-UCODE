#include "header.h"

int main(int argc, char *argv[]) {
    char c;

    if (argc == 1) {
        while (read(0, &c, 1))
            write(1, &c, 1);
    }
    int j = 1;

    while(j < argc) {
        int f = open(argv[j], O_RDONLY);
        char *to_cat = argv[j];

        if (f < 0) {
            mx_printerr("mx_cat: ");
            mx_printerr(to_cat);
            mx_printerr(": No such file or directory\n");
        }
        else
            while (read(f, &c, 1))
                write(1, &c, 1);
        close(f);
        j++;
    }
    exit(0);
}

