int mx_popular_int(const int *arr, int size);

int mx_popular_int(const int *arr, int size) {
    int mn = 0, dn = 0, a = 0;

    for(int j = 0; j < size; j++) {
        for(int g = 0; g < size; g++) {
            if(arr[j] == arr[g]) {
                dn++;
                if(dn > mn) {
                    mn = dn;
                    a = arr[j];
                }
            }
        }
        dn = 0;
    }
    return a;
}

