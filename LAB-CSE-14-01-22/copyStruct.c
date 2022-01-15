//struc var
#include <stdio.h>
#include <string.h>
int main()
{
 struct employee
 {
   char name[10];
   int age ;
   float salary;
  };
  
 struct employee e1 = {"Sanjay", 30, 55.50 } ;
 struct employee e2, e3;

 /* piece-meal copying */
 e2.age = e1.age ;
 e2.salary = e1.salary;

 /* copying all elements at one go */
 e3 = e1 ;
 strcpy (e2.name, e1.name );

 return 0;
}