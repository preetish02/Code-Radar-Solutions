#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    double average;
    average = double((a+b+c)/3);
    printf("Average: %.2lf",average);
    return 0;
}