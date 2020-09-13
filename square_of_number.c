//Program for calculating a square of a whole number in C    => Document section
#include <stdio.h>                                           //Link Section
int main()                                                   //main function with return type int
{
int num,sqr;                                                  //varible declaration
printf("Enter a number for Square : "); 
scanf("%d",&num);                                             //input a number
sqr = num*num;                                                //calculating square of a number
printf("Square = %d",sqr);                                    // printing square
return 0;                                                     //return 0 after complinting the task
}
