#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_prime(int num);

bool mx_is_mersenne(int n);

bool mx_is_mersenne(int n) {
    if(n <= 0) 
        return false;
    for(int j = 2; j <= n; j++) {
        if(mx_is_prime(j) == true) {
            double num = mx_pow(2, j) - 1;
            if (num == n) 
                return true;
        }
    }
    return false;
}
