//display
#include<stdio.h>

int display(int n)
{
  int i;
  for(i=0;i<n;i++)
  printf("=");

  printf("\n");

  return 0;
}
void main()
{
  display(10);
}