//wap to display the position, size and type of images formed by a concave mirror
#include <stdio.h>

int main () 
{
   int po;

   printf("Press 1, if object is at infinity.\n");
   printf("Press 2, if object is beyond the center of curvature.\n");
   printf("Press 3, if object is at the center of curvature.\n");
   printf("Press 4, if object is between c and f.\n");
   printf("Press 5, if object is at focus.\n");

   scanf("%d", &po);

   if(po==1)
   {
       printf("The position of the image is AT THE FOCUS F\n");
       printf("The size of the image is HIGHLY DIMINISHED.\n");
       printf("The nature of the image is REAL AND INVERTED.\n");
   }
   else if(po==2)
   {
       printf("The position of the image is BETWEEN F AND C. \n");
       printf("The size of the image is DIMINISHED.\n");
       printf("The nature of the image is REAL AND INVERTED.\n");
   }
   else if(po==3)
   {
       printf("The position of the image is AT C. \n");
       printf("The size of the image is SAME SIZE.\n");
       printf("The nature of the image is REAL AND INVERTED.\n");
   }
   else if(po==4)
   {
       printf("The position of the image is BEYOND C. \n");
       printf("The size of the image is ENLARGED.\n");
       printf("The nature of the image is REAL AND INVERTED.\n");
   }
   else if(po==5)
   {
       printf("The position of the image is AT INFINITY. \n");
       printf("The size of the image is HIGHLY ENLARGED.\n");
       printf("The nature of the image is REAL AND INVERTED.\n");
   }
   else
   {
       printf("Invalid Input.");
   }
   return 0;
}