#include<stdio.h>
int main()
{
float gross_salary,net_salary,basic_salary,da,ta,pf;
printf("Enter Basic salary :");
scanf("%f",&basic_salary);
ta = basic_salary * 10/100;
pf = basic_salary * 0.078;
da = 500;
gross_salary = basic_salary + da + ta;
net_salary = gross_salary - pf;

printf("Value of Gross Salary = %.2f \nValue of net Salary=%.2f",gross_salary,net_salary);
}
