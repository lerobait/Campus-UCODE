void mx_printchar(char c);

void mx_pyramid(int n);

void mx_pyramid(int n) {
    if(n % 2 == 0 && n > 1) {
        int a = 1, f = 1;
        
        for(int i = 0; i < n - 1; i++) {
            mx_printchar(' ');
        }
        mx_printchar('/');
        mx_printchar('\\');
        mx_printchar('\n');
        
        for(int x = 1; x < n / 2; x++) {
            
            for(int i = 0; i < n - f - 1; i++) {
                mx_printchar(' ');
            }
        mx_printchar('/');
        
            for(int i = 0; i < a; i++) {
                mx_printchar(' ');
            }
        mx_printchar('\\');

            for(int i = 0; i < x; i++) {
                mx_printchar(' ');
            }
        mx_printchar('\\');
        mx_printchar('\n');
        a += 2;
        f++;
        }
        
        for(int y = 1; y < n / 2; y++) {
            
            for(int i = 0; i < n - f - 1; i++) {
                mx_printchar(' ');
            }
        mx_printchar('/');
        
            for(int i = 0; i < a; i++) {
                mx_printchar(' ');
            }
        a += 2;
        mx_printchar('\\');
        
            for(int i = 0; i < n - f - 1; i++) {
                mx_printchar(' ');
            }
        mx_printchar('|');
        mx_printchar('\n');
        f++;
        }
        mx_printchar('/');
        
        for(int i = 0; i < 2 * n - 3; i++) {
            mx_printchar('_');
        }
        mx_printchar('\\');
        mx_printchar('|');
    }
    else 
        return;
}

