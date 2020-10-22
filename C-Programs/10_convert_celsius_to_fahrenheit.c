#include<stdio.h>
void main()
{
float fahrenheit,celsius;					 
printf("Enter temprature in celsius : ");
scanf("%f",&celsius);
// (°C × 9/5) + 32 = °F
fahrenheit = (celsius * 9/5)+32;
printf("%.2fC is equal to %.2fF",celsius,fahrenheit);					 
}			
