//wap to find the maximum of 5 numbers using an array
#include<stdio.h>
int main()
{
    int a[5],i,max;
    printf("Enter 5 numbers: \n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    printf("Maximum is: %d",max);
    return 0;
}