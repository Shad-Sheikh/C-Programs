#include<stdio.h>
void main()
{
int i,s=1,a,array[5],n;
 printf("Enter the number of elements : ");
 scanf("%d", &n);
 printf("Enter %d numbers ", n);
 for (i=0 ; i<n ; i++)
 scanf("%d", &array[i]);
 
 for(i=n-1;i>=0;i--)
  {
	printf("%d\t",array[i]);   
  }
}
