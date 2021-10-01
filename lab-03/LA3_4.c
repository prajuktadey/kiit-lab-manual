#include <stdio.h>
#include <ctype.h>

/*WAP to read an alphabet from from the user 
and convert it into lowercase if the entered
alphabet is in uppercase, 
otherwise display an appropriate message.*/

int main () 
{
  char a;

  printf("Enter an alphabet: ");
  scanf("%c", &a);

  if(isupper(a))
  {
   a=tolower(a);
   printf("The said alphabet in lowercase is: %c", a);
  }

  else
  {
      printf("The said alphabet is already in lower-case.");
  }
  
   return 0;
}