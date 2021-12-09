//display
#include<stdio.h>
int display2( int n)
{
  int i;
  char a;

  printf("ENTER VARIABLE TO BE PRINTED: ");
  scanf("%c",&a);
  
  for(i=0;i<n;i++)
  printf("%c",a);

  printf("\n");
  return 0;
}

void main()
{
  display2(30);
}