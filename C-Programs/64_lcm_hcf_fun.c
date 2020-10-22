#include<stdio.h>
void LCM_HCF()         
{
 int num1,num2,min,i,hcf;
    printf("Enter two number : ");
    scanf("%d%d",&num1,&num2);

    min = (num1>num2) ? num1 : num2;

    while (1) 
	  {
        if (min%num1==0 && min%num2==0) 
		    {
            printf("\nThe LCM of %d and %d is %d.",num1,num2,min);
            break;
        }
        ++min;
    }

   for(i=1; i<=num1 || i<=num2; i++) 
   {
       if( num1%i == 0 && num2%i == 0 )
       hcf = i;
   }

   printf("\nThe HCF of %d and %d is %d.",num1,num2,hcf);
}

void main()
{
LCM_HCF();              
}
