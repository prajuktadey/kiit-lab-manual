//wap to check whether the input sides are the sides of a triangle

#include <stdio.h>

int main () 
{ 
   int a, b, c, t;

   printf("Enter side-1: ");
   scanf("%d", &a);
   printf("Enter side-2: ");
   scanf("%d", &b);
   printf("Enter side-3: ");
   scanf("%d", &c);

   t=(((a+b)>c) && ((b+c)>a) && ((c+a)>b));
   printf("\nDo they satisfy triangle property? 1 for yes and 0 for no:  %d" ,t);

   return 0;
}