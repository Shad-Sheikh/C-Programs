#include<stdio.h>
struct std_info
{
int rollno;
char name[25];
char course[25];
float per;
}student[5];
void main()
{
int i;
for(i=0;i<5;i++)
{
printf("\n\nEnter data of %d stident ",i+1);
printf("\nStudent roll no : ");
scanf("%d",&student[i].rollno);
printf("\nStudent name : ");
scanf("%s",&student[i].name);
printf("\nStudent course : ");
scanf("%s",&student[i].course);
printf("\nStudent percentage : ");
scanf("%f",&student[i].per);
}
printf("Roll no\tName\tCourse\tPercentage");
for(i=0;i<5;i++)
{
printf("\n%d\t%s\t%s\t%f",student[i].rollno,student[i].name,student[i].course,student[i].per);
}
}
