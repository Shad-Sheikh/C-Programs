#include<stdio.h>
void reverse(char *string){
char rev_str[50] = {0};
int i,j,length = 0;

for (i=0;string[i]!='\0';i++)
   {
   if (string[i]!=32)
   length++;
   else
   continue;
   }
printf("Reverse of string : ");
for(j=length ; j >= 0 ; j--)
{
printf("%c",string[j]);
}
}

int main(){
char string[50];
printf("Enter a string : ");
gets(string);
reverse(string);
return 0;
}
