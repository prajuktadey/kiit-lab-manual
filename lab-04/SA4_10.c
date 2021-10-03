#include <stdio.h>

/*WAP to sum the following series 
S=1+(1+2)+(1+2+3)+...+(1+2+3+...+n)*/

int main () 
{
int n,i,j,sum,totalsum=0;

printf("Enter the value of n: ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
sum=0;
for(j=1;j<=i;j++)
sum=sum+j;
totalsum=totalsum+sum;
}
printf("The sum of the given series is %d", totalsum);
return 0;
}
   
