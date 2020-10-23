#include<stdio.h>
#include<string.h>
int main()
{
char a[25];
int i,space=0,consonant=0,number=0,vowel=0;
printf("Enter your choice:");
gets(a);
for(i=0;i<strlen(a);i++)
{
if (a[i]=='a' || a[i]=='e' || a[i]=='i'|| a[i]=='o' || a[i]=='u' || a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
vowel++;
else
consonant++;
if (a[i]>=48&&a[i]<=57)
number++;
if (a[i]==32)
space++;
}
printf("no of vowels %d",vowel);
printf("\nno of Consonant %d",consonant-number-space);
printf("\nno of Number %d",number);
printf("\nno of Space %d",space);
}
