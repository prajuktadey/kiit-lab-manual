#include <stdio.h>
int main()
{
	int i;

	// Direct initialization of 1-D char array
	char a[100] = { 'P', 'r', 'r', 'j', 'u', 'k','t', 'a', '\t', 'D', 'e', 'y'};

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
    char array[100];
    for (i = 0; i < 14; i++)
    {
        if (a[i]==a[i+1])
        {
            a[i] = a[i];
            a[i+2] = a[i+1];
            a[i+1] = ' ';
        }
        else
        {
            a[i] = a[i];
        }
    }

    for (i = 0; i < 15; i++)
    {
        printf("%c", a[i]);
    }
    printf("\n");

    //replace spaces by first character of my name 
    for (i = 0; i < 14; i++)
    {
        if (a[i]==' ')
        {
            a[i] = 'P';
        }
    }
    for (i = 0; i < 15; i++)
    {
        printf("%c", a[i]);
    }
   return 0;
}
