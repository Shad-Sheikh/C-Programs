//Program for cheking a three digit number is palindrom or not in C        => Document section
#include <stdio.h>                                           //Link Section
int main()                                                   //main function with return type int
{
int ones,tens,hundred,num,rev;                                //varible declaration
printf("Enter a three digit number : ");
scanf("%d",&num);                                             //Taking a number

//reversing the number
  hundred=num/100;
  tens=(num/10)%10;
  ones=num%10;
  
  rev=ones*100+tens*10+hundred;

    if (num==rev)
    {
        printf("%d is Palindrome",num);
    }
    
    else
    {
        printf("%d is not Palindrome",num);
    }
    
return 0;                                                     //return 0 after complinting the task
}
