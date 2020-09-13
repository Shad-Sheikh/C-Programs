#include<stdio.h>
void main()
{
int num1, num2 ,tem;                   //Variables declaration
printf("Enter two numbers : ");         
scanf("%d%d", &num1, &num2);           //taking input
printf("Before Swapping  : \nFirst number = %d\nSecond number = %d\n",num1 ,num2);
//swaping
tem = num1;         
num1 = num2;
num2 = tem;
printf("\nAfter Swapping : \nFirst numbers = %d\nSecond number = %d\n",num1 ,num2);
}
