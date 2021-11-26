//to display a pattern

/*AAAAAAAAAAAAAAAAAAAAA
AAAAAA AAAAAA AAAAAA 
AAAAA  AAAAA  AAAAA  
AAAA   AAAA   AAAA   
AAA    AAA    AAA    
AA     AA     AA     
A      A      A*/

#include <stdio.h>

int main () 
{

   for(int i=0; i<7; i++)
   {
       for(int j=0; j<7-i; j++)
       {
           printf("A");
       }
       for(int j=0; j<i; j++)
       {
           printf(" ");
       }
       for(int j=0; j<7-i; j++)
       {
           printf("A");
       }
       for(int j=0; j<i; j++)
       {
           printf(" ");
       }
       for(int j=0; j<7-i; j++)
       {
           printf("A");
       }

       printf("\n");
   }
   return 0;
}