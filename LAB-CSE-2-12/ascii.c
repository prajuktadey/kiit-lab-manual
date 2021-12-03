//wap to print the ascii value
#include <stdio.h>

int main () 
{
   char ascii;
   
   for(int i=0; i<=255; i++)
   {
       printf("%c = %d\n", i,i);
   }
   return 0;
}