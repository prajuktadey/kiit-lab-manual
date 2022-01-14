/*wap to compare two strings s1 and s2 if both the strings are same return -1
if not equal return the position where the 1st mismatch occurs*/

#include <stdio.h>
#include <string.h>

int main()
{
  	char str1[100], str2[100];
  	int result, i;
 
  	printf("\nEnter the first string :  ");
  	gets(str1);
  	
  	printf("\nEnter the second string :  ");
  	gets(str2);
  	
  	for(i = 0; str1[i] == str2[i] && str1[i] == '\0'; i++);
		   
  	if((str1[i] < str2[i]) || (str1[i]> str2[i]))
   	{
   		printf("The position where the first mismatch occurs is: %d", i+1);
	}
	
	else
   	{
   		printf("%d", -1);
	}
  	
  	return 0;
}