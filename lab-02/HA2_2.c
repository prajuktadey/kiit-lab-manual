#include <stdio.h>

//WAP swap the contents of two variables by using a single statement for swap in C.//

int main () 
{

  int a;
  int b;
  
  printf("Enter an integer number: ");
  scanf("%d", &a);

  printf("Enter an integer number: ");
  scanf("%d", &b);

  b = (a + b) - (a = b);

  printf("The swapped values for a and b: %d and %d ", a,b);
  
   return 0;
}