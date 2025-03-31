#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int peakFound = 0;
    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i] >= arr[i - 1]) && (i == (n - 1) || arr[i] >= arr[i + 1])) {
            printf("%d\n", arr[i]);
            peakFound = 1;
            break; // Found the first peak, exit loop
        }
    }

    if (peakFound==0) {
        printf("-1"); // No peak found
    }

    return 0;
}