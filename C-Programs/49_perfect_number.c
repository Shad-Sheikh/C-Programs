#include<stdio.h>
int main()
{
int num,p,i,tem,sum=0;
printf("Enter a number : ");
scanf("%d",&num);
tem=num;
for(i=1 ; i <= num ; i++)
    {
        if (i == num)
        break;
        if(num%i == 0)
        sum += i;
    }  

if( sum==tem )
printf("%d is Perfect number",tem);
else
printf("%d is not Perfect number",tem);
return 0;
}
