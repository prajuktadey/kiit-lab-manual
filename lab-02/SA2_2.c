#include <stdio.h>

//WAP to find centigrade for a given Fahrenheit temperature.//

int main () 
{
  float centigrade;
  float fahrenheit;
  float result;

  printf("Enter temperature in the Fahrenheit scale");
  scanf("%f", &fahrenheit);

  result= (fahrenheit - 32.0) * 5/9;

  printf("The given temperature in Centigrade is: %f\n", result);
  
  return 0;
}