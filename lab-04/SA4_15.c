#include <stdio.h>

//WAP to print the following pattern for n rows. Ex. for n=6 rows//

int main()
{
int i,j,n;

printf("Enter the number of rows: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
printf("%4d",(i+j+1)%2);
printf("\n");
}
return 0;
}