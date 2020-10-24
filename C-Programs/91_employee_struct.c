#include<stdio.h>
struct record
{
	int eid;
	char name[25];
	float salary;
};
void main()
{
struct record employee[6];
int i;
for(i=0;i<6;i++)
	{
    printf("\n\nEnter data of %d Employee",i+1);
	printf("\nEntre employee eid :");
	scanf(" %d",&employee[i].eid);
	printf("Entre employee name :");
	scanf(" %s",&employee[i].name);
	printf("Entre employee salary :");
    scanf(" %f",&employee[i].salary);
	}

printf("\nEid\tName\tSalary");    
for(i=0;i<6;i++)
{
    if(employee[i].salary>20000)
	{
    printf("\n%d\t%s\t%.2f",employee[i].eid,employee[i].name,employee[i].salary);
	} 	
}

}
