#include "../inc/header.h"

int main(int argc, char const *argv[]) {
    if(argc != 6) {
        mx_printerr("usage: ./way_home [file_name] [x1] [y1] [x2] [y2]");
    }
    char s[1];
    int f = open(argv[1], O_RDONLY);
    int u = read(f, s, sizeof(s));

    if(f < 0) {
        mx_printerr("map does not exist\n");
        exit(0);
    }
    else if(u <= 0) {
        mx_printerr("map does not exist\n");
        exit(0);
    }
    int x1 = mx_atoi(argv[2]), x2 = mx_atoi(argv[4]);
    int y1 = mx_atoi(argv[3]), y2 = mx_atoi(argv[5]);

    int rd;
    int st;

    char *str = mx_file_to_str(argv[1]);
    int **m = matrix(str, &rd, &st);  

    if(x1 >= st || x2 >= st || x1 < 0 || x2 < 0 || y1 < 0 || y2< 0 || y1 >= rd || y2 >= rd) {
        mx_printerr("points are out of map range\n");
        exit(0);
    }
    int l;
    int px[rd * st];
    int py[rd * st];

    if(!path(m, x1, y1, x2, y2, rd, st, &l, px, py)) {
        mx_printerr("route not found\n");
        exit(0);
    }
    int f1 = open("path.txt", O_WRONLY);

    if(f1 < 0) {
        f1 = open("path.txt", O_CREAT | O_WRONLY);
    }
    char **final = cmatrix(str, &rd, &st);
    int k = 0;

    while(k < l) {
        final[py[k]][px[k]] = '*';
        k++;
    }
    final[y2][x2] = '*';
    int **m1 = matrix(str, &rd, &st);
    max(m1, x1, y1, rd, st, final);

    for(int i = 0; i < rd; ++i) {
        for(int j = 0; j < st; ++j) {
            char s = final[i][j];
            write(f1, &s, 1);
        }
        write(f1, "\n", 1);
    }
    if(close(f1) < 0) {
            mx_printerr("map error\n");
            exit(0);
    }
    mx_printstr("dist=");
    mx_printint(max(m1, x1, y1, rd, st, final));
    mx_printstr("\n");
    mx_printstr("exit=");
    mx_printint(l);
    mx_printstr("\n");
    
    return 0;
}

