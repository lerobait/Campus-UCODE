int mx_sqrt(int x);

int mx_sqrt(int x) {
    if(x > 0) {
        for(int j  = 1; x >= j * j; j++) {
            if(j * j == x) {
                return j;
            }
        }
        return 0;
    }
    else
        return 0;
}

