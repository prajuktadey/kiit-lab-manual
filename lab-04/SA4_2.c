#include <stdio.h>

/*WAP to print all numbers within a given range. 
The range is given by user.*/

int main () 
{
    int a;
    int b;

    printf("Enter the lower range: ");
    scanf("%d", &a);

    printf("Enter the higher range: ");
    scanf("%d", &b);

    for(int i=a; i<=b; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}