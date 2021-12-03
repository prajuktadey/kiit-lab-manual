//wap to calculate the pay
#include <stdio.h>

int main () 
{
   int hours, overamt;
   for(int i=1; i<=10; i++)
   {
    printf("Enter the number of hours:  ");
    scanf("%d", &hours);

    if(hours>40)
    {
        overamt=(hours-40)*12;
        printf("The overtime amount payed to %d is: %d\n", i, overamt);
    }
    else
    {
        printf("No overtime pay.");
    }

   }
   
   return 0;
}