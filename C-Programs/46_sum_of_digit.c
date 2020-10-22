#include<stdio.h>
int main()
{
int num , i , sum = 0 , rem;
printf("Enter a number : ");
scanf("%d",&num);
        while(1<=num)
        {
        rem=num%10;
        num=num/10;
        sum=sum+rem;
        }
printf("sum of digits of a number is : %d",sum);
}
