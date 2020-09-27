//Program for printing table of number in C                   => Document section
#include <stdio.h>                                           //Link Section
int main()                                                   //main function with return type int
{
int i,num,value;                                             //declaring varible
printf("Enter a number : ");                           
scanf("%d",&num);                                            //taking input
    for(i=1 ; i<=10 ; i++)                                   //for loop
    {
        value=num*i;                                         //calculating muktiple
        printf("%d x %d = %d\n",num,i,value);                //printing table
    }
return 0;                                                     //return 0 after complinting the task
}
