#include<stdio.h>
int main()
{
int num;
printf("Enter a no : ");
scanf("%d",&num);

if (num > 1)
{
printf("Positive");
}

if (num < 0)
{
printf("Negative");
}

if (num == 0)
{
printf("Zero");
}

}
