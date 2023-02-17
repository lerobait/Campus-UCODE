#include "../inc/header.h"

int **matrix(char *res, int *ryad, int *stovb) {
    int j = 0;
    int k = 0;
    int l = 0;

    while(res[j] != '\0') {
        if(res[j] == '\n') {
           ++l;
        }
        ++j;
    }
    k = (j - l) / l;

    int **m = (int **)malloc(l * sizeof(int*));
    int p = 0;

    while(p < l) {
        m[p] = (int*)malloc(k * sizeof(int*));
        p++;
    }
    for(int i = 0; i < l; ++i) {
        for(int j = 0; j < k; ++j) {
            if(i == 0) {
                if(res[j] == '#') {
                    m[i][j] = -1;
                }
                else if(res[j] == '.') {
                    m[i][j] = -2;
                }
                else if(res[j] != ',' && res[j] != '\n') {
                    mx_printerr("map error\n");
                    exit(0);
                }
            }
            else {
                if(res[j + i * (k + 1)] == '#') {
                    m[i][j] = -1;
                }
                else if(res[j + i * (k + 1)] == '.') {
                    m[i][j] = -2;
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

