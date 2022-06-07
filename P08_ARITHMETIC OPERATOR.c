/******************************************************************************
ARITHMETIC OPERATOR

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a,b;
    float c;
    a=5;
    b=2;
    c=a+b;
    printf("sum of %d and %d is %.2f\n",a,b,c);
    c=a*b;
    printf("product of %d and %d is %.2f\n",a,b,c);
    c=a/b;
    printf("integer division of %d and %d is %.2f\n",a,b,c);
    c=(float)a/b;
    printf("real division of %d and %d is %.2f\n",a,b,c);
    
    return 0;
}
OUTPUT:
sum of 5 and 2 is 7.00
product of 5 and 2 is 10.00
integer division of 5 and 2 is 2.00
real division of 5 and 2 is 2.50
