#include "header.h"

double mx_pow(double n, unsigned int pow) {
    double r = 1;
    for(unsigned int j = 1; j <= pow; j++) {
        r *= n;
    }
    return r;
}
