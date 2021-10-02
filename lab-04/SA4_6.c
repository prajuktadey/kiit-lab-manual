#include <stdio.h>

//WAP to check whether a number n is prime number or not.//

int main()
{
int n,i,test=1;

printf("Enter a number: ");
scanf("%d", &n);

for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
test=0;
break;
}
}
if(test==1)
{
printf("The number %d is a prime.",n);
}
else
{
printf("The number %d is not a prime.",n);
}

return 0;
}