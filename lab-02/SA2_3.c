#include <stdio.h>

//WAP to calculate area of a circle.//

int main () 
{
  float radius;
  float area;

  printf("Enter the radius of the circle: ");
  scanf("%f", &radius);

  area= ((22.0/7.0)* radius* radius);
  printf("The area of the circle is: %f\n", area);

  return 0;
}
