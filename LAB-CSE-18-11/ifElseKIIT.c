//wap to print kiit student if class is 1-12 else print kiit university student
#include <stdio.h>

int main () 
{
   int class;
   printf("Enter class: ");
   scanf("%d", &class);

   printf("\nKIIT");
   if(class>12)
   {
       printf(" University");
   }
   printf(" student");

   return 0;
}