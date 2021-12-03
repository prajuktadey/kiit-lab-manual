//wap for a matchstick game being played between the computer and a user
#include <stdio.h>
int main()  
{  
    int total = 21, userinput, comp;  
    while(1)
    {  
        printf("\nNumber of match sticks left: %d\n", total);  
        printf("Pick 1 or 2 or 3 or 4 matches:  ");  
        scanf("%d", &userinput);  
  
        if(userinput > 4 || userinput < 1)  
            continue;
        else
        {
            printf("Please follow the given instructions.");
        }  
  
        total = total- userinput;  
        printf("Number of matches left:  %d\n", total);  
        
        comp = 5 - userinput; 
        printf("The computer picked this: %d\n", comp);  
  
        total = total- comp;
        if(total == 1)  
        {    
            printf("You lost the game.\n");  
            break;  
        }  
    }  
  
    return 0;  
}  