//wap to find the largest number from the 5*5 matrix
#include<stdio.h>
int main()
{
    int i,j,max=0;
    int a[5][5];

    printf("Enter the data: \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++){
            if(a[i][j]>max){
                max=a[i][j];
            }
        }
    }
   
   printf("\nEntered matrix: \n");
   for (int i = 0; i < 5; ++i)
   for (int j = 0; j < 5; ++j) 
   {
    printf("%d\t",a[i][j]);
    if (j == 5 - 1)
    printf("\n");
   }

    printf("\nThe largest number is: %d",max);
    return 0;
}