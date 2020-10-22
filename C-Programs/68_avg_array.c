#include<stdio.h>
void main()
{
int i,sum=0,avg;
int ary[10];
printf("Enter ten numbers : ");
for(i=0;i<10;i++)
  {
	scanf("%d",&ary[i]);
  }
for(i=0;i<10;i++)
	{
  sum+=ary[i];
	avg=sum/10;
	}
printf("\nSum of elements = %d",sum);
printf("\nAvrage of numbers = %d",avg);
}
