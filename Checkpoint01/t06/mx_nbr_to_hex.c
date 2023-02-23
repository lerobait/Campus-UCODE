#include <stdlib.h>

char *mx_nbr_to_hex(unsigned long nbr);

char *mx_nbr_to_hex(unsigned long nbr) {
    if(nbr > 0) {
    int s = 0;
    int t = nbr;
    
    while(t != 0) {
        s++;
        t /= 16;
    }
    char *h  = (char *)malloc(s);
    unsigned int f = nbr;
    int j = 0;
    int g;
    
    while(f != 0) {
        g = f % 16;
        if (g < 10) { 
            h[j] = 48 + g;
        }
        else {
            h[j] = 87 + g;
        }
        j++;
        f /= 16;
    }
    j--;

    int q = 0;
    
    while(q < j) {
        char t = h[q];
        h[q] = h[j];
        h[j] = t;
        q++;
        j--;
    }
    return h;
    }
    else 
        return 0;
}

