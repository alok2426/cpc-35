/******************************************************************************
RELATIONAL OPERATOR

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a,b;
   printf("Enter the values of a and b\n");
   scanf("%d %d",&a,&b);
   if (a>b)
   printf("%d is greater then %d\n",a,b);
   else if (a<b)
   printf("%d is less then %d\n",a,b);
   else if(a<=b)
   printf("%d is less then or equal to %d\n",a,b);
   else if (a>=b)
   printf("%d is greater then or equal to %d\n",a,b);
   else if (a==b)
   printf("%d is equal to %d\n",a,b);
   else if (a!=b)
   printf("%d is not equal to %d\n",a,b);
    return 0;
}
OUTPUT:
Enter the values of a and b
10
15
10 is less then 15