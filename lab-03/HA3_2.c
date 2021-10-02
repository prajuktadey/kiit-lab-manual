#include <stdio.h>

/*WAP which takes two integer operands and one operator form the user, 
performs the operation and then prints the result. 
(Consider the operators +,-,*, /, % etc). Use switch cse.*/

void showChoices();
int add(int, int);
int subtract(int, int);
int multiply(int, int);
int divide(int, int);
int modulus(int, int);

int main()
{
    int x, y;
    int choice;
    do
    {
        showChoices();
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                printf("Enter two numbers: ");
                scanf("%d%d", &x, &y);
                printf("Sum = %d\n", add(x, y));
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%d%d", &x, &y);
                printf("Difference = %d\n", subtract(x, y));
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%d%d", &x, &y);
                printf("Product = %d\n", multiply(x, y));
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%d%d", &x, &y);
                printf("Quotient =%d\n", divide(x, y));
                break;
            case 5:
                printf("Enter two numbers: ");
                scanf("%d%d", &x, &y);
                printf("Modulus/Remainder =%d\n", modulus(x, y));
                break;
            
            case 6:
                 break;

            default:
                printf("Invalid input\n");
        }
    }
    while (choice != 6);

    return 0;
}

void showChoices()
{
    printf("MENU\n");
    printf("1: Add\n");
    printf("2: Subtract\n");
    printf("3: Multiply\n");
    printf("4: Divide\n");
    printf("5: Modulus\n");
    printf("6: Escape\n");
    printf("Enter your choice :");
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a *b;
}

int divide(int a, int b)
{
    return a / b;
}

int modulus(int a, int b)
{
    return a % b;
}

   
   
   
   
   
   
