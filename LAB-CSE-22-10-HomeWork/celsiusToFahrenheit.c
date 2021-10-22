//convert degree celsius to fahrenheit//
#include <stdio.h>

int main () 
{
   float celsius= 20.45;
   
   float fahrenheit= (celsius*(9.0/5.0)+32.0);

   printf("The given degree celsius %f in fahrenheit scale is: %f", celsius, fahrenheit);

   return 0;
}