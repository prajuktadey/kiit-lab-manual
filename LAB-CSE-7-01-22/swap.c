#include<stdio.h>
void swapByRef(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("After swapping:");
    printf("\nx = %d y = %d \n", *x, *y);
}

int main(){
    int a = 10 , b = 20;
    printf("Before swapping:");
    printf("\na = %d b = %d \n",a,b);
    swapByRef(&a,&b);
    return 0;
}