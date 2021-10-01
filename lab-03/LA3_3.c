#include <stdio.h>

//WAP to test whether a number entered through keyboard is ODD or EVEN.//

int main () 
{
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num%2==0)
    {
        printf("The number %d is even.", num);
    }
    else
    {
        printf("The number %d is odd.", num);
    }

    return 0;
}