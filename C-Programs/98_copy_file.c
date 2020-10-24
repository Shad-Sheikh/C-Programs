// NOTE : save the "file.txt" , file_copy.txt and this program in the same directery and put some data in "file.txt"
#include<stdio.h>
#include<string.h>
int main()
{
char main_content[100],copy_content[100];
FILE *fp;
FILE *fcp;
fp=fopen("file.txt","r");
while (fgets(main_content,99,fp)!=NULL)
{
strcpy(copy_content,main_content);
}
fcp=fopen("file_copy.txt","w");
fputs(copy_content,fcp);
printf("Operation Succefull");
fclose(fp);
}
