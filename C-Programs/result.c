#include<stdio.h>
int main()
{
int sub1,sub2,sub3,sub4,sub5,total,percent,paas,fail;
printf("Enter five subject marks : ");
scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
total = sub1+sub2+sub3+sub4+sub5;
printf("Total marks = %d",total);
percent = total / 5;
printf("\nPercentege = %d",percent);
(percent>=33)?printf("\nResult = PASS"):printf("\nResult = FAIL");
}
