#include <stdio.h>
#include <math.h>

//WAP to find the roots of a quadratic equation ax2+bx+c=0 using if-else statement.//

int main () 
{
    float a,b,c,real,imag, dis,i1,i2,r1,r2;
    
    printf("Input values for a, b and c: ");
    scanf("%f%f%f",&a,&b,&c);

    dis=b*b-4*a*c;
    if(dis==0)
    {
    printf("The Roots are Equal.\n");
    r1=r2=-b/(2.0*a);
    printf("Roots are %.2f and %.2f", r1, r2);
    }
    else if(dis>0)
    {
    printf("The Roots are real & unequal.\n");
    r1=(-b+sqrt(dis))/(2.0*a);
    r2=(-b-sqrt(dis))/(2.0*a);
    printf("Roots are %.2f and %.2f", r1, r2);
    }
    else
    {
    printf("The Roots are imaginary.\n");
    real=-1/(2.0*a);
    dis=-dis;
    imag=sqrt(dis)/(2.0*a);
    printf("Root1= %5.2f +i%5.2f\n", real, imag);
    printf("Root2= %5.2f -i%5.2f\n", real, imag);
    }
    return 0;
    }