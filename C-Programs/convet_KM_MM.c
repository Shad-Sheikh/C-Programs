#include<stdio.h>
void main()
{
float KM,MM;						 
printf("Enter value in KM : ");
scanf("%f",&KM);
MM = KM * 1000000;
printf("%.2fKM is equal to %.2fMM",KM,MM);						 
}
