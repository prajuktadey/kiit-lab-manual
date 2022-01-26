#include <stdio.h>

int main()
{
    int n,a;
    int c=0;
    int S=0; 
    int i=0;
    int f=0;
    scanf("%d%d",&n,&a);
    int n1=n;
    while(n1>0)
    {
        n1=n1/10;
        c++;
    }
    int A[c];
    while(n>0)
    {
        A[i]=n%10;
        n/=10;
        i++;
    }
    for(i=c-1;i>=0;i--)
    {
       
        if(A[i]!=a)
        {
            f=f*10+A[i];
        }
        else if(A[i]==a)
        {
            f=f*10+A[i];
            printf("%d\n",f);
            S+=f;
            f=0;
        }
        
    }
    if(f!=0)
    {
        printf("%d\n",f);
        S=S+f;
    }
    printf("Sum=%d",S);
    
    return 0;
}