//wap to find the product of two integers and two float numbers//
#include <stdio.h>

int main () 
{
   float num1= 46.87;
   float num2= 50.56;
   int num3= 87;
   int num4= 67;

   float product1=1;
   int product2=1;

   product1= num1*num2;
   product2= num3*num4;

   printf("The product of the float literals provided is: %f\n", product1);
   printf("The product of the integer numbers provided is: %d", product2);
   
   return 0;
}