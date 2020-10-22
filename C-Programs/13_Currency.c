#include<stdio.h>
int main()
{
int k,l,m,n,o,p,q,r,s,t,amt;
printf("Enter amount:");
scanf("%d",&amt);
//k,l,m,n,o,p,q,r,s,t all are temp variable
k=amt/2000;
amt=amt%2000;
printf("2000 notes=%d",k);

(amt>=500&&amt<2000);
l=amt/500;
amt=amt%500;
printf("\n500 notes=%d",l);

(amt>=200&&amt<500);
m=amt/200;
amt=amt%200;
printf("\n200 notes=%d",m);

(amt>=100&&amt<200);
n=amt/100;
amt=amt%100;
printf("\n100 notes=%d",n);

(amt>=50&&amt<100);
o=amt/50;
amt=amt%50;
printf("\n50 notes=%d",o);

(amt>=20&&amt<50);
p=amt/20;
amt=amt%20;
printf("\n20 notes=%d",p);

(amt>=10&&amt<20);
q=amt/10;
amt=amt%10;
printf("\n10 notes=%d",q);

(amt>=5&&amt<10);
r=amt/5;
amt=amt%5;
printf("\n5 notes=%d",r);

(amt>=2&&amt<5);
s=amt/2;
amt=amt%2;
printf("\n2 notes=%d",s);

(amt>=1&&amt<2);
t=amt/1;
amt=amt%1;
printf("\n1 notes=%d",t);

return 0;
}
