//wap to find the greater number out of the two
#include<stdio.h>

int main()

{
    int num1,num2;
    int *ptr1,*ptr2;

    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

	ptr1=&num1;
    ptr2=&num2;

	if(*ptr1>*ptr2)
    {
        printf("The greater number out of the two is: %d",*ptr1);
    }
    else
    {
	printf("The greater number out of the two is: %d",*ptr2);
    }

    return 0;

}