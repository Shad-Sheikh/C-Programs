#include<stdio.h>
int main()
{
int i,j,row,column;
int first[9][9],second[9][9],sum[9][9];
printf("Enter tht no of rows and columns of matrix : ");
scanf("%d%d",&row,&column);

printf("Enter the elements of first matrix : ");
for (i=0;i<row;i++)
    for (j=0;j<column;j++)
     	scanf("%d",&first[i][j]);
	
printf("Enter the elements of second matrix : ");
for (i=0;i<row;i++)
    for (j=0;j<column;j++)
	     scanf("%d",&second[i][j]);

for (i=0;i<row;i++)
    for (j=0;j<column;j++)
sum[i][j]=first[i][j]+second[i][j];

printf("Sum of entered matrices : \n");

for (i=0;i<row;i++){
	for (j=0;j<column;j++)
	{
		printf("%d\t",sum[i][j]);
	}
printf("\n");
}

}
