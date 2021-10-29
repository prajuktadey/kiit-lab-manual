//wap to find the distance travelled by an object
#include <stdio.h>
#define g 9.8

int main () 
{
   float s;
   float u;
   float t;

   printf("Enter the initial velocity: ");
   scanf("%f", &u);

   printf("Enter the time taken: ");
   scanf("%f", &t);

   s=(u*t)+(0.5*g*(t*t));

   printf("The distance travelled is: %f", s);

   return 0;
}