//Printing star pattern in C    => Document section
/*
Eg:
*
**
***
****
*****
*/
#include <stdio.h>                                           //Link Section
int main()                                                   //main function with return type int
{
  int row,i;
	printf("Enter no of rows : ");
  scanf("%d",&row);                                         //taking no of input
	for (i=1;i<=5;i++)                                        //for loop
     {
	      for (int j=1;j<=i;j++)
	      printf("*");                                        //printing star
		    printf("\n");                                       //next line
	   }
return 0;                                                     //return 0 after complinting the task
}
