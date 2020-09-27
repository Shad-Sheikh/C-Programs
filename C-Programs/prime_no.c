//Program for cheking prime number in C    => Document section
#include <stdio.h>                                           //Link Section
int main()                                                   //main function with return type int
{
int num,i;
printf("Enter a number : ");
scanf("%d",&num);
    for(i=2 ; i<=num ; i++)
        {
            if(num%i==0)
            {
		    break;
            }
        }
    if (num==i)
        printf ("%d is prime",num);
    else
        printf ("%d is not prime",num);
return 0;                                                     //return 0 after complinting the task
}
