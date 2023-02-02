int mx_factorial_iter(int n);

int mx_factorial_iter(int n) {
    if(2147483647 > n && n > 0) {
        int f = 1;
        int j = 1;

        while(j <= n) {
            f *= j;
            j++;
        }
        return f;
    }
    else 
        return 0;
}

