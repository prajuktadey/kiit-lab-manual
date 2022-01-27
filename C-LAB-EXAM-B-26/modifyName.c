//question 2

#include <stdio.h>
#include <string.h>

//initialising my name
void main()
{
    char pr[12]="Prajukta Dey";
    int i=0,prc=0;
    char p[100];

    //storing my name in a new array
    while(pr[i]!=0)
    {
        p[i]=pr[i];
        i++;
    }
    i=0;
    //replacing vowels with a character
    while(p[i]!='\0')
    {
      if(p[i]=='a'|| p[i]=='e'|| p[i]=='i'|| p[i]=='o'|| p[i]=='u' || p[i]=='A'|| p[i]=='E'|| p[i]=='I'|| p[i]=='O'|| p[i]=='U')
      p[i]='o';
      i++;
    }

    p[i]='\0';
    printf("New name: %s\n",p);
    int j=0;
    char copy[1000];
    for(i=0;pr[i]!='\0';i++)
    { 
      copy[j]=pr[i];
      j++;
      if(pr[i]==' ')
      {
        for(int k=0;k<12;k++)
        { 
           copy[j]=' ';
           j++;
       }
      }
    }

    char temp;
    i=0;
    copy[j]='\0';
    printf("\n");
    printf("New string after adding the spaces: ");
    printf("%s\n", copy);
    j = strlen (copy) - 1;   
    while ( i < j)   
    {  
      //reversing a string
      temp = copy[j];  
      copy[j] = copy[i];  
      copy[i] = temp;  
      i++;  
      j--;   
    }  
    printf("\n");
    printf ("The reverse of the modified string: %s", copy);  
}