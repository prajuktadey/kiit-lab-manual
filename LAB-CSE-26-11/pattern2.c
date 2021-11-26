//display a pattern

/*$        $        $        
$$$      $$$      $$$      
$$$$$    $$$$$    $$$$$    
$$$$$$$  $$$$$$$  $$$$$$$  
$$$$$$$$$$$$$$$$$$$$$$$$$$$
$$$$$$$  $$$$$$$  $$$$$$$  
$$$$$    $$$$$    $$$$$    
$$$      $$$      $$$      
$        $        $*/


#include <stdio.h>

int main()
{
    for(int i=1;i<=10;i+=2){
        for(int j=1;j<=i;j++)
        {
            printf("$");
        }
        for(int j=9;j>i;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("$");
        }
        for(int j=9;j>i;j--)
        {
            printf(" ");
        }
        for(int j=1;j<=i;j++)
        {
            printf("$");
        }
        printf("\n");
    }
    for(int i=8;i>=1;i-=2)
    {
        for(int j=1;j<i;j++)
        {
            printf("$");
        }
        for(int j=10;j>i;j--)
        {
            printf(" ");
        }
        for(int j=1;j<i;j++)
        {
            printf("$");
        }
        for(int j=10;j>i;j--)
        {
            printf(" ");
        }
        for(int j=1;j<i;j++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}