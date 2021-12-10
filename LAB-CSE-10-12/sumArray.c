//wap to print the sum of 10 numbers using an array

#include <stdio.h>
int main()
{
    int i,sum=0;
    int a[10];
    printf("Enter 10 numbers: \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of 10 numbers is %d",sum);
    return 0;
}
