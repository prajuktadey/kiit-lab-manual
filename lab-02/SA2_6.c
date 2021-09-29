#include <stdio.h>

/*WAP to convert given paisa into its equivalent rupee and paisa as per the following format.
Example. 550 paisa = 5 Rupee and 50 paisa*/

int main () 
{
  int paise;
  int rupee;
  int paisa;

  printf("Enter amount in paise: ");
  scanf("%d", &paise);

  rupee= paise/100;
  paisa= paise%100;

  printf(" %d paise= %d rupee and %d paisa", paise, rupee, paisa);

  return 0;
}