//use a recursive function to print the factorial of a number
#include <stdio.h>

int factorial(int n)
{
    if(n==1) 
     return 1;
    else
     return (n*factorial(n-1));
}

int main()
{
    int a, fact;
    printf("\nEnter any number: ");
    scanf("%d", &a);
    fact=factorial(a);
    printf("Factorial value= %d", fact);
    return 0;
}