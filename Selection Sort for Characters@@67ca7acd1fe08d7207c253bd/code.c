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
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selectionsort(arr,n);
    printarray(arr,n);
}/