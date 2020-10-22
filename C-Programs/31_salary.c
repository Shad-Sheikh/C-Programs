#include<stdio.h>
int main()
{
float gross_salary,net_salary,basic_salary,da,ta,pf;
printf("Enter Basic salary :");
scanf("%f",&basic_salary);

if (basic_salary>=0 && basic_salary <= 10000)
{
ta = basic_salary * 10/100;
da = basic_salary * 5/100;
gross_salary = basic_salary + da + ta;
}

else
{
ta = basic_salary * 12/100;
da = basic_salary * 6/100;
gross_salary = basic_salary + da + ta;  
}

printf("Gross Salary = %.2f",gross_salary);
}
