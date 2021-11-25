//wap to check whether the number is palindrome or not
#include<stdio.h>  
int main()    
{    
   int num,rev,sum=0,copy;   

   printf("Enter a number: ");    
   scanf("%d",&num); 

   copy=num; 

   while(num>0)    
   {    
     rev=num%10;    
     sum=(sum*10)+rev;    
     num=num/10;    
   }   

   if(copy==sum)    

   printf("The number is a Palindrome Number. ");    
   else    
   printf("Not a Palindrome Number.");   
   return 0;

}   