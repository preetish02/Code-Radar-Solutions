#include<stdio.h>
#include<limits.h>
void selection(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minidx = i;
        for(int j=i;j<=n-1;j++){
            if(arr[minidx]>arr[j]){
                minidx = j;
            }
        }
        int temp =arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
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
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}