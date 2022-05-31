// POINTERS //

#include<stdio.h>
void main()
{
 long int num =10 ;
 long int *ptr;
 printf("num's address : %p\n",&num);
 ptr=&num;
 
 printf(" pointer's address:%p\n",&ptr);
 
 printf(" pointer's size :%1d bytes\n", sizeof(ptr));
 printf("pointer's value :%p\n",ptr);
 printf("value pointed to : %1d\n",*ptr);
}

//  OUTPUT  //

num's address : 0x7fffb0760e58
pointer's address:0x7fffb0760e60
 pointer's size :8 bytes
pointer's value :0x7fffb0760e58
value pointed to : 10
