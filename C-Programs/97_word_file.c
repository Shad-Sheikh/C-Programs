// NOTE : save the "file.txt" and this program in the same directery and put some data in "file.txt"
#include<stdio.h>
int main()
{
char ch;
FILE *fp;
fp=fopen("file.txt","r");
int count = 0;
ch=fgetc(fp);
while(!feof(fp)) {
	if(ch >= 97 && ch <= 122 || ch >= 65 && ch <= 90){
	count++;
	}
ch=fgetc(fp);
}
printf("\nNumber of Words = %d",count);
}
