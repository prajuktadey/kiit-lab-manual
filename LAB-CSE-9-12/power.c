//recursive function to find the power of a number
int power(int base, int exp)
{
    if (exp == 0)
        return 1;
    else
        return base * power(base, exp - 1); //recursive call
}

#include <stdio.h>
int power(int n1, int n2);
int main() 
{
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);
    result = power(base, a);
    printf("%d^%d = %d", base, a, result);
    return 0;
}              
