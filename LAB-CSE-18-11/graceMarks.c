//wap to give 60 marks grace  if age is below 50 else give 40 marks grace
#include <stdio.h>

int main () 
{
   int marks,age;

   printf("Enter marks: ");
   scanf("%d", &marks);
   printf("Enter age: ");
   scanf("%d", &age);

   marks=marks+40;

   if(age<50)
   {
       marks=marks+20;
   }

   printf("\nFinal marks= %d", marks);
   return 0;
}