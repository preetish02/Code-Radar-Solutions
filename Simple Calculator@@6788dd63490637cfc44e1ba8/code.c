#include<stdio.h>
int main(){
    int a,b,c,d,e,f,g;
    scanf("%d%d%d",&a,&b,&c);
    d = a+b;
    e = a-b;
    f = a*b;
    g = a/b;
    if(c=='+'){printf("%d",d);}
    else if(c=='-'){printf("%d",e);}
    else if(c=='*'){printf("%d",f);}
    else{printf("%d",g);}
    return 0;
}
