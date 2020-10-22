#include<stdio.h>
int main()
{
int sub1,sub2,sub3,sub4,sub5,total,percentage;
printf("Enter marks of five subject (out of 100) : ");
scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
total = sub1+sub2+sub3+sub4+sub5;
percentage = total / 5;
if (percentage>=60)
printf("Grade A");
else if (percentage>=50)
printf("Grade B");
else if (percentage>=40)
printf("Grade C");
else if (percentage<40)
printf("Grade D");   
}
