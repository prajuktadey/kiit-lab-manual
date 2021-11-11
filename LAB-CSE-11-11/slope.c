//given two points in 2D, wap to find the slope of the line

#include <stdio.h>

int main () 
{
   float x1, y1, x2, y2,m;

   printf("Enter the one point of x1 and y1: ");
   scanf("%f%f", &x1, &y1);
   printf("Enter the one point of x2 and y2: ");
   scanf("%f%f", &x2, &y2);

   m=(y2-y1)/(x2-x1);

   printf("\nThe slope of the line is %f", m);
   return 0;

}