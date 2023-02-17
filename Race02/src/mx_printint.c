#include "../inc/header.h"

void mx_printint(int n) {
    int num = n;
    int c = 0;
    int d = 1;
    int j = 1;

    if(n < 0) {
        mx_printchar('-');
        n = n * (-1);
        num = n;
    }
    if(n == 0) {
        mx_printchar('0');
    }
    while(n != 0) {
        n /= 10;
        ++c;
    }
    while(j < c) {
        d = d * 10;
        ++j;
    }
    while(num > 0) {
        int dig = num / d + 48;
        mx_printchar(dig);
        --c;
        num %= d;
        d = d / 10;
    }
    while(c) {
        mx_printchar('0');
        --c;
    }
}

