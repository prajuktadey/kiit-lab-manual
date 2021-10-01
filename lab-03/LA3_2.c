#include <stdio.h>

/*WAP to input any three integers distinct 
and display the greater of three integers.*/

int main () 
{
    int num1;
    int num2;
    int num3;
    int greatest=0;

    printf("Enter an integer: ");
    scanf("%d", &num1);

    printf("Enter an integer: ");
    scanf("%d", &num2);

    printf("Enter an integer: ");
    scanf("%d", &num3);

    if(num1>num2)
    {
        greatest= num1;
    }
    else
    {
        greatest= num2;
    }
    if(greatest>num3)
    {
        greatest= greatest;
    }
    else
    {
        greatest=num3;
    }
    
    printf("The greatest number out of the three is: %d", greatest);

    return 0;
}