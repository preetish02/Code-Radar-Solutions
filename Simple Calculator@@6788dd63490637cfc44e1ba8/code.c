#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(c=='+'){printf(a+b);}
    else if(c=='-'){printf(a-b);}
    else if(c=='*'){printf(a*b);}
    else{printf(a/b);}
    return 0;
}
