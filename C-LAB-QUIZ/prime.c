//user-defined function to check if a number is prime or not in c 
int prime(n)
{
    int i, flag = 0;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
        return n;
    else
        return 0;
}

//calling the function
#include<stdio.h>
#include<math.h>
 int main()
 {
        int x,y;
        printf("Enter the lower limit: ");
        scanf("%d",&x);
        printf("Enter the upper limit: ");
        scanf("%d",&y);
        int a[20];
        int countPrime = 0;
        for(int i=x;i<=y;++i)
        {
            if(prime(i))
            {
                a[countPrime] = i;
                countPrime += 1;
            }
        }

        printf("The number of prime numbers are : %d\n", countPrime);
        for(int i=0; i<countPrime; ++i)
        {
            printf("%d ", a[i]);
        }
     
}




