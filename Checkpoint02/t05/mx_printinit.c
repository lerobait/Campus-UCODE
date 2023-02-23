#include <unistd.h>

void mx_printint(int n);

void mx_printint(int n) {
    if(n != 0) {
        
        int j = 0;
        long g = n;
        char x[20];
        
        if(g < 0) {
            write(1, "-", 1);
            g = -g;
        }
        while(g != 0) {
            x[j++] = g % 10 + '0';
            g /= 10;
        }
        
        int f = j - 1;
        
        while(f >= 0) {
            write(1, &x[f], 1);
            f--;
        }
    }   
    else write(1, "0", 1);
}

