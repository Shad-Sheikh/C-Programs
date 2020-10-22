#include<stdio.h>
int main()          
{
int ones,tens,hundred,num,rev;
printf("Enter a three digit number : ");
scanf("%d",&num);
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
}
