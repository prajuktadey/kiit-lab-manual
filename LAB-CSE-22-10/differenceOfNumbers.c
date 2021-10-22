//wap to find the difference of two float numbers and two integer numbers//
#include <stdio.h>

int main () 
{
   float num1= 46.87;
   float num2= 50.56;
   int num3= 87;
   int num4= 67;

   float difference1= num1-num2;
   int difference2= num3-num4;

   printf("The difference of the float literals provided is: %f\n", difference1);
   printf("The difference of the integer numbers provided is: %d", difference2);
   
   return 0;
}