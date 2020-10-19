
#include<stdio.h>
int main()
{
int num1,num2,num3,num4;
printf("Enter three numbers : ");
scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
if (num1>num2)
{
  if (num1>num3)
  {
    if(num3>num4)
    printf("%d is largest number",num1);
    else
    printf("%d is largest number",num4);  
  }
}

if (num2>num1)
{
  if (num2>num3)
  {
    if(num2>num4)
    printf("%d is largest number",num2);
    else
    printf("%d is largest number",num4);  
  }
}

if (num3>num1)
{
  if (num3>num2)
  {
    if(num3>num4)
    printf("%d is largest number",num3);
    else
    printf("%d is largest number",num4);  
  }
}
}
