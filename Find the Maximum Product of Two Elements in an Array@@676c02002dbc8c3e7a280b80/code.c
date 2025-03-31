#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Read the array elements from the user
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort (Corrected Sorting Logic)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    if (n >= 2 && arr[n]>=0) { 
        int product = arr[n - 1] * arr[n - 2];
        printf("%d\n", product);
    } 
    else if(n>=2 && arr[n]<0){
        int product = arr[0] * arr[1];
    }
}