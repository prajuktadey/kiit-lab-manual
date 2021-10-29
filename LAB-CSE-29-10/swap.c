//wap to swap two integer variables
#include <stdio.h>

int main () 
{
   int num1;
   int num2;
   int c;

   printf("Enter an integer number(num1): ");
   scanf("%d", &num1);

   printf("Enter another integer number(num2): ");
   scanf("%d", &num2);

   c=num1;
   num1=num2;
   num2= c;

   printf("The numbers in num1 is: %d and the number in num2 is: %d after being swapped.", num1,num2);
   return 0;
}