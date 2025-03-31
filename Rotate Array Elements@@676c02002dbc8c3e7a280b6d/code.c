#include<stdio.h>
void reverse(int arr[],int start, int end){
     while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
int main(){
    int n,k, arr[n];
    scanf("%d",&n);
    scanf("%d",&k);
    for(int i= 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    k=k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k-1,n-1);
    for(int i= 0;i<n;i++){
        printf("%d",arr[i]);
    }
}