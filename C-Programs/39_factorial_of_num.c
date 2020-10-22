//Program for calculating factorial of a number in C    => Document section
#include <stdio.h>                                           //Link Section
int main()                                                   //main function with return type int
{
int num , i , fact = 1;
printf("Enter a number : ");
scanf("%d",&num);                                          //taking input
    for(i=1 ; i <= num ; i++)                               //for loop
        {
        fact = fact * i;                                    //calculating factorial
        }
    printf("Factorial of %d is %d",num,fact);               //printing factorial  
return 0;                                                     //return 0 after complinting the task
}
