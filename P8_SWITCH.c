#include <stdio.h>
int main() 
{
    int x, y;
    printf("Enter a number between 0 to 39: ");
    scanf("%d",&y);
    x=y/10;
    switch(x)
    {
        case 0:
     printf("you have entered the number in the range of 0 to 9\n");
       break;
       case 1:
       printf("you have entered the number in the range of 10 to 19\n");
       break;
       case 2:
       printf("you have entered the number in the range of 20 to 29\n");
       break;
       case 3:
       printf("you have entered the number in the range of 30 to 39\n");
       break;
       default:
       printf("number not in range \n");
    }
    return 0;
    }
    
    /************OUTPUT************
    Enter a number between 0 to 39: 35
you have entered the number in the range of 30 to 39