//wap to find out the secondary voltage of a transformer if primary volatge, turns of a primary and secondary are given( input)

#include <stdio.h>

int main () 
{
   int pt,st,pv, sv;
   printf("Enter the primary voltage: ");
   scanf("%d", &pv);
   printf("\nEnter the number of primary turns: ");
   scanf("%d", &pt);
   printf("\nEnter the number of secondary turns: ");
   scanf("%d", &st);

   sv=((pv*st)/pt);
   printf("\nSecondary voltage is %d volts.", sv);
   return 0;
}