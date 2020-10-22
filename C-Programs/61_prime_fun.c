#include<stdio.h>
int pri(int);                //Declaration of function

void main()
{
int num,pim;
printf("Enter a number : ");
scanf("%d",&num);
pim=prime(num);                     //function calling
if (pim==1)
printf ("%d is prime",num);
else
printf ("%d is not prime",num);
}

int prime(int n)             //Defination of function
{
int i;
for(i=2;i<=n;i++)
    {
       if(n%i==0)
       {
		break;
       }
    }
if (n==i)
return 1; 
}
