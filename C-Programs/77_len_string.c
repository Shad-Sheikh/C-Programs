#include<stdio.h>
int main()
{          
   char n[25],length=0,i;
   printf("Enter your name : ");
   gets(n);
   for (i=0;n[i]!='\0';i++)
   {
   if (n[i]!=32)
   length++;
   else
   continue;
   }
   printf("\nLenght of string = %d",length);
   return 0;
}
