#include <stdio.h>

/*WAP to convert a quantity in meter entered through keyboard into its equivalent kilometer
and meter as per the following format. Example. 2430 meter = 2 Km and 430 meter.*/

int main () 
{
  int meter;
  int km;
  int m2;

  printf("Enter quantity in meter: ");
  scanf("%d", &meter);

  km=meter/1000;
  m2=meter%1000;

  printf("%d meter= %d Km and %d meter: ", meter, km, m2);
  
  return 0;
}