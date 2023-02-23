#include <fcntl.h>
#include <unistd.h>

void mx_printerr(const char *);
int mx_filelen(int);
int mx_strlen(const char *);
void mx_printstr(const char *);

int mx_strlen(const char *s) {
    int c = 0;

    while (*s++) {
        c++;
    }
    return c;
}
int mx_filelen(int file) {
    int l = 0;
    char c;

    while(read(file, &c, 1) != 0) {
        l++;
    }
    return l;
}
void mx_printerr(const char *s) {
    write(2, s, mx_strlen(s));
}
void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}
int main(int argc, char *argv[]) {
    if(argc == 2) {
        int f = open(argv[1], O_RDONLY);

        if (f < 0) {
            mx_printerr("error\n");
            close(f);
            return 0;
        }
        int len = mx_filelen(f);

        close(f);

        f = open(argv[1], O_RDONLY);

        char t[len];

        read(f, t, len);

        t[len] = '\0';

        mx_printstr(t);
        
        close(f);
    }
    else {
        mx_printerr("usage: ");
        mx_printerr(argv[0]);
        mx_printerr(" [file_path]\n");
        return 0;
    }
}

