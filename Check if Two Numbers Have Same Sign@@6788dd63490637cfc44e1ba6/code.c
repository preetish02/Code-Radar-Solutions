#include<stdio.h>
int main(){
    int a,b;
    if(((a>0)&&(a>b))||((a<0)&&(b<0))){printf("Same Sign");}
    else{printf("Different Sign");}
    return 0;
}
