/*wap to use mallloc to an array of score of cricket of 10 matches 
of a player and find the average score*/
#include <stdio.h>
#include <stdlib.h>

int main () 
{
   int n, i, *ptr, sum=0;

   printf("Enter number of matches: ");
   scanf("%d", &n);
   ptr=(int *)malloc(n*sizeof(int));
   printf("Enter the score of 10 matches: ");

   for(i=0;i<n; i++)
   {
       scanf("%d", ptr+i);
       sum+= *(ptr+i);
   }

   printf("Sum: %d\n", sum);
   printf("Average: %f", sum/10.0);
   free(ptr);

   return 0;
}