int mx_count_words(const char *str, char delimiter);

int mx_count_words(const char* str, char delimiter) {
    int s = 0;  
    int check = 0;
    unsigned w = 0;
    
    while(*str) {  
        if(*str == delimiter && check == 0) {
            check = 1; 
        }
        if(*str == delimiter || *str == '\n' || *str == '\t') {
            s = 0;
        }
        else if(s == 0) {  
            s = 1;  
            ++w;  
        }  
        ++str;  
    }  
    if(check > 0) {
        return w;  
    }
    return 0;  
}

