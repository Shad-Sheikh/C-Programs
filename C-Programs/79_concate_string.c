#include<stdio.h>
#include<string.h>
int main()
{          
char string1[25],string2[25],string[50]={0},i,j;
printf("Enter first string : ");
gets(string1);
printf("Enter second string : ");
gets(string2);

for(i=0,j=0 ; string1[i]!='\0' ; i++,j++)
{
string[j]=string1[i];
}

for(i=0;string[i]!='\0';i++,j++)
{
string[j]=string2[i];
}

printf("Combined string is : ");
puts(string);
return 0;
}
