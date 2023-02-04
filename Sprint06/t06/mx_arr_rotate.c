void mx_arr_rotate(int *arr, int size, int shift);

void mx_arr_rotate(int *arr, int size, int shift) {
    int j, g, t;
    if(shift > 0) {
        for(j = 0; j < shift; j++) {
            t = arr[size - 1];

            for(g = size - 1; g > 0; g--) {
                arr[g] = arr[g - 1];
            }
            arr[0] = t;
        }
    }
    else {
        for(j = 0; j > shift; j--) {
            t = arr[0];

            for(g = 0; g < size - 1; g++) {
                arr[g] = arr[g + 1];
            }
            arr[size - 1] = t;
        }
    }
}

