//wap to display the gross amount
#include <stdio.h>

int main () 
{
   float bs, gs, da, hra;
   printf("Enter basic salary: ");
   scanf("%f", &bs);
   if(bs<1500)
   {
       hra=bs*10/100;
       da=bs*40/100;
   }
   else
   {
       hra=500;
       da=bs*50/100;
   }
   gs=bs+hra+da;
   printf("Gross Salary: Rs %f", gs);

   return 0;
}