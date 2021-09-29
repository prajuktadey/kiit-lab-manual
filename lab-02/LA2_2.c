#include <stdio.h>

//WAP to convert temperature from centigrade to Fahrenheit scale.//

int main () 
{

  float centigrade;
  float fahrenheit;
  float result;

  printf("Enter temperature in the Centigrade scale: ");
  scanf("%f", &centigrade);

  result= ((centigrade* (9.0/5.0))+32.0);

  printf("The given temperature in Fahrenheit is: %f\n", result);
  
  return (0);
}