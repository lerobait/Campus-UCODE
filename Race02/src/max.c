#include "../inc/header.h"

int max(int **grid,int ax, int ay,int He, int Wi, char **final) {
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1}; 
    int x; 
    int y; 
    int u;
    int f;
    int m;
    int fl = 1;
    bool s = false;

    u = 0;
    grid[ay][ax] = 0;

    while(fl || !s) {
        s = true;

        for(y = 0; y < He; ++y) {
            for(x = 0; x < Wi; ++x) {
                if(grid[y][x] == u) {
                    for(f = 0; f < 4; ++f) {
                        int iy=y + dy[f], ix = x + dx[f];

                        if(grid[iy][ix] == -2 && iy < He && iy >= 0 && ix < Wi && ix >= 0) {
                            s = false;
                            grid[iy][ix] = u + 1;
                        }
                    }
                }
            }
        }
        u++;
        fl = 0;
    }
    m = grid[0][0];

    for(int i = 0; i < He; ++i) {
        for(int j = 0; j < Wi; ++j) {
            if(grid[i][j] > m) {
                m = grid[i][j];
            }
        }
    }
    for(int i = 0; i < He; ++i) {
        for(int j = 0; j < Wi; ++j) {
            if(grid[i][j] == m) {
                if(final[i][j] == '*') {
                    final[i][j] ='X';
                }
                else {
                    final[i][j] = 'D';
                }
            }
        }
    }
    return m;
}

