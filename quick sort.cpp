


























// Complexity Analysis  Time Complexity: Best Case: O(n log n) Average Case: O(n log n) Worst Case: O(n^2) 
// Space Complexity: Total Space: O(n)  Auxiliary Space: O(log n)
#include <stdio.h>

// Function to partition the array into two halves
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  
    int i = low - 1; 

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;  
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Given array is \n");
    printArray(arr, arr_size);

    // Perform quicksort
    quickSort(arr, 0, arr_size - 1);

    printf("Sorted array is \n");
    printArray(arr, arr_size);

    return 0;
}

