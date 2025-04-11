#include<stdio.h>

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minidx = i;
        for(int j=i;j<=n-1;j++){
            if(arr[minidx]>arr[j]){
                minidx = j;
            }
        }
        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
}

