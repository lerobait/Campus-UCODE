int mx_strcmp(const char *s1, const char *s2);

int mx_bubble_sort(char **arr, int size);

int mx_bubble_sort(char **arr, int size) {
    int j, g;
    int s = 0;
    
    for (j = 0; j < size; j++) {
        for (g = 0; g < size - 1; g++) {
            if (mx_strcmp (arr[g], arr[g + 1]) > 0) {
                char *t = arr[g];
                arr[g] = arr[g + 1];
                arr[g + 1] = t;
                s++;
            }
        }
    }
    return s;
}

