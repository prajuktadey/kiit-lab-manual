//second digit is odd and last didgit is even
#include <stdio.h>

int main () 
{
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);
   DIV_DIG(num);

   return 0;
}

void DIV_DIG(int n)
{
  int copy=n;
  int copy2=n;
  float result;
  int first;
  int last;

  while(copy>0)
  {
    copy/=10;
    
  }
  first=copy;
  last=n%10;

  int second= (copy2%100)/10;
  if((second%2)!=0 && (last%2==0))
  {
    result= first/last;
  }
  
    printf("The result is: %d", second);
    printf("%d", last);
    printf("%f", result);
}
  
