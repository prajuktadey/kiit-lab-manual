//quadratic
#include <stdio.h>
#include <math.h>
void roots(int a, int b, int c)
{
  int r1, r2;
  r1=(-b+sqrt((b*b)-4*a*c))/2*a;
  r1=(-b-sqrt((b*b)-4*a*c))/2*a;
  int d= b^2-4*a*c;
  if(d=0)
  {
   printf("The roots are equal and real.\n");
   printf("r1= %d, r2= %d", r1, r2); 
  }
  else if(d>0)
  {
   printf("The roots are not equal and real.\n");
   printf("r1= %d, r2= %d", r1, r2);   
  }
  else
  {
      printf("Not real.");
  }
}

int main () 
{
   int x,y,z;
   printf("Enter a, b and c: ");
   scanf("%d%d%d", &x, &y, &z);
   roots(x,y,z);
   return 0;
}