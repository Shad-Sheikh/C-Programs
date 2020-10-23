#include<stdio.h>
int main()
{
int i,j,row,column;
int mtr[10][10],trp[10][10];

printf("Enter tht number of rows and columns : ");
scanf("%d%d",&row,&column);

    printf("Enter the elements of matrix : ");
    
	for (i=0;i<row;i++)
        for (j=0;j<column;j++)
	      scanf("%d",&mtr[i][j]);

printf("Matrix : \n");
   for (i=0;i<column;i++)
   {
         for (j=0;j<row;j++)
         {
		  printf("%d\t",mtr[i][j]);
		 }
		  printf("\n");
   }

printf("\n\nTranspose : \n");
   for (i=0;i<column;i++)
   {
         for (j=0;j<row;j++)
         {
	      trp[i][j]=mtr[j][i];
		  printf("%d\t",trp[i][j]);
		 }
		  printf("\n");
   }      
}
