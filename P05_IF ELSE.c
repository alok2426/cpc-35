// Online C compiler to run C program online
#include <stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter the value of a and b \n");
    scanf("%d%d",&a,&b);
    sum= a + b;
    printf("Sum of a and b is %d\n",sum);
    if (sum>20)
    {
printf("Sum is greater then 20\n");
}
else if (sum>10)
{
 printf("sum is greater then 10\n");       
    }
}
OUTPUT:
Enter the value of a and b 
5 
10
Sum of a and b is 15
sum is greater then 10
