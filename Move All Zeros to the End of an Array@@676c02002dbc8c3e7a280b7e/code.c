#include<stdio.h>
int main(){
     int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);}
    int k = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            i == (n-1);
            arr[i] = arr[n-1]; 
            printf("%d",arr[i]);
        }
    }
    
    
}