//wap to print the array in reverse order
#include<stdio.h>
void main()
{
    int a[10],i;
    printf("Enter the elements of the array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=9;i>=0;i--)
    {
        printf("%d\t",a[i]);
    }
}