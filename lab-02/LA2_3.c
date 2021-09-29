#include <stdio.h>

//WAP to calculate perimeter of a circle.//

int main ()
{
  float radius;
  float perimeter;

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  perimeter= (2*(22.0/7.0)* radius);
  printf("The perimeter of the circle is: %f\n", perimeter);
   return (0);
}