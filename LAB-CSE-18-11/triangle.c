//given 3 points in 2D, display whether they form a triangle or not
#include <stdio.h>

int main () 
{
   int x1,y1,x2,y2,x3,y3;
   int m1, m2, m3;
   printf("Enter x1: ");
   scanf("%d", &x1);
   printf("Enter y1: ");
   scanf("%d", &y1);
   printf("Enter x2: ");
   scanf("%d", &x2);
   printf("Enter y2: ");
   scanf("%d", &y2);
   printf("Enter x3: ");
   scanf("%d", &x1);
   printf("Enter y3: ");
   scanf("%d", &y1);

   m1=(y2-y1)/(x2-x1);
   m2=(y3-y2)/(x3-x2);
   m3=(y1-y3)/(x1-x3);

   if(m1!=m2 && m2!=m3 && m3!=m1)
   {
       printf("\nThose 3 points form a traingle.");
   }
   else
   {
       printf("\nThose 3 points do NOT form a traingle.");
 
   }
   return 0;
}