#include <stdio.h>

//WAP to swap two integer numbers without using third variable.//

int main () 
{
  int a;
  int b;

  printf("Enter an integer number: ");
  scanf("%d", &a);

  printf("Enter an integer number: ");
  scanf("%d", &b);

  a = a + b; 
  b = a - b; 
  a = a - b; 
 
 printf("The swapped values for a and b: %d and %d ", a,b);
  
  return (0);
}