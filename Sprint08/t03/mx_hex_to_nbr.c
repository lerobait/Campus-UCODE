#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    if(hex != NULL) {
        unsigned long r = 0;
        unsigned long d = 1;
        int j = 0;

        while(hex[j] != '\0') {
            j++;
        }
        int g = j - 1;
        
        while(g >= 0) {
            if(hex[g] <= '9' && hex[g] >= '0') {
                r += ((hex[g] - 48) * d);
                d *= 16;
            }
            else if(hex[g] >= 'A' && hex[g] <= 'z') {
                if(mx_isupper(hex[g])) {
                    r += ((hex[g] - 55) * d);
                    d *= 16;
                }
                else {
                    r += ((hex[g] - 87) * d);
                    d *= 16;
                }
            }
            g--;
        }
        return r;
    }
    else
        return 0;
}

