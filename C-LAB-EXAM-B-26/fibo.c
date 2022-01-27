//question 1

#include<stdio.h>
//recursive function to print the range of fibonacci number
int fib(int pr_m)
{
    if (pr_m <= 1)
        return pr_m;
    return fib(pr_m-1) + fib(pr_m-2);//recursion
}

//printing the sum and i-th position element 
int main ()
{
    int pr_r;
    printf("Enter roll number: ");
    scanf("%d",&pr_r);

    int pr_p; //ith term
    printf("Enter the i-th term to be returned: ");
    scanf("%d",&pr_p);

    //roll number modification
    int pr_m=pr_r%10+1;
    int pr_n=pr_r%10+10;
    int j=0;
    int pr_arr[100];

    for(int i=pr_m;i<=pr_n;i++)//range
    {
         pr_arr[j]=fib(i);//function call
         j++;
    }
    printf("Fibonacci series is: ");
    for(int k=0;k<10;k++)//till 10th term starting from my roll number it will print the series
    printf("%d ",pr_arr[k]);
    printf("\ni-th fib number is= %d \n",pr_arr[pr_p-1]);

    //sum calculation
    int pr_s=0;
    for(int i=0;i<j;i++)
    pr_s=pr_s+pr_arr[i];

    printf("sum= %d",pr_s);
    
    return 0;
}