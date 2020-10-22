#include<stdio.h>
int fact(int);                //Declaration of function

void main()
{
int num,fac;
printf("Enter a number : ");
scanf("%d",&num);
fac=fact(num);                    //function calling
printf("factorial of %d is %d",num,fac);
}

int fact(int n)             //Defination of function
{
int f,i;
if (n==1)
    return (1);
else
    f=n*fact(n-1);
return f;
}
