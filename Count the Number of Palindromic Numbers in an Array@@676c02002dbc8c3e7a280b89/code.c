#include<stdio.h>
void reverse(int arr[],int start, int end){
    while(start<end){
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end]= temp;
        start++;
        end--; 
    }
}
int main(){
    int n,arr[n];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,0,n-1);
    
}