#include <stdio.h>

/*WAP to convert given second into its equivalent hour, minute and second as per the
following format. Example. 7560 second = 2 Hour, 27 Minute and 40 Second*/

int main () 
{
  int sec;
  int hr;
  int min;
  int hrem;
  int t;
  int sec2;

  printf("Enter time in seconds: ");
  scanf("%d", &sec);

  hr = sec/3600;
  t = sec%3600;
  min = t/60;
  sec2 = t%60;

  printf("The time %d in hours, minutes and seconds: %d Hour, %d Minute and %d Second\n", sec, hr, min, sec2);
  return (0);
}