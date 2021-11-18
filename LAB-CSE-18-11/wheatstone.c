//wap to check whether the wheatstone bridge is balanced or not
#include <stdio.h>

int main () 
{
   float P, Q, R, S;

   printf("Enter resistance P: ");
   scanf("%f", &P);
   printf("Enter resistance Q: ");
   scanf("%f", &Q);
   printf("Enter resistance R: ");
   scanf("%f", &R);
   printf("Enter resistance S: ");
   scanf("%f", &S);

   if(P*S==R*Q)
   {
       printf("\nThe wheatstone bridge is balanced.");
       return 0;
   }
   printf("\nThe wheatstone bridge is NOT balanced. ");
   S=R*Q/P;
   printf("\nChoose S=%f to balance the bridge", S);
   return 0;
}