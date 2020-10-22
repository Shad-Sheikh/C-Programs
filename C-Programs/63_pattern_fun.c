#include<stdio.h>
int pattern(int n)             
{
int i,j;
for(i=n;i>=1;i--)
  {
    for(j=i;j>=1;j--)
      printf("%d",j);
      printf("\n");
  }
}

void main()
{
int rows;
printf("Enter number of rows : ");
scanf("%d",&rows);
pattern(rows);                    
}
