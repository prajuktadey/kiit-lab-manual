//program displays the value of the expression
#include <stdio.h>

int main () 
{
   int a=2,b=3,c=4,d;
   d=(a++)+(--b)-(++c)-(++a);
   
   printf("The final value is: %d", d);

   return 0;
}