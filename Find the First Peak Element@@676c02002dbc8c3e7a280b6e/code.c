#include<Stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int k = i;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]>k){
            k = arr[i];
        }
    }printf("%d",k);

}