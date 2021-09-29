#include <stdio.h>

//WAP to swap two integer numbers using third variable.//

int main () 
{
  int a;
  int b;
  int c=0;

  printf("Enter an integer number in a: ");
  scanf("%d", &a);

  printf("Enter another integer number in b: ");
  scanf("%d", &b);


  c=a;
  a=b;
  b=c;

  printf("The value in a after being swapped: %d\n",a );
  printf("The value in b after being swapped: %d\n",b );

   return 0;
}