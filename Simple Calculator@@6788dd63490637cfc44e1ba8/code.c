#include<stdio.h>
int main(){
    int a,b;
    char de;
    scanf("%d%d%c",&a,&b,&de);
    if(de=='+'){printf("%d",a+b);}
    else if(de=='-'){printf("%d",a-b);}
    else if(de=='*'){printf("%d",a*b);}
    else{printf("%d",a/b);}
    return 0;
}
