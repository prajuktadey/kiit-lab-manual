//people structure
#include <stdio.h>
#include <stdlib.h>
 
typedef struct 
{
    char name[30];
    int age;
    char sex[2];
    char dob[100];
    
}people; 

int main()
{
    //number of people
    int n=10;

    //array to store structure values of all people
    people details[n];
 
    //Taking each person detail as input
    printf("Enter %d details \n \n",n);
    for(int i=0; i<n; i++)
    {
        printf("Person %d:- \n",i+1);

        
        printf("Name: ");
        scanf("%s",details[i].name);

        printf("Age: ");
        scanf("%d",&details[i].age);

        printf("Sex: ");
        scanf("%s",details[i].sex);

        printf("Date of birth: ");
        scanf("%s",details[i].dob);

        //to consume extra '\n' input
        char ch = getchar();
 
        printf("\n");
    }

//Displaying person details
    
    printf("SL NO. \t Name \t Age \t DOB(DD/MM/YYYY\n");
    for(int i=0; i<n; i++)
    {
        printf("%d\t",i+1);

        printf("%s\t",details[i].name);
 
        printf("%d\t",details[i].age);
 
        printf("%s\t",details[i].dob);
 
        printf("\n");
    }

    return 0;
}
