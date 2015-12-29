#include<stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;

}


void selectionSort(int arr[], int n) {
    int i, j, min_idx;

    for (i = 0; i < n - 1; i++) {
        //Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;


        //Swap the found element with the first element

        swap(&arr[min_idx], &arr[i]);

    }
}

/* Function to print an array */


void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf(" %d ", arr[i]);

    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11, 12, 3, 4, 23, 54, 1, 34};
    int n = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, n);
    printf("Sorted array : \n");
    printArray(arr, n);
    return 0;
}
