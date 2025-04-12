#include<stdio.h>

void selectionSort(int arr[],int n){
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
void printArray(int arr[],int n){
    for(char i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
