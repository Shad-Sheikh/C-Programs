#include<stdio.h>
int main()
{
int i,j,k,row1,column1,row2,column2;
int first[9][9],second[9][9],mul[9][9];
printf("Enter tht no of rows and columns of 1st matrix : ");
scanf("%d%d",&row1,&column1);
printf("Enter the elements of first matrix : ");
for (i=0;i<row1;i++)
    for (j=0;j<column1;j++)
     	scanf("%d",&first[i][j]);
	
printf("Enter tht no of rows and columns of 2nd matrix : ");
scanf("%d%d",&row2,&column2);
printf("Enter the elements of second matrix : ");
for (i=0;i<row2;i++)
    for (j=0;j<column2;j++)
	     scanf("%d",&second[i][j]);		  

if (column1 == row2)
{
    for (i=0;i<row1;i++)
    {
        for (j=0;j<column2;j++)
        {
            mul[i][j]=0;
            for(k=0;k<column2;k++)
            mul[i][j]+=(first[i][k]*second[k][j]);
        }
        printf("\n");
    }      
for (i=0;i<row1;i++){
    for (j=0;j<column2;j++){
    printf("%d\t",mul[i][j]);
    }
    printf("\n");
  }
}

else
printf("Matrix cannot multiply");

}
