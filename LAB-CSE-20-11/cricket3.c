//wap to count and display the number of players who scored a century.
#include <stdio.h>

int main () 
{
   int score, i=0, count=0;

   again:
   printf("\nEnter the score of player number %d:" ,i);
   scanf("%d", &score);
   if(score<0) goto again;

   if(score>=100)
       count++;

   i++;
   if(i<=10) goto again;

   printf("Total number of players who made a century: %d", count);
   
   return 0;
}