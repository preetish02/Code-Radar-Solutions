#include<stdio.h>

void selectionSort(char arr[],int n){
    for(char i=0;i<n-1;i++){
        int minidx = i;
        for(char j=i;j<=n-1;j++){
            if(arr[minidx]>arr[j]){
                minidx = j;
            }
        }
        char temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
}
void printArray(char arr[][100],int n){
    for(char i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}
