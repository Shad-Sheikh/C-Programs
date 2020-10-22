#include<stdio.h>
void main()
{
float fahrenheit,celsius;						 
printf("Enter temprature in Fahrenheit : ");
scanf("%f",&fahrenheit);
//(°F − 32) × 5/9 = °C
celsius = (fahrenheit-32)*5/9;
printf("%.2fF is equal to %.2fC",fahrenheit,celsius);						 
}
