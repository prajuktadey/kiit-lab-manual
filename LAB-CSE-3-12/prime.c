//wap to print the prime numbers upto a range
#include <stdio.h>
void primeRange(int, int);  

int main () 
{
    int a, b; 
    printf("Enter starting range: ");
    scanf("%d", &a); 
    printf("Enter stopping range: ");
    scanf("%d", &b); 
    
    primeRange(a, b);  
    return 0;  
   
}
void primeRange(int x, int y)  
{  
    int flag=1;
    for(int i=x; i<=y; i++)
    {
     int flag=1;
     for(int j=2; j<=i/2; j++)
     {
       if(i%j==0)
       {
           flag=0;
           break;
       }
     }
   if(flag)
   {
       printf("%d\n", i);
   } 
   }  
}