/*wap to find out the velocity and distance covered by 
a stone after time, if it is thrown with a initial velocity (u) 
from top of eiffel tower.*/

#include <stdio.h>
#define g 9.8

int main () 
{
   int u,t=0;
   float v,s;
   printf("Give the initial velocity: ");
   scanf("%d", &u);

   t++;
   v=u+g*t;
   s=(u*t+(g+t*t/2));
   printf("\nVelocity %fm/s and Distance convered=%f m after %d s", v,s, t);
   
   t++;
   v=u+g*t;
   s=(u*t+(g+t*t/2));
   printf("\nVelocity %fm/s and Distance convered=%f m after %d s", v,s, t);

   t++;
   v=u+g*t;
   s=(u*t+(g+t*t/2));
   printf("\nVelocity %fm/s and Distance convered=%f m after %d s", v,s, t);

   t++;
   v=u+g*t;
   s=(u*t+(g+t*t/2));
   printf("\nVelocity %fm/s and Distance convered=%f m after %d s", v,s, t);

   t++;
   v=u+g*t;
   s=(u*t+(g+t*t/2));
   printf("\nVelocity %fm/s and Distance convered=%f m after %d s", v,s, t);

   return 0;
}