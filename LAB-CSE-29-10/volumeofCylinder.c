//wap to find the volume of a cylinder//
#include <stdio.h>
#define pi 3.14

int main () 
{
   float radius;
   float height;

   printf("Enter radius: ");
   scanf("%f", &radius);

   printf("Enter height: ");
   scanf("%f", &height);
   printf("\n");

   float volume= pi*radius*radius*height;

   printf("The volume of the cylinder is: %f", volume);

   return 0;
}