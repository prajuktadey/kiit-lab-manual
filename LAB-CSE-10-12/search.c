//search an item
#include <stdio.h>

int main () 
{
   int i, item, m[20], pos=-1;
   for(i=0;i<20;i++)
   {
       printf("\nEnter elements of the array: ");
       scanf("%d", &m[i]);
   }
   printf("\nEnter item to be searched: ");
   scanf("%d", &item);


   for(i=0; i<20; i++)
   {
       if(item==m[i])
       {
           pos=i;
           break;
       }
   }

   if(pos==-1)
     printf("\nItem is not present.");
   else
     printf("\nItem is present in position: %d", pos);

   return 0;
}