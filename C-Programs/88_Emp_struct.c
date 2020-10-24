#include<stdio.h>
struct emp_info
{
int empid;
char name[25];
float slry;
}record;

void main()
{
printf("Enter Employee Id :");
scanf("%d",&record.empid);
printf("Enter Employee Name :");
scanf("%s",&record.name);
printf("Enter Employee Salary :");
scanf("%f",&record.slry);
printf("\nEnter Employee Id :%d",record.empid);
printf("\nEnter Employee Name :%s",record.name);
printf("\nEnter Employee Salary :%.2f",record.slry);
}
