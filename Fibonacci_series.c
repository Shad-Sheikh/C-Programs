//Program for printing Fibonacci series in C    => Document section
#include <stdio.h>                                           //Link Section
int main()                                                   //main function with return type int
{
int i , num , next_term , term1 = 0, term2 = 1;
printf("Enter a number of terms : ");
scanf("%d",&num);                                          //Taking input
    printf("Fibonacci Series : ");
    
    for(i=1 ; i<=num ; ++i)                                //for loop
    {
        printf("%d\t",term1);                               //printing fibonacci term
        //calculating next term
        next_term = term1 + term2;
        term1 = term2;
        term2 = next_term;
    }
    
return 0;                                                     //return 0 after complinting the task
}
