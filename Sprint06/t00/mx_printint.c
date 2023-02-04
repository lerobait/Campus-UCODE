void mx_printchar(char c);

void mx_printint(int n);

void mx_printint(int n) {
    if(n != 0) {
        
        int j = 0;
        long g = n;
        char x[20];
        
        if(g < 0) {
            g = -g;
        }
        while(g != 0) {
            x[j++] = g % 10 + '0';
            g /= 10;
        }
        if(n < 0) {
            x[j++] = '-';
        }

        int f = j - 1;
        
        while(f >= 0) {
            mx_printchar(x[f]);
            f--;
        }
    }   
    else mx_printchar('0');
}

