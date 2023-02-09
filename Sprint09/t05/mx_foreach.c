void mx_foreach(const int *arr, int size, void (*f)(int));

void mx_foreach(const int *arr, int size, void (*f)(int)) {
    int j = 0;

    while(j < size) {
        f(arr[j]);
        j++;
    }
}

