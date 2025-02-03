#include <stdio.h>
int main(){
    int a;
    char b[99];
    char c[99];
    scanf("%s%d",&b, &a);
    scanf("%s",&c);
    printf("%Name: %s",b[99]);
    printf("Age: %d",a);
    printf("Hobby: %s", c[99]);
    return 0;
}