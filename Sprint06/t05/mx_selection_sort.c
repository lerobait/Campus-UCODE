int mx_strcmp(const char *s1, const char *s2);

int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size);

int mx_selection_sort(char **arr, int size) {
    int c = 0;
    int j, g, p;
    char *t;

    for(j = 0; j < size - 1; j++) {
        p = j;

        for(g = j + 1; g < size; g++) {
            if(mx_strlen(arr[p]) > mx_strlen(arr[g])) {
                p = g;
            }
            else if(mx_strcmp(arr[p], arr[g]) > 0 && mx_strlen(arr[p]) == mx_strlen(arr[g])) {
                p = g;
            }
        }
        if(p != j) {
            t = arr[p];
            arr[p] = arr[j];
            arr[j] = t;
            c++;
        } 
    }
    return c;
}

