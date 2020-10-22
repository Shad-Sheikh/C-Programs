#include<stdio.h>
int main()
{
float n,i,sum =0;
printf("Enter number of term : ");
scanf("%f",&n);
for(i=1;i<=n;i++)
{
sum += 1/i;
}

printf("sum of series = %.2f",sum);
}
