//gcd of 3 numbers
#include <stdio.h>
int gcd(int n1,int n2)
{
    return(n1%n2==0?n2:gcd(n2,n1%n2));
}

int main()
{
    int g,a,b,x,c;
    printf("Enter three positive numbers:");
    scanf("%d%d%d",&a,&b,&c);
    x=gcd(a,b);
    g=gcd(x,c);
    printf("GCD of %d,%d and %d is: %d",a,b,c,g); //gcd of 3 numbers
    return 0;
}