#include<stdio.h>
#include<math.h>

double power(double a,double b)          
{
double p;
p= pow (a , b);
return p;
}

int main()
{
double a,b,p;
printf("Enter two number : ");
scanf("%lf%lf",&a,&b);
p=power(a,b);                   
printf("power = %.2lf",p);
}
