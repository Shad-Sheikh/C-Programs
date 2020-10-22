//Printing star pattern in C 
/*
pattern-1
*
**
***
****
*****
*/
#include <stdio.h>                                         
int main()                                                  
{
  int row,i;
	printf("Enter no of rows : ");
  scanf("%d",&row);                                         
	for (i=1;i<=5;i++)                                       
     {
	      for (int j=1;j<=i;j++)
	      printf("*");                                        
		    printf("\n");                                      
	   }
return 0;                                                    
}

//-------------------------------------------------------------------------------------------------------------------
/*
pattern-2
*
***    
*****  
*******
*/

#include<stdio.h>
int main()
{
int i,j=1;
for (i=1;i<=4;i++)
   {
	for(j=1;j<=i;j++)
    if(j==1)
	printf("*");
    else
	printf("**");
	printf("\n");
    j++;
    }
}

//-------------------------------------------------------------------------------------------------------------------
/*
pattern-3
123
456
789
*/

#include<stdio.h>
int main()
{
int i,j,c=0;
for (i=1;i<=3;i++)
   {
   for(j=1;j<=3;j++)
       printf("%d",++c);
       printf("\n");
   }
}

//-------------------------------------------------------------------------------------------------------------------
/*
pattern-4
5
54
543
5432
54321
*/

#include<stdio.h>
int main()
{
int i,j;
for (i=5;i>=1;i--)
   {
   for(j=5;j>=i;j--)
       printf("%d",j);
       printf("\n");
   }
}

//-------------------------------------------------------------------------------------------------------------------
/*
pattern-5
1
12
123
1234
*/

#include<stdio.h>
int main()
{
int i,j;
for (i=1;i<=4;i++)
   {
   for(j=1;j<=i;j++)
       printf("%d",j);
       printf("\n");
   }
}

//-------------------------------------------------------------------------------------------------------------------
/*
pattern-6
A
AB   
ABC  
ABCD 
ABCDE
*/

#include<stdio.h>
int main()
{
int i,j;
for (i=65;i<=69;i++)
   {
   for(j=65;j<=i;j++)
       printf("%c",j);
       printf("\n");
   }
}

//-------------------------------------------------------------------------------------------------------------------
/*
pattern-7
ABCDDCBA
 ABCCBA
  ABBA
   AA
*/

#include<stdio.h>
int main()
{
    int i,space,j,A = 65;
    for(i = 5; i >= 1; --i)
    {
        for(space = 0; space < 5-i; ++space)
            printf(" ");
        for(j = i; j <= 2*i-2; ++j)
            printf("%c",A++);
        for(j = 0; j < i-1; ++j)
            printf("%c",(A--)-1);
        printf("\n");
    A = 65;
    }
    return 0;
}

//-------------------------------------------------------------------------------------------------------------------
/*
pattern-8
*
**  
*** 
****
*** 
**  
*
*/

#include<stdio.h>
int main()
{
int i,j;
for (i=1;i<=4;i++)
{
   for(j=1;j<=i;j++)
       printf("*");
       printf("\n");
}

for (i=3;i>=1;--i)
{
   for(j=1;j<=i;++j)
    printf("*");
    printf("\n");
}

}
