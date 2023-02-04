int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size);

int mx_insertion_sort(char **arr, int size) {
    int j, g;
    int c = 0;
    char *t;

    for(j = 1; j < size; j++) {
        t = arr[j];
        g = j - 1;
        
        while(g >= 0 && mx_strlen(arr[g]) > mx_strlen(t)) {
            arr[g + 1] = arr[g];
            c++;
            g--;
        }
        arr[g + 1] = t;
    }
    return c;
}

