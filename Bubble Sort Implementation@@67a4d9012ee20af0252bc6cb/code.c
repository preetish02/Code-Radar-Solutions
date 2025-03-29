#include <stdio.h>

// Function to perform Bubble Sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) { // Run (n-1) times
        for (int j = 0; j < n - i - 1; j++) { // Last i elements are sorted
            if (arr[j] > arr[j + 1]) { // Correct comparison
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    //printf("\n"); // Print newline correctly
}

int main(){
    int n;
    scanf("%d", &n);

    int arr[n]; // Declare array

    // Input array elements
    printf("%d", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    bubbleSort(arr, n);
    printArray(arr, n);

    return 0;
}
