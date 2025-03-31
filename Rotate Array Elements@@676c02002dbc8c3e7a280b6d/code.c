#include<Stdio.h>
void reverse(int arr[],int i, int j){
    int n;
    for(i=0;i<n;i++){
        for(j=n;j>i;j--){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
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