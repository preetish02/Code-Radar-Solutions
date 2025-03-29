#include<stdio.h>
#include<limits.h>
void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min = INT_MAX;
        int minidx = -1;
        for(int j=i;j<=n-1;j++){
            if(min>arr[j]){
                min = arr[j];
                minidx = j;
            }
        }
        int temp =arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
    }
}
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    selection(arr,n);
    printarray(arr,n);
}