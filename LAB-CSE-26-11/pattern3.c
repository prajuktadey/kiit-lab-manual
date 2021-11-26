/* 1         1    
   222       222   
  33333     33333  
 4444444   4444444 
555555555 555555555
 4444444   4444444 
  33333     33333  
   222       222   
    1         1 */   

#include <stdio.h>

int main () 
{
   int n=5,j;
    for(int i=0; i<n; i++)
    {
        for(j=0; j<n-i-1; j++)
            printf(" ");
        for(j=0; j<2*i+1; j++)
            printf("%d", i+1);
        for(j=0; j<n-i-1; j++)
            printf(" ");
        for(j=0; j<=(n-i-1); j++)
            printf(" ");
         for(j=0; j<2*i+1; j++)
            printf("%d", i+1);
        
        printf("\n");
    }

    for(int i=n-2; i>=0; i--)
    {
        for(j=0; j<n-i-1; j++)
            printf(" ");
        for(j=0; j<2*i+1; j++)
            printf("%d", i+1);
        for(j=0; j<n-i-1; j++)
            printf(" ");
        for(j=0; j<=(n-i-1); j++)
            printf(" ");
        for(j=0; j<2*i+1; j++)
            printf("%d", i+1);

        printf("\n");
        
    }
       
    return 0;
}