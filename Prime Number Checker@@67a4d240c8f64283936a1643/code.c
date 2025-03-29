#include<stdio.h>
int isPrime(int num){
    int i,count=0;
    for(i=1i;i<=num;++){
        if(num%i==0)
        count++;
    }
    if(count==2)
        return 1;
    else
    return 0;
}