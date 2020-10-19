#include<stdio.h>
int main()
{
int num,first,second,thired,rev;
printf("Enter a number : ");
scanf("%d",&num);
first  = num/100;
second = (num/10)%10;
thired = num%10;
printf("Sum = %d",first+second+thired);
rev=thired*100+second*10+first*1;
printf("\nReverse = %d",rev);
}
