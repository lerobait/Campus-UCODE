#include "../inc/header.h"

bool path(int **grid,int ax, int ay, int bx, int by,int He, int Wi, int *len,int *px,int *py) {
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1}; 
    int x; 
    int y;
    int u; 
    int f;
    bool s;

    if(grid[ay][ax] == -1) {
        mx_printerr("entry point cannot be an obstacle\n");
        exit(0);
    }
    else if (grid[by][bx] == -1) {
        mx_printerr("exit point cannot be an obstacle\n");
        exit(0);
    }
    u = 0;
    grid[ay][ax] = 0;

    do {
        s = true;

        for(y = 0; y < He; ++y) {
            for(x = 0; x < Wi; ++x) {
                if(grid[y][x] == u) {
                    for(f = 0; f < 4; ++f) {
                        int ix = x + dx[f];
                        int iy = y + dy[f];

                        if(grid[iy][ix] == -2 && iy < He && iy >= 0 && ix < Wi && ix >= 0) {
                            s = false;
                            grid[iy][ix] = u + 1;
                        }
                    }
                }
            }
        }
    u++;
    } while(grid[by][bx] == -2 && !s);

    if(grid[by][bx] == -2) {
        return false;
    }
    *len = grid[by][bx];
    x = bx;
    y = by;
    u = *len;

    while(u > 0) {
        px[u] = x;
        py[u] = y;
        u--;

        for(f = 0; f < 4; ++f) {
        int ix = x + dx[f];
        int iy = y + dy[f];

            if(grid[iy][ix] == u && iy < He && iy >= 0 && ix < Wi && ix >= 0) {
            x = x + dx[f];
            y = y + dy[f];
            break;
            }
        }
    } 
    px[0] = ax;
    py[0] = ay;
    return true;
}

