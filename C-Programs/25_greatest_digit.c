#include<stdio.h>
int main()
{
int first,second,third,num;
printf("Enter Three digite number : ");
scanf("%d",&num);
first=num/100;
second=(num/10)%10;
third=num%10;
if (first>second)
  {
   if (first>third)
   printf("%d is greater digite",first);
   else
   printf("%d is greater digite",third);
  }
else
  {
   if (second>third)
   printf("%d is grater digite",second);
   else
   printf("%d is greater digite",third);
  }
}
