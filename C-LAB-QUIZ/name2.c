//space for consecutive characters
#include <stdio.h>
int main()
{
	int i;

	// Direct initialization of 1-D char array
	char a[100] = { 'P', 'r', 'a', 'j', 'u', 'k','t', 'a', ' ', 'D', 'e', 'y'};

	// print the words
    printf("The original array is: ");
	for (i = 0; i < 14; i++)
		printf("%c", a[i]);
        printf("\n");

    //count the number of vowels
    int count = 0;
    for (i = 0; i < 14; i++)
    {
        if (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            count++;
        }
    }

    printf("The number of vowels: %d\n", count);

    //insert blank space after every consecutive character
    char newarray[100];
    int j=0;
    for(i=0;i<24;i++)
    {
    newarray[j] = a[i];
    j++;
    newarray[j] = ' ';
    j++;
    }
    newarray[j] = '\0';

    for (i = 0; i < 24; i++)
    {
        printf("%c", newarray[i]);
    }
  printf("\n");

 //replace spaces by first character of my name 
    for (i = 0; i < 24; i++)
    {
        if (newarray[i]==' ')
        {
            newarray[i] = 'P';
        }
    }
    for (i = 0; i < 24; i++)
    {
        printf("%c", newarray[i]);
    }
   return 0;
}
