// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int x,y;
    printf("Enter a number between 0 to 39:");
    scanf("%d",&y);
    if (y/10==0)
    {
        printf("you have entered the number in the range 0 to 9\n");
    }
    else if (y/10==1)
    {
        printf("you have entered the number in the range 10 to 19\n");
    }
    else if (y/10==2)
    {
        printf("you have entered the number in the range 21 to 29\n");
    }
    else if(y/10==3)
        {
        printf("you have entered the number in the range 30 to 39\n");
            
        }
        else
        {
            printf("The number is not in the range\n");
        }
 return 0;
}
OUTPUT:
Enter a number between 0 to 39:6
you have entered the number in the range 0 to 9