#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a==b==c){printf("Equilateral");}
    else if((a==b && b!=c && a!=c) || (a==c && c!=b && a!=b) || (b==c&& c!=a && b!=a)){printf("Isosceles");}
    else{printf("Scalene");}
    return 0;
}