#include <stdio.h>

/*WAP to find the average mark of 5 subjects of a student and find the percentage. Assume full
mark of each subject is 100.*/

int main () 
{
  int m1;
  int m2;
  int m3;
  int m4;
  int m5;
  int avg;
  float per;

  printf("Enter marks for sub-1 out of 100: ");
  scanf("%d", &m1);

  printf("Enter marks for sub-2 out of 100: ");
  scanf("%d", &m2);

  printf("Enter marks for sub-3 out of 100: ");
  scanf("%d", &m3);

  printf("Enter marks for sub-4 out of 100: ");
  scanf("%d", &m4);

  printf("Enter marks for sub-5 out of 100: ");
  scanf("%d", &m5);

  avg= ((m1+m2+m3+m4+m5)/5);
  printf("The average marks of the student is: %d ", avg);

  per= (((m1+m2+m3+m4+m5)/500.0)*100.0);
  printf("The percentage of the student is: %f", per);

   return 0;
}