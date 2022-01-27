#include <stdio.h>
#include <math.h>
 int main()
 {
    int n,c,l=0;
    printf("Enter a number");
    scanf("%d",&n);
    c=n;
    while(c>0){
        l++;
        c=c/10;
    }
    int fd=(int)n/pow(10,l-1);
    printf("%d\n",fd);
    int fsd=(int)n/pow(10,l-2);
    int sd=fsd%10;
    printf("%d\n",sd);
    if(sd%2!=0 && (n%10)%2==0)
    printf("%f\n",(double)fd/(n%10));
    else 
    printf("Condition doesnt match");
}