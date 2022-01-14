//frequency of a character in a string
#include <stdio.h>
#include <string.h>
int main () 
{
   char b[100], ch, i=0, count=0;
   printf("Enter a string: ");
   gets(b);
   printf("\nEnter a character to find frequency: ");
   scanf("%c", &ch);
   
   while(b[i])
      if(ch==b[i++])
      ++count;

   printf("Frequency of %c= %d", ch, count);
   return 0;
}