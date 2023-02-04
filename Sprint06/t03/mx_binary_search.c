int mx_strcmp(const char *s1, const char *s2);

int mx_binary_search(char **arr, int size, const char *s, int *count);

int mx_binary_search(char **arr, int size, const char *s, int *count) {
    int j = 0;
    int c = 0;
    int r = 1;
    int g = size - 1;
    int m = j + (g - j) / 2; 

    while(j <= g) {
        c++;
        *count = c;
        if(mx_strcmp(arr[m], s) < 0) {
            j = m + 1;
        }
        else if(mx_strcmp(arr[m], s) == 0) {
            return m;
        }
        else {
            g = m - 1;
        }
        m = (j + g) / 2;
    }
    *count = 0;
    return -1;
}

