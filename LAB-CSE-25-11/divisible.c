//wap to find sum of all numbers divisible by 3 between 1-100
#include <stdio.h>

int main () 
{
   int sum=0;
   for(int i=1; i<=100; i++)
   {
      if(i%3==0) 
      {
          sum=sum+i;
      }
   }
   printf("The sum of all the numbers divisible by 3 between 1-100 are: %d", sum);
   
   return 0;
}