#include<stdio.h>
int main()      
{
char ch;
printf ("Enter a charector : ");
scanf("%c",&ch);
if(ch>='a'&&ch<='z')                     
printf ("Lower Case");
else if(ch>='A'&&ch<='Z')
printf ("Upper Case");
else
printf("Wrong Choice");
}
