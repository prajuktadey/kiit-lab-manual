#include <stdio.h>

/*WAP to display the grade system of KIIT University based on total marks secured by a
student in a semester. Use switch-case statement.*/

int main () 
{

    int total_mark,tm;

    printf("\nEnter total mark secured by a student: ");
    scanf("%d",&total_mark);

    tm=total_mark/10;

    switch(tm)
    {
    case 9: printf("Secured grade is O.");
    break;

    case 8: printf("Secured grade is E.");
    break;

    case 7: printf("Secured grade is A.");
    break;

    case 6: printf("Secured grade is B.");
    break;

    case 5: printf("Secured grade is C.");
    break;

    case 4: printf("Secured grade is D.");
    break;

    default: printf("FAIL");
    }

   return 0;
    }