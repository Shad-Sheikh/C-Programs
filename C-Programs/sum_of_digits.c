//Program for calculating sum of every digits of a number in C    => Document section
#include <stdio.h>                                           //Link Section
int main()                                                   //main function with return type int
{
int num , i , sum = 0 , rem;
printf("Enter a number : ");                             //taking input
scanf("%d",&num);
        while(1<=num)                                      //while loop
        {
        //summation of every digits one by one
        rem=num%10;                                 
        num=num/10;
        sum=sum+rem;
        }
printf("sum of digits of a number is : %d",sum);                 //printing sum
return 0;                                                     //return 0 after complinting the task
}
