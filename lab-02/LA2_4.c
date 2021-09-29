#include <stdio.h>
#include <math.h>

//WAP to calculate area of a triangle whose three sides are given.//

int main () 
{
  float s1;
  float s2;
  float s3;
  float area;
  float sp;

  printf("Enter side-1 of the triangle: ");
  scanf("%f", &s1);

  printf("Enter side-2 of the triangle: ");
  scanf("%f", &s2);

  printf("Enter side-3 of the triangle: ");
  scanf("%f", &s3);

  sp=((s1+s2+s3)/2);

  area= (sqrt(sp*(sp-s1)*(sp-s2)*(sp-s3)));
  printf("The area of the triangle is: %f\n", area);
  
   return (0);
}