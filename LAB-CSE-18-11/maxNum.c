//wap to print the largest among three numbers(a,b,c)//
#include <stdio.h>

int main () 
{
   int a, b,c, max;
   printf("\nEnter 3 numbers: ");
   scanf("%d %d %d", &a, &b, &c);
   max=a;

   if(b>max)
   {
       max=b;
   }

   if(c>max)
   {
       max=c;
   }
   
   printf("\nThe largest number is: %d", max);
   return 0;
}