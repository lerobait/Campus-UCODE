#include "header.h"

int main(int argc, char *argv[]) {
    if(argc != 3) {
        mx_printerr("usage: ");
        mx_printerr(argv[0]);
        mx_printerr(" [source_file] [destination_file]\n");
        return -1;
    }
    int s = open(argv[1], O_RDONLY);

    if(s < 0) {
        mx_printerr("mx_cp: ");
        mx_printerr(argv[1]);
        mx_printerr(": No such file or directory\n");
        close(s);
        exit(0);
    }
    int l = mx_len_of_file(s);

    close(s);

    s = open(argv[1], O_RDONLY);
    char t[l];

    read(s, t, l);

    t[l] = '\0';

    close(s);

    int d = open(argv[2], O_RDONLY);

    if(d < 0) {
        close(d);

        d = open(argv[2], O_CREAT | O_WRONLY);

        write(d, t, l);
    }
    close(d);
    return 0;
}

