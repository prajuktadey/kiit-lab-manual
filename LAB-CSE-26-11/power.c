//exponent using for loop
#include <stdio.h>
int main()
{
    int a,b,power,i ;
    power = 1;

    printf("Enter value of a: " );
    scanf("%d",&a);

    printf("Enter value of b: ");
    scanf("%d",&b);

    for ( i = 1 ; i <= b ; i ++ )
    {
        power = power*a;
    }

    printf("%d^%d is %d\n",a,b,power);
    return 0;
}