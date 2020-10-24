#include<stdio.h>
struct mailing_list
{
char name[25];
char mail_id[25];
};

void display(struct mailing_list mail)
{
printf("\nName : %s",mail.name);
printf("\nMail id : %s",mail.mail_id);
}

void main()
{
struct mailing_list mail;
printf("Enter your name : ");
scanf("%s",&mail.name);
printf("Enter your Mail id : ");
scanf("%s",&mail.mail_id);
display(mail);
}
