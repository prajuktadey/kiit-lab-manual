//convert from decimal to binary
#include<stdio.h>
int main()
{
    int decnum,rem,i=1;
    int bin=0;

    printf("\nEnter the decimal number: ");
    scanf("%d",&decnum);
    
    while(decnum>0)
   {
     rem=decnum%2;
     decnum=decnum/2;
     bin=bin + (i*rem);
     i=i*10;
   }
   
    printf("The binary equivalence: %d" ,bin);

    return 0;
}