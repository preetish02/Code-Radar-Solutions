#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int a=1;
        for(int j=1;j<=i;j++){
            int d = a + 1;
            char ch = (char)d;
            printf("%d ",ch);
            a += 1;
        }printf("\n");
    }return 0;
}