//wap to add element present in every row
//of a matrix and store it in an array using pointer
#include<stdio.h>
int main(){
    int i, j, a[4][5], b[4] = {0,0,0,0}; //assign values to array a
    printf("Enter the values for A:\n");
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nArray A is: \n");
    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int (*pa)[5], *pb;
    pa = a; //pointer to 5 element integer
    pb = b; //pointer to single integer element

    for(i=0;i<4;i++){
        for(j=0;j<5;j++){
            b[i] = b[i]+a[i][j];
        }
    }

    printf("\nNow the Array B is: \n");
    for(i=0;i<4;i++){
        printf("%d ",b[i]);
    }
    return 0;
}