#include <stdio.h>

//WAP to find the largest between two numbers.//

int main () 
{
  
  int num1;
  int num2;

  printf("Enter a number: ");
  scanf("%d", &num1);

  printf("Enter a number: ");
  scanf("%d", &num2);

  if(num1>num2)
  {
    printf("The largest number among the two is: %d", num1);
  }
  else
  printf("The largest number between the two is: %d", num2);
  
  return (0);
}