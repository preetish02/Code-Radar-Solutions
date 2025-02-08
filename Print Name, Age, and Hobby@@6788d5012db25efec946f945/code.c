#include <stdio.h>
int main(){
    int a;
    char b[100];
    char c[100];
    scanf("%s%d",&b, &a);
    scanf("%s",&c);
    printf("%Name: %s",b);
    printf("Age: %d",a);
    printf("Hobby: %s", c);
    return 0;
}