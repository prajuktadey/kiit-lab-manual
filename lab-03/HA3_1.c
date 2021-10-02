#include <stdio.h>

/*WAP to check whether a character entered through 
keyboard is a digit, letter, special
character etc or not.*/

int main () 
{
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    int ascii= ch;

    if((ascii>=97 && ascii<=122) || (ascii>=65 && ascii<=90))
    {
        printf("The entered character is a letter.");
    }
    else if(ascii>=48 && ascii<=57)
    {
        printf("The entered character is a digit.");
    }
    else
    {
        printf("The entered character is a special character.");
    }

    return 0;
}