//display the pattern
#include<stdio.h>
int main()
{
  int i,j,n;   // n is the number of rows//
  printf("Enter the number of rows to be printed: ");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
     for(j=0;j<(n-1-i);j++)
        printf(" ");
     for(j=0;j<(2*i+1);j++)
        printf("$");
     for(j=0;j<(n-1-i);j++)
        printf(" ");
    for(j=0;j<(n-1-i);j++)
        printf(" ");
    for(j=0;j<(2*i+1);j++)
        printf("$");
    printf("\n");
}
return 0;
}