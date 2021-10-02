#include <stdio.h>

/*WAP to display the grade system of KIIT University 
based on total marks secured by a student in a semester. 
Use else..if ladder statement.*/

int main () 
{
    int total_mark,tm;

    printf("\nEnter total mark secured by a student: ");
    scanf("%d",&total_mark);

    tm=total_mark/10;

    if(tm<=10 && tm>=9)
    {
        printf("Secured grade is O.");
    }
    else if(tm<9 && tm>=8)
    {
        printf("Secured grade is E.");
    }
    else if(tm<8 && tm>=7)
    {
        printf("Secured grade is A.");
    }
    else if(tm<7 && tm>=6)
    {
        printf("Secured grade is B.");
    }
    else if(tm<6 && tm>=5)
    {
        printf("Secured grade is C.");
    }
    else if(tm<5 && tm>=4)
    {
        printf("Secured grade is D.");
    }
    
    else
    {
        printf("Failed.");
    }
    
    return 0;
    }



