//wap to display the numbers 9-1 and 1-9
#include <stdio.h>

int main () 
{
   
   for(int i=1; i<=9; i++)
   {
       printf("%d\n", i);
   }
   
   for(int i=9; i>=1; i--)
   {
       printf("%d\n", i);
   }
   return 0;
}