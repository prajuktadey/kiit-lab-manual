#include <stdio.h>

//WAP to determine whether a year entered through the keyboard is a leap year or not.//

int main () 
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year%4==0 && year%100!=0)
    {
        printf("The said year is a leap year.");
    }
    else
    {
        printf("The said year is not a leap year.");
    }
    
    return 0;
}