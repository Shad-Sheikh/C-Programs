#include<stdio.h>
struct product
{
int pid;
char name[25];
int quantity;
float price;
}product[6],temp;

void main()
{
int i,j;
for(i=0;i<6;i++)
{
printf("\n\nEnte data of %d product",i+1);

printf("\nEnter product pid : ");
scanf("%d",&product[i].pid);
printf("Enter product name : ");
scanf("%s",&product[i].name);
printf("Enter product quantity : ");
scanf("%d",&product[i].quantity);
printf("Enter product price : ");
scanf("%f",&product[i].price);
}

    for (i = 0; i < 6 ; i++)
    {
        for(j=0;j < 6-i ; j++)
        {
                if ( product[j].name[0] > product[j+1].name[0] ) 
                {
                   temp = product[j];
                   product[j] = product[j+1];
                   product[j+1] = temp;
                }
        }
    }

printf("\npid\tname\tquantity\tprice");
for(i=0;i<6;i++)
{
printf("\n%d\t%s\t%d\t\t%.2f",product[i].pid,product[i].name,product[i].quantity,product[i].price);
}
}
