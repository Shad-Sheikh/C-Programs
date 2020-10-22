#include<stdio.h>
int main()
{
int n,i,even=0,odd=0;
printf("Enter n number : ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{	
    if (i%2==0)
	even ++;
    else
    odd ++;
}
printf("\nnumber of even numbers are = %d",even);
printf("\nnumber of odd numbers are = %d",odd);

return 0;
}
