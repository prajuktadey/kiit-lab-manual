//wap to display if the sides of the triangle are isosceles or not.

#include <stdio.h>

int main () 
{
   int a, b, c, t;

   printf("Enter side-1: ");
   scanf("%f", &a);
   printf("Enter side-2: ");
   scanf("%f", &b);
   printf("Enter side-3: ");
   scanf("%f", &c);

   t=((a==b) || (b==c) || (c==a));

   printf("Display 1 if it is an isosceles triangle or 0 if if it is not.\n");
   printf("The displayed value is: %d", t);

   return 0;
}