#include<stdio.h>
void main()
{
int a,b;						 
printf("Enter  value of a and b : ");
scanf("%d%d",&a,&b);
printf("1st c = %d\n",a++ + ++b);						 
printf("2nd c = %d\n",++b - --b - --a + a++);	
printf("3rd c = %d\n",++a * --b - a++ / --a);	
}
