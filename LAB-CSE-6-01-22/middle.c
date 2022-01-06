//wap to find the middle integer of an array of five integers using pointers//
#include <stdio.h>
int main() 
{
    int num[5];
    int *a;

    printf("Enter elements: ");
    for (int i = 0; i < 5; ++i)
        scanf("%d", num + i);

    printf("You entered: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d ", *(num + i));

    for (int i = 0; i < 5; i++) 
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (num[i] > num[j])
            {
                a =  num[i];
                num[i] = num[j];
                num[j] = a;
            }
        }
    }
 
    printf("\nThe numbers arranged in ascending order:\n");
    for (int i = 0; i < 5; ++i)
        printf("%d ", num[i]);

     
    a = num;
    printf("\nThe middle element is: %d", *(a+2));
   

    return 0;
}