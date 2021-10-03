#include <stdio.h>

/* WAP to evaluate the equation y=x^n
where n is a non-negative integer.*/

#include <stdio.h>
int main()
{
int n,i;float x,y=1.0;
printf("Enter values for x and n: ");
scanf("%f%d",&x,&n);
for(i=1;i<=n;i++)
{
    y=y*x;
}
printf("%0.2f to the power %d is %0.2f",x,n,y);
return 0;
}