//wap to find the sum of two integers using pointers
#include <stdio.h>
int main()
{
   int num1, num2, *p, *q, sum;

   printf("Enter num1: ");
   scanf("%d", &num1);
   printf("Enter num2: ");
   scanf("%d", &num2);


   p = &num1;
   q = &num2;

   sum = *p + *q;

   printf("Sum of the numbers:%d\n", sum);

   return 0;
}