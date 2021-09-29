#include <stdio.h>

//WAP to calculate area of a triangle whose base and height is given.//

int main () 
{

  float base;
  float height;
  float area;

  printf("Enter the base of the triangle: ");
  scanf("%f", &base);

  printf("Enter the height of the triangle: ");
  scanf("%f", &height);



  area= ((1.0/2.0)*(base*height));
  printf("The area of the triangle is: %f\n", area);
  return 0;
}
