//wap to display the time period

#include <stdio.h>
#include<math.h>

#define g 9.8
#define pi 3.14

int main () 
{
   int l;
   float tp1, tp2, tp3, tp4,tp5;

   tp1=2*pi*sqrt(10.0/g);
   printf("Length\t\t\t\t\t\tTime period\n");
   printf("10\t\t\t\t\t\t%f\n", tp1);

   tp2=(2.0*pi*(sqrt(20.0/g)));
   printf("20\t\t\t\t\t\t%f\n", tp2);

   tp3=(2.0*pi*(sqrt(30.0/g)));
   printf("20\t\t\t\t\t\t%f\n", tp2);

   tp4=(2.0*pi*(sqrt(40.0/g)));
   printf("20\t\t\t\t\t\t%f\n", tp2);

   tp5=(2.0*pi*(sqrt(50.0/g)));
   printf("20\t\t\t\t\t\t%f\n", tp2);

   return 0;
}