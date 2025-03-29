#include <stdio.h>

void bubblesort(char arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  
        for (int j = 0; j < n - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) { 
                char temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void printarray(char arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%c ", arr[i]); 
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char arr[n]; 
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]); 
    }

    bubblesort(arr, n);
    printarray(arr, n);
    return 0;
}
