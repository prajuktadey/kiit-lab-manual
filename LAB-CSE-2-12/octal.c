//convert from decimal to octal
#include<stdio.h>
int main()
{
    int decnum,rem,i=1;
    int bin=0;

    printf("\nEnter the decimal number: ");
    scanf("%d",&decnum);
    
    while(decnum>0)
   {
     rem=decnum%8;
     decnum=decnum/8;
     bin=bin + (i*rem);
     i=i*10;
   }
   
    printf("The octal equivalence: %d" ,bin);

    return 0;
}