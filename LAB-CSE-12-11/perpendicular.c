//wap to display 1 if two lines in 2-D are perpendicular to each other else any other integer value//

#include <stdio.h>

int main () 
{
   int x1, y1, x2, y2, t;
   int x3, y3, x4, y4;
   int m1, m2;

   printf("\nEnter x1: ");
   scanf("%d", &x1);
   printf("Enter y1: ");
   scanf("%d", &y1);
   printf("Enter x2: ");
   scanf("%d", &x2);
   printf("Enter y2: ");
   scanf("%d", &y2);

   m1= (y2-y1)/(x2-x1);
   printf("\n%d", m1);

   printf("\nEnter x3: ");
   scanf("%d", &x3);
   printf("Enter y3: ");
   scanf("%d", &y3);
   printf("Enter x4: ");
   scanf("%d", &x4);
   printf("Enter y4: ");
   scanf("%d", &y4);

   m2= (y4-y3)/(x4-x3);
   printf("\n%d",m2);

   t=(m1*m2)*-1;

   printf("\nDisplay 1 if lines are perpendicular or any other integer if they are not.\n");
   printf("\nThe displayed value is: %d", t);

   return 0;
}