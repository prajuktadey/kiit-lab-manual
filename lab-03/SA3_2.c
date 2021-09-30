#include <stdio.h>
#include <ctype.h>

/*WAP to read an alphabet from the user and convert it into uppercase if the entered alphabet
is in lowercase, otherwise display an appropriate message.*/

int main () 
{

  char a;
  

  printf("Enter an alphabet: ");
  scanf("%c", &a);
  
  int ascii= a;

  if(ascii>=97 && ascii<=122)
  {
  a=toupper(a);
  printf("%c", a);
  }
  else
  printf("The character is already in UpperCase. ");

  return (0);
}