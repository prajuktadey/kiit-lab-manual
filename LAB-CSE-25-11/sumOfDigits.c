//wap to find the sum of digits of an integer
#include <stdio.h>

int main () 
{
   int num, sum=0, d;
   printf("Enter a number: ");
   scanf("%d", &num);

   while(num>0)
   {
     d=num%10;
     sum=sum+d;
     num=num/10;
   }

   printf("The sum of digits is : %d", sum);
   return 0;
}