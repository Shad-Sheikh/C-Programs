// NOTE : save the "file.txt" and this program in the same directery and put some data in "file.txt"

#include<stdio.h>
int main()
{
char ch[100],cp[100];

FILE *fp;
int i=0;
fp=fopen("file.txt","r");
if(fp==NULL) {
	printf("File not found");
	return 0;
}
ch[i]=fgetc(fp);
while(!feof(fp)){
	if(ch[i] >= 97 && ch[i] <= 122)
	ch[i]=ch[i]-32;
	printf("%c",ch[i]);
	ch[i]=fgetc(fp);
}
fclose(fp);
}
