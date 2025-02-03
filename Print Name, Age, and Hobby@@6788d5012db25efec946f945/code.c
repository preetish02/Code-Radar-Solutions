#include <stdio.h>
int main(){
    int a;
    char b[];
    char c[];
    scanf("%s%d",&b, &a);
    scanf("%s",&c);
    printf("%Name: %s",b[99]);
    printf("Age: %d",a);
    printf("Hobby: %s", c[99]);
    return 0;
}