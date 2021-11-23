/*wap to input three numbers, display 1 if 
those are sides of a right angled triangle else display 0 on the screen*/

#include <stdio.h>
#include <math.h>

int main () 
{
   float p,b,h;
   float sp, sb, sh;
   int t;

   printf("Enter side-1: ");
   scanf("%f", &p);
   printf("Enter side-2: ");
   scanf("%f", &b);
   printf("Enter side-3: ");
   scanf("%f", &h);

   sp=pow(p,2);
   sb=pow(b,2);
   sh=pow(h,2);

   t=((sp==(sb+sh)) || (sb==(sp+sh)) || (sh==(sp+sb)));

   printf("Display 1 if those are the sides of the triangle else display 0\n");
   printf("The displayed value is: %d", t);

   return 0;
}