//wap to input even numbers of an array of n integers
//if last number is larger than the first number else print the odd numbers in reverse

#include <stdio.h>

int main () 
{
   int n;
   printf("Enter how many numbers: ");
   scanf("%d", &n);
   int a[n];

   for( int i=0;i<n; i++)
   {
       printf("Enter a number: ");
       scanf("%d", &a[i]);
   }

   if(a[0]<a[n-1])
   {
       for(int j=0;j<n;j++)
       {
           if((a[j])%2==0)
           {
              printf("%d ", a[j]);
           }
       }
       
   }
   
   else
   {
       for(int k=n-1; k>=0; k--)
       {
           if((a[k]%2)!=0)
           {
               printf("%d ", a[k]);
           }
       }
   }
   
   return 0;
}