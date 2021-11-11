/*wap to find out the equivalent resistance of 
three resistances for the series and parallel connections.
Find the current through the circuit if they are connected to a voltage source.*/

#include <stdio.h>

int main () 
{
   
   float rp, t, ip, is, r1, r2, r3,rs, voltage;

   printf("Enter resitance-1: ");
   scanf("%f", &r1);
   printf("Enter resitance-2: ");
   scanf("%f", &r2);
   printf("Enter resitance-3: ");
   scanf("%f", &r3);
   printf("Enter voltage: ");
   scanf("%f", &voltage);

   rs=r1+r2+r3;
   is=voltage/rs;
   t=(1/r1+ 1/r2+1/r3);
   rp=1/t;
   ip=voltage/rp;

   printf("\ncurrent(series) : %f", is);
   
   printf("\ncurrent(parallel): %f", ip);

   return 0;
}