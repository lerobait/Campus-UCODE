#include <stdbool.h>

bool mx_is_prime(int num);

bool mx_is_prime(int num) {
    int j = num;
    for(int x = 2; x < j; x++) {
        if(num % x == 0)
            return false;
    }
    return true;
}
