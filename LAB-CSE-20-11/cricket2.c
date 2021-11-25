//enter score of 10 cricket players and count number of centuries scored. Discard the -ve score
#include <stdio.h>

int main () 
{
   int score, i=1, count=0;
   again:
   printf("\nEnter the score of next player number %d: ", i);
   scanf("%d", &score);
   if(score<0) goto again;

   count+=score/100;
   
   i++;
   if(i<=10) goto again;

   printf("Number of centuries made: %d", count);
   
   return 0;
}