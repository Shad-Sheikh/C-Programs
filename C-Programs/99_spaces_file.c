// NOTE : save the "MYbook.txt" and this program in the same directery and put some data in "MYbook.txt"
#include<stdio.h>
int main()
{
char ch;
FILE *fp;
fp=fopen("MYbook.txt","r");
int count = 0;
ch=fgetc(fp);
while(!feof(fp)){
	if(ch==32){
	count++;
	}
printf("%c",ch);
ch=fgetc(fp);
}
printf("\nNumber of blank spaces = %d",count);
fclose(fp);
}
