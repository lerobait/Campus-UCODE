#include <stdbool.h>

int mx_comparator(const int *arr, int size, int x, bool (*compare)(int, int));

int mx_comparator(const int *arr, int size, int x, bool (*compare)(int, int)) {
    int j = 0;

    while(j < size) {
        if(compare(arr[j], x)) {
            return j;
        }
        j++;
    }
    return -1;
}

