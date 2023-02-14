#include "header.h"

int main(int argc, char *argv[]) {
    if(argc != 2) {
        mx_printerr("usage: ");
        mx_printerr(argv[0]);
        mx_printerr(" [file_path]\n");
        return 0;
    }
    int f = open(argv[1], O_RDONLY);

    if(f < 0) {
        mx_printerr("error\n");
        close(f);
        return 0;
    }
    int l = mx_len_of_file(f);

    close(f);

    f = open(argv[1], O_RDONLY);
    char t[l];

    read(f, t, l);

    t[l] = '\n';

    mx_printstr(t);
    close(f);
    return 0;
}

