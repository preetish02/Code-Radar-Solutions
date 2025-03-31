#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n, k;
    scanf("%d", &n);
    scanf("%d", &k);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    k = k % n;
    if (k < 0) { // Handle negative k
        k += n;
    }

    reverse(arr, 0, n - 1); // Reverse the entire array
    reverse(arr, 0, k - 1); // Reverse the first k elements

    if (k > 0) { // Only reverse the remaining if k > 0
        reverse(arr, k, n - 1);
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n ", arr[i]); // Added spaces for readability
    }
    printf("\n"); // Add a newline at the end

    return 0;
}