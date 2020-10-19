#include<stdio.h>
void main()
{
float principle,rate,time,simple_interest;						 
printf("Enter  value of principle ,rate and time for Simple Interest : ");
scanf("%f%f%f",&principle,&rate,&time);
//calculating  SI = P × R × T/100
simple_interest = ( principle * rate * time ) / 100;
printf("Simple Interest = %.2f",simple_interest);						 
}
