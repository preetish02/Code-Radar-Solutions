#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g;
    d = a+b;
    e = a-b;
    f = a*b;
    g = a/b;
    scanf("%d%d%d",&a,&b,&c);
    if(c=='+'){printf("%d",d);}
    else if(c=='-'){printf("%d",e);}
    else if(c=='*'){printf("%d",f);}
    else{printf("%d",g);}
    return 0;
}
