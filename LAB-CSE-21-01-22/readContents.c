//read contents of a file and find the sum
#include<stdio.h>

int main()
{
    FILE *fp;
    int a[10], sum = 0, i;
    fp = fopen("data.in", "r");
    for(i = 0;i<10;i++)
    {
        fscanf(fp, "%d", &a[i]);
        sum += a[i];
    }
    printf("Sum = %d", sum);
    for(i = 9;i>= 0;i--)
    {
        printf("\n%d", a[i]);
    }

    fclose(fp);
    return 0;
}