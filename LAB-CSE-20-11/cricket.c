#include <stdio.h>

int main () 
{
   int score, sum_score=0, i=1;
   float avg_score;

   repeat:
   printf("\nEnter the score of player number %d: ", i);
   scanf("%d", &score);

   sum_score+=score;
   i++;
   if(i<=11) goto repeat;

   avg_score=sum_score/11.0;
   printf("Total score= %d and Average Score=%f", sum_score, avg_score);
   
   return 0;
}