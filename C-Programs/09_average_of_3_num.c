#include<stdio.h>
void main()
{
float n1,n2,n3,avg;						 
printf("Enter three No : ");
scanf("%f%f%f",&n1,&n2,&n3);
//calculating average
avg = (n1+n2+n3)/3;
printf("Average of %.2f ,%.2f and %.2f is %.2f",n1,n2,n3,avg);						 
}
