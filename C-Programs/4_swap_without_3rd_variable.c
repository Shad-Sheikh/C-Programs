#include<stdio.h>
void main()
{
int num1, num2;
printf("Enter two numbers : ");
scanf("%d%d", &num1, &num2);
printf("Before Swapping  :- \nFirst number = %d\nSecond number = %d\n",num1 ,num2);
//swaping logic
num1 = num1+num2;
num2 = num1-num2;
num1 = num1-num2;
printf("\nAfter Swapping :- \nFirst numbers = %d\nSecond number = %d\n",num1 ,num2);
}
