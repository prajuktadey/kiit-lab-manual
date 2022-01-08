//Find sum of first n elements of two arrays,return 0(equal sum),1(1st array sum is larger),
//or (2nd array sum is larger)
#include<stdio.h>
int large_sum(int *a, int *b, int n){
    int i,s1 = 0, s2 = 0;
    for(i = 0;i<n;i++){
        s1 += a[i]; // a[i] same as *(a+i)
        s2 += b[i];
    }
    if(s1==s2){
        return 0;
    }
    else if(s1>s2){
        return 1;
    }
    else{
        return 2;
    }
}
int main()
{
    int x[20],y[15],g;
    //Enter data to arrays

    printf("Enter the value for A: \n");
    for(int i=0;i<20;i++){
        scanf("%d",&x[i]);
    }
    printf("\nEnter the value for B: \n");
    for(int i=0;i<15;i++){
        scanf("%d",&y[i]);
    }

    g = large_sum(x,y,10);//&x and x in arrays is similar
    //as the x points address of 1st element of the array
    if(!g){
        printf("Both sums are equal");

    }
    else if(g==1){
        printf("x is greater than y");
    }
    else{
        printf("y is greater than x");

    }
    return 0;
}