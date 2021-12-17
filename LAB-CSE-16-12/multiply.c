//wap to multiply a scalar to a matrix
#include<stdio.h>
int main()
{
 	int i, j, rows, columns, m[10][10], num;
    printf("Enter the number of rows: ");
    scanf("%d", &i);
    printf("Enter the number of columns: ");
    scanf("%d", &j);
 
 	printf("\nEnter the matrix elements \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      	   scanf("%d", &m[rows][columns]);
        }
  	}
   
 	printf("\nEnter the scalar value: ");
 	scanf("%d", &num);
 	  
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		m[rows][columns] = num * m[rows][columns];    
   	 	}
  	}
 
 	printf("\nThe result of a scalar matrix multiplication is : \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		printf("%d \t ", m[rows][columns]);
    	}
    	printf("\n");
  	}
 	return 0;
}