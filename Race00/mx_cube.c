void mx_printchar(char c);

void mx_cube(int n);

void mx_cube(int n) {
    if(n <= 1) return;
        int y = n * 2, x = n / 2, j = 0;

        for(int i = 0; i < n / 2 + 1; i++) {
            mx_printchar(' ');
        }
        mx_printchar('+');
        
        for(int i = 0; i < y; i++) {
            mx_printchar('-');
        }
        mx_printchar('+');
        mx_printchar('\n');
        
        for(int i = 0; i < n / 2; i++) {
            
            for(int i = 0; i < x; i++) {
                mx_printchar(' ');
            }
            mx_printchar('/');
            
            for(int i = 0; i < n * 2; i++) {
                mx_printchar(' ');
            }
            mx_printchar('/');
            
            for(int i = 0; i < j; i++) {
                mx_printchar(' ');
            }
            j++;
            x--;
            mx_printchar('|');
            mx_printchar('\n');
        }
        mx_printchar('+');
        
        for(int i = 0; i < y; i++) {
            mx_printchar('-');
        }
        mx_printchar('+');
        
        for(int i = 0; i < j; i++) {
                mx_printchar(' ');
        }
        mx_printchar('|');
        mx_printchar('\n');
        
        for(int i = 1; i < n / 2; i++) {
            mx_printchar('|');
            
            for(int i = 0; i < y; i++) {
                mx_printchar(' ');
            }
            mx_printchar('|');
            
            for(int i = 0; i < j; i++) {
                mx_printchar(' ');
            }
            mx_printchar('|');
            mx_printchar('\n');
        }
        mx_printchar('|');
        
        for(int i = 0; i < y; i++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
        
        for(int i = 0; i < j; i++) {
            mx_printchar(' ');
        }
        mx_printchar('+');
        mx_printchar('\n');
        
        for(int i = 0; i < n / 2; i++) {
            mx_printchar('|');
            
            for(int i = 0; i < y; i++) {
                mx_printchar(' ');
            }
            mx_printchar('|');
            
            for(int i = 0; i < j - 1; i++) {
                mx_printchar(' ');
            }
            j--;
            mx_printchar('/');
            mx_printchar('\n');
        }
        mx_printchar('+');
        
        for(int i = 0; i < y; i++) {
            mx_printchar('-');
        }
        mx_printchar('+');
        mx_printchar('\n');
}    

