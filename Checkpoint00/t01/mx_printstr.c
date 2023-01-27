void mx_str_reverse(char *s);

void mx_str_reverse(char *s) {
    
    int a = 0;
    char g = s[0];
    
    while(g != 0) {
        a++;
        g = s[a];
    }
    int x = a;
    int i = 0;
    
    while(i < x / 2) {
        char t = s[i];
        s[i] = s[x - 1 - i];
        s[x - 1 - i] = t;
        i++;
    }
}

