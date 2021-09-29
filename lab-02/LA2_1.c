#include <stdio.h>

//WAP to subtract a number from another number and display the result.//

int main () 
{
  int a;
  int b;
  int result;

  printf("Enter a number: ");
  scanf("%d", &a);

  printf("Enter another number: ");
  scanf("%d", &b);

  result= a-b;
  printf("%d - %d = %d\n",a, b, result );

  return (0);
}