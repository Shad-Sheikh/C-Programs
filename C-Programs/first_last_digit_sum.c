#include<stdio.h>
int main()
{
int num,first_term,last_term,sum;
printf("Enter a four digit numberr : ");
scanf("%d",&num);
first_term=num/1000;
last_term=num%10;
sum = first_term + last_term;
printf("sum = %d",sum);
}
