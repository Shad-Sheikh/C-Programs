#include<stdio.h>
#include<string.h>
int main()
{
char ans[30],cor_ans[30]={"Dennis Ritchie"};
int temp;
printf("who is the inventor of C:\n");
gets(ans);
temp = strcmp(ans,cor_ans);
if (temp==0)
printf("good");
else
printf("try again");
}
