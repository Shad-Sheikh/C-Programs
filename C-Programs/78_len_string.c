#include<stdio.h>
int main()
{          
char string1[25],i,string2[25] = {0};
printf("Enter your name : ");
gets(string1);

for(i=0;string1[i]!='\0';i++)
{
string2[i]=string1[i];
}

printf("Copied string is : ");
puts(string2);
return 0;
}
