#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    //int k = -1;
    for(int i=0;i<n-1;i++){
        if(i>(n-1) && arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            printf("%d",arr[i]);
            break;
        }
        else if(i==(n-1) && arr[i]>arr[i-1]){
            printf("%d",arr[i]);
            break;
        }

        }
}
