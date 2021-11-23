//wap to three inputs and print sum of the sides if those are sides of triangle else display 0//

#include <stdio.h>

int main () 
{
   int a,b, c, t, s;

   printf("Enter side-1: ");
   scanf("%d", &a);
   printf("Enter side-2: ");
   scanf("%d", &b);
   printf("Enter side-3: ");
   scanf("%d", &c);

   t=(((a+b)>c) && ((b+c)>a) && ((c+a)>b));
   s=t*(a+b+c);

   printf("\nDo they satisfy triangle property?1 for yes and 0 for no:  %d" ,t);
   printf("\nThe sum of the sides is: %d", s);
   return 0;
}