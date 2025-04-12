#include<stdio.h>
void insertionSort(char arr[],int n){
    for(int i=1;i<=n-1;i++){
        char j=i;
        while(j>0 && arr[j] < arr[j-1]){
            char temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
}
void printArray(char arr[],int n){
    for(char i=0;i<n;i++){
        printf("%c ",arr[i]);
    }
}