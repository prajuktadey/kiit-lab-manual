//wap to check
#include<stdio.h>
int main()
{
 	int i, j, r, c, a[5][4], o=0,e=0,p=0,n=0;
    printf("Enter the number of rows: ");
    scanf("%d", &i);
    printf("Enter the number of columns: ");
    scanf("%d", &j);
 
 	printf("\nEnter the matrix elements \n");
 	for(r = 0; r < i; r++)
  	{
   		for(c = 0;c < j;c++)
    	{
      	   scanf("%d", &a[r][c]);
        }
  	}

    for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
      if(a[i][j]>0)
      {
        p++;
      }
      else if(a[i][j]<0)
      {
        n++;
      }
    }

    for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) 
    {
      if(a[i][j]%2==0)
      {
        e++;
      }
      else
      {
        o++;
      }
    }

    printf("\nNumber of positive elements: %d", p);
    printf("\nNumber of negative elements: %d", n);
    printf("\nNumber of even elements: %d", e);
    printf("\nNumber of odd elements: %d", o);

  return 0;
}