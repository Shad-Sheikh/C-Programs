// NOTE : save the "file.txt" and this program in the same directery.
#include<stdio.h>
typedef struct {
int rollno;
char name[20];
char course[20];
float percent;
}student;

void main()
{
student s1,s;
FILE *fp,*fc;
fp = fopen("file.txt","w");

printf("Enter rollno : ");
scanf("%d",&s1.rollno);
printf("Enter name : ");
scanf("%s",&s1.name);
printf("Enter course : ");
scanf("%s",&s1.course);
printf("Enter percentage : ");
scanf("%f",&s1.percent);

fprintf(fp,"rollno = %d\nname = %s\ncourse = %s\npercentage = %f",s1.rollno,s1.name,s1.course,s1.percent);

fc = fopen("file.txt","r");
fscanf(fc,"%d%s%s%f",&s.rollno,&s.name,&s.course,&s.percent);
printf("\n\nrollno = %d\nname = %s\ncourse = %s\npercentage = %.2f",s1.rollno,s1.name,s1.course,s1.percent);
}
