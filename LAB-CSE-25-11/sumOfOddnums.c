//wap to enter 10 numbers and count the number of odd numbers and find their sum
#include <stdio.h>

int main () 
{
   int sum=0, n, count=0;
   for(int i=0; i<10; i++)
   {
       printf("\nEnter a number: ");
       scanf("%d", &n);
       if(n%2==1)
       {
           count++;
           sum=sum+=n;
       }
   }

   printf("Number of odd numbers and their sum is: %d and %d", count, sum);
   return 0;
}