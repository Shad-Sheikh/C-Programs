#include<stdio.h>
int main()
{
float n,i,sum = 0,fact = 1;
printf("Enter number of term : ");
scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
    fact = fact*i;
    sum += 1/fact;
    }
printf("sum of series = %.2f",sum);
}
