#include<stdio.h>
void divdig(int n)
{
    int i;
    int ld=0,fd=0,sd=0;
    float div;
    ld=n;
    fd=n;
    sd=n;
    while(fd>=10)
    {
        fd=fd/10;
    }
    ld=ld%10;
    sd=n/100;
    sd=sd%10;
    printf("first digit=%d \n",fd);
    printf("second digit=%d \n",sd);
    printf("last digit=%d \n",ld);
    float fd2=fd; 
    float ld2=ld;
    if(sd%2!=0 && ld%2==0)
    {
      div=fd2/ld2;
      printf("AFTER DIVIDING FIRST AND LAST DIGIT RESULT=%.2f",div);
    }
    else
      printf("CONDITION NOT SATISFIED");
 
}
 void main()
 {
    int a=918352;
    divdig(a);
 }