#include<Stdio.h>
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
    printf("%d",arr[n]);
    }
}