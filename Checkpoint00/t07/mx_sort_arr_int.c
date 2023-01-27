void mx_sort_arr_int(int *arr, int size);

void mx_sort_arr_int(int *arr, int size) {

    int j;
    
    for(j = 0; j < size; j++) {

        int g = 0;

        while(g < size) {
            if(arr[g] > arr[j]) {
                int t = arr[j];
                arr[j] = arr[g];
                arr[g] = t;
            }
            g++;
        }
    }
}

