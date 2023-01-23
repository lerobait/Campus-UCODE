void mx_printchar(char c);

void mx_printint(int n);

void mx_printint(int n) {
    int j = 0;
    long g = n;
    if(g < 0) mx_printchar('-');
    g *= -1;
    while(g > 0) {
        j = j * 10 + g % 10;
        g /= 10;
    }
    g = j;
    while(n > 0) {
        j = g % 10;
        mx_printchar(j + 48);
        g /= 10;
    }
}
