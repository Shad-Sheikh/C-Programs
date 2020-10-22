#include<stdio.h>
int main()
{
int last_month,current_month,total_amount,total_unit;
printf("Enter Last month and Current month unit\n");
scanf("%d%d",&last_month,&current_month);
total_unit = current_month - last_month;

if (total_unit>=0 && total_unit<=100)
{
total_amount = total_unit*2;
}

else if (total_unit>=101 && total_unit<=200)
{
total_amount = total_unit*3;
}

else if (total_unit>=201 && total_unit<=300)
{
total_amount = total_unit*4;
}

else if (total_unit>=300)
{
total_amount = total_unit*5;
}

printf("Total Amount is %d",total_amount);

}
