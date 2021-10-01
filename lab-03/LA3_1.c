#include <stdio.h>
// WAP to input any two integers distinct and display the greater of two integers.//
int main () 
{
    int a;
    int b;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Enter another number: ");
    scanf("%d", &b);

    if(a>b)
    {
        printf("The greater integer out of the two is: %d", a);
    }
    else
    {
         printf("The greater integer out of the two is: %d", b);
    }
    
    return 0;
}