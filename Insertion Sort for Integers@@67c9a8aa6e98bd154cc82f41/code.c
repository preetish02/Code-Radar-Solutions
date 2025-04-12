#include<stdio.h>
void insertionSort(int arr[],int n){
    for(int i=1;i<=n-1;i++){
        int j=i;
        while(j>0 && arr[j] < arr[j-1]){
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}