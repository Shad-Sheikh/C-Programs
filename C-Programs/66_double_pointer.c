#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);
	dobl(&num);
	printf("Values after operation = %d",num);
}
void dobl(int*n)
{
    *n=2*(*n);
}
