// Your code here...
#include <stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){scanf("%d",&arr[i]);}
    

   
        int counted[n]; 
    for (i = 0; i < n; i++) {
        counted[i] = -1; 
    }

  
    for (i = 0; i < n; i++) {
        if (counted[i] == -1) { 
            int count = 1;
            for (j = i + 1; j < n; j++) { 
                if (arr[i] == arr[j]) {
                    count++;
                    counted[j] = 0; 
                }
            }
            counted[i] = count; 
        }
    }
    
    int tobeprinted=0;
    int tb;
    int xxy;

    /*for(i=0;i<n;i++)
    {
        if(counted[i]>tobeprinted){tobeprinted=counted[i];tb=arr[i];}
        else if(counted[i]==tobeprinted){xxy=-1;}
    }*/

    int dn=0;

    for(i=0;i<n;i++)
    {
        if(counted[i]>n/2){printf("%d",arr[i]);dn=1;}
        
    }
    if(dn==0){printf("-1");}

    /*if(xxy==-1){printf("-1");}
    else{printf("%d",tobeprinted);}*/



    return 0;
}