#include<stdio.h>
void add(int*m,int*n,int*s);
int main()
{
	int num1,num2,sum;
	printf("Enter two number : ");
	scanf("%d%d",&num1,&num2); 
	add(&num1,&num2,&sum);
	printf("\nsum %d and %d is %d" ,num1,num2,sum);
}
void add(int*m,int*n,int*s)
{
    *s=*m+*n;
}
