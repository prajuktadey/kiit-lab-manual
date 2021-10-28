//program displays the value of the expression
#include <stdio.h>

int main () 
{
   int x=18;
   float a=6.8,b=3.5,c=5.6,d;

   d=((3.0*a*x)+(10.0*b*x)+(20.0*c*x)+10.0);
   printf("The value of the expression is: %f", d);
   return 0;
}