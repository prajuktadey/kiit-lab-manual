//write a menu driven program
#include <stdio.h>

int main () 
{
   int ch;
   printf("Menu: \n");
   printf("Choose 1 for Factorial of a number.\n");
   printf("Choose 2 to check whether a number is prime or not.\n");
   printf("Choose 3 to check whether the number is odd or not.\n");
   printf("Choose 4 to exit.\n");
   
   printf("Enter your choice: ");
   scanf("%d", &ch);

   switch(ch)
   {
       case 1:
       {
           int n;
           printf("Enter a number: ");
           scanf("%d", &n);
           int i;    
           int fact=1;
           for(i=1;i<=n;i++)
           {    
             fact=fact*i;    
           }    
           printf("Factorial of %d is: %d",n,fact); 
           break;   
       } 
       case 2:
       {
           int n, flag=1;
           printf("Enter a number: ");
           scanf("%d", &n);
        
           for(int i=2; i<=n/2; i++)
           {
            if(n%i==0)
            {
              flag=0;
              break;
            }
           }
           if(flag)
           {
             printf("Prime Number.");
           }
           else
           {
             printf("Not Prime.");
           }
        
           break;
       }
       
       
       case 3:
       {
           int n;
           printf("Enter a number: ");
           scanf("%d", &n);
           if(n%2!=0)
           {
               printf("The entered number is odd.");
           }
           else
           {
               printf("The entered number is not odd.");
           }
           break;
       }

       case 4:
       {
           break;
       }
       case 5:
       {
           printf("Wrong Choice.");
           break;
       }
   }

   return 0;
}