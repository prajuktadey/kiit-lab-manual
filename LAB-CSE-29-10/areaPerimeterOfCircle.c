//wap to find area and perimeter of a circle//
#include <stdio.h>
#define pi 3.14

int main () 
{
   float radius;
   float area;
   float perimeter;

   printf("Enter the radius of the circle: ");
   scanf("%f", &radius);

   area= pi*radius*radius;
   perimeter= 2*pi*radius;

   printf("The area of the circle is: %f", area);
   printf("\n");
   printf("The perimeter of the circle is: %f", perimeter);

   return 0;
}