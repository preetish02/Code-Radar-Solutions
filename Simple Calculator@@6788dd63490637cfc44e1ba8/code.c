#include<stdio.h>
int main(){
    int a,b;
    char d;
    scanf("%d%d%c",&a,&b,&d);
    if(d=='+'){printf("%d",a+b);}
    else if(d=='-'){printf("%d",a-b);}
    else if(d=='*'){printf("%d",a*b);}
    else{printf("%d",a/b);}
    return 0;
}
