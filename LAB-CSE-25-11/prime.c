//wap to display whether a number is prime or not
#include <stdio.h>

int main () 
{
   int num, flag=1;
   printf("Enter a number: ");
   scanf("%d", &num);

   for(int i=2; i<=num/2; i++)
   {
       if(num%i==0)
       {
           flag=0;
           break;
       }
   }
   if(flag)
   {
       printf("Prime Number.");
   }
   else
   {
       printf("Not Prime.");
   }

   return 0;
}