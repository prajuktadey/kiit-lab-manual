//wap to display all prime numbers from 1-300
#include <stdio.h>
int main () 
{
   for(int i=1; i<=300; i++)
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

   return 0;
}