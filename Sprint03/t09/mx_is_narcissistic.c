#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num);

bool mx_is_narcissistic(int num) {
    int sum = 0;
    int j = 0;
    int t = num;
    int t1 = num;
    if(num <= 0) return false;
    while (t != 0) {
        j += 1;
        t /= 10;
    }
    for(int i = 0; i < j; i++) {
        sum += mx_pow(t1 % 10, j);
        t1 /= 10;
        if(sum == num)
            return true;
        else    
            return false;
    }
}
