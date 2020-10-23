#include<stdio.h>
#include<string.h>
int main()
{
char string[30];
printf("Enter String : ");
gets(string);
printf("Upper case of string : ");
puts(strupr(string));
return 0;
}


