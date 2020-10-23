#include<stdio.h>
#include<string.h>
int main()
{
char string1[30],string2[30],string[30];
printf("Enter 1st string : ");
gets(string1);
printf("Enter 2nd string : ");
gets(string2);
strcpy(string,string1);
printf("Marge string:",strcat(string,string2));
puts(string);
}
