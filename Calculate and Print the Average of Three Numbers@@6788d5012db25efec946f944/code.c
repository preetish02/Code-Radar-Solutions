#include<stdio.h>
int main(){
    int a,b,c,average;
    scanf("%d%d%d",&a,&b,&c);
    //float average;
    average = (a+b+c)/3;
    printf("Average: %.2f",average);
    return 0;
}