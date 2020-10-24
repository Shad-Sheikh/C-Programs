#include<stdio.h>
struct address_detail
{
int house_no;
char city[50];
char state[50];
};

struct person_detail 
{
char name[50];
int age;
char contact_no[12];
struct address_detail address;
}person1;
int main()
{
printf("Enter name : ");
scanf("%s",&person1.name);
printf("Enter age : ");
scanf("%d",&person1.age);
printf("Enter contact no : ");
scanf("%s",&person1.contact_no);
printf("Enter house no : ");
scanf("%d",&person1.address.house_no);
printf("Enter city : ");
scanf("%s",&person1.address.city);
printf("Enter state : ");
scanf("%s",&person1.address.state);

printf("\n\nEntered data : ");
printf("\nName : %s",person1.name);
printf("\nAge : %d",person1.age);
printf("\nContact number : %s",person1.contact_no);
printf("\nHouse no : %d",person1.address.house_no);
printf("\nCity : %s",person1.address.city);
printf("\nState : %s",person1.address.state);
return 0;
}
