int mx_gcd(int a, int b);

int mx_lcm(int a, int b);

int mx_lcm(int a, int b) {
    if(b == 0) {
        return 0;
    }
    else if(a < 0) {
        a *= -1;
    }
    else if(b < 0) {
        b *= -1;
    }
    return (a * b) / mx_gcd(a, b);
}

