#include<stdio.h>
int main()
{
int num,i,term,arm = 0,tem,rem;
printf("Enter a no:");
scanf("%d",&num);
tem=num;
for(;1<=num;)
    {
    rem=num%10;
    term=rem*rem*rem;
    num=num/10;
    arm = arm+term;
    }
if (arm==tem)
    printf("%d is Armstrong number",tem);
else
    printf("%d is not Armstrong number",tem);
}
