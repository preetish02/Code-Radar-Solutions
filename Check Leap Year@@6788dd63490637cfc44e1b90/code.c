#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a); // You were missing this to actually read the year

    if ((a % 400 == 0) || ((a % 100 != 0) && (a % 4 == 0))) {
        printf("Leap Year\n");
    } else {
        printf("Not a Leap Year\n");
    }

    return 0;
}