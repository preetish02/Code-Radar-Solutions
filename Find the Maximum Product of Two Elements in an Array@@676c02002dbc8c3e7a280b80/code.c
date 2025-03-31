#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            int temp = arr[i];
            arr[i]= arr[i+1];
            arr[i+1] = temp;
        }
    }
    int product = 1;
    if (n >= 2) { // Ensure there are at least 2 elements
        int product = arr[n - 1] * arr[n - 2];
        printf("%d\n", product);
    }
}