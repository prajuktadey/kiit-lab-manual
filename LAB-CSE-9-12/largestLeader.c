//function to find the largest number between n numbers and another function to count the number of leaders//
#include <stdio.h>
   int findmax(int n)
   {
      int nextnum, largest=0, i;
      for(i=0; i<n;i++)
      {
         printf("\nEnter the next number: ");
         scanf("%d", &nextnum);
         if(nextnum > largest)
             largest=nextnum;
      }
      return largest;
   }

   int countLeader(int n)
   {
      int nextnum, leader=0, i, count=0;
      for(i=0;i<n;i++)
      {
         printf("\nEnter next number: ");
         scanf("%d", &nextnum);
         if(nextnum>leader)
         {
            leader=nextnum;
            count++;
         }
      }
      return count;
   }

   #include <stdio.h>
   //function definition 
   int main()
   {
      int a;
      a=findmax(10);
      printf("\nMax is %d.", a);
      printf("\nMax is %d.", findmax(15));

      a= countLeader(20);
      printf("\nNo. of Leaders are %d", a);
      printf("\nNo. of Leaders are %d", countLeader(10));

      return 0;

   }
