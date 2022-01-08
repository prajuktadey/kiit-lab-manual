/*
WAP to check a number is palindrome or not
*/

#include<stdio.h>

int pali(int *ptr){
    int t,r,sum;
    t = *ptr;
    while(*ptr>0){
        r = *ptr%10;
        sum = (sum*10)+r;
        *ptr = *ptr / 10;
    }
    if(t==sum){
        printf("palindrome");
    }
    else{
        printf("NOT a palindrome");
    }
    return 0;


}
int main(){
    int n;

    printf("Enter the num: ");
    scanf("%d",&n);
    pali(&n);
    return 0;
}