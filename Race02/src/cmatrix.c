#include "../inc/header.h"

char **cmatrix (char *res, int *ryad, int *stovb) {
    int i;
    int k = 0;
    int l = 0;

    for(i = 0; res[i] != '\0'; ++i) {
        if(res[i] == '\n') {
           ++l;
        }
    }   
    k = (i - l) / l;

    char **m = (char **)malloc(l * 8);

    int g = 0;

    while(g < l) {
        m[i] = (char*)malloc(k);
        g++;
    }
    for(int i = 0; i < l; ++i) {
        for(int j = 0; j < k; ++j) {
            if(i == 0) {
                if(res[j] == '#') {
                    m[i][j] = '#';
                }
                else if(res[j] == '.') {
                    m[i][j] = '.';
                }
                else if(res[j] != ',' && res[j] != '\n') {
                    mx_printerr("map error\n");
                    exit(0);
                }
            }
            else {
                if(res[j + i * (k + 1)] == '#') {
                    m[i][j] = '#';
                }
                else if(res[j + i * (k + 1)] == '.') {
                    m[i][j] = '.';
                }
                else if(res[j + i * (k + 1)] != ',' && res[j + i * (k + 1)] != '\n') {
                    mx_printerr("map error\n");
                    exit(0);
                }
            }
        }
    }
    *stovb = k;
    *ryad = l;
    return m;
}
