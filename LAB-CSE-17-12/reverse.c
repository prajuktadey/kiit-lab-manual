//reverse of a 2D matrix (reversing the rows)
#include <stdio.h>

int main()
{
    int matrix[20][20], a, b;

    printf("Enter number of rows: ");
    scanf("%d",&a);
    printf("Enter number of columns: ");
    scanf("%d",&b);
    printf("\n");

    for(int i=0;i<a;i++)
    for(int j=0;j<b;j++)
    {
        printf("Enter value of [%d][%d]: ", i+1, j+1);
        scanf("%d",&matrix[i][j]);
    }

    printf("\nOriginal matrix: \n");

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<b;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nReversed matrix: \n");

    for(int i=0;i<a;i++)
    {
        for(int j=b-1;j>-1;j--)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}