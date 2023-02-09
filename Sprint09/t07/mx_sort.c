#include <stdbool.h>

void mx_sort(int *arr, int size, bool (*f)(int, int));

void mx_sort(int *arr, int size, bool (*f)(int, int)) {
    for(int j = 0; j < size - 1; j++) {
        for(int g = 0; g < size - 1; g++) {
            if(f(arr[g], arr[g + 1])) {
                int t = arr[g];
                arr[g] = arr[g + 1];
                arr[g + 1] = t;
            }
        }
    }
}

