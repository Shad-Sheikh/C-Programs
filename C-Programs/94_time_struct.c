#include<stdio.h>
struct time
{
int houre;
int min;
int sec;
};

struct time_date
{
char date[50];
struct time t;
};

void difference(struct time_date t1 , struct time_date t2)
{
float h = 0.0 ,s = 0.0,time = 0.0,m;

h = (t2.t.houre - t1.t.houre ) *60;
m = t2.t.min - t1.t.min;
s = (t2.t.sec - t1.t.sec) / 60.0;

time = h + m + s;

printf("\nTime difference is %.2f min",time);
}

void main()
{
  struct time_date t1 , t2 ;
  int i;

  printf("Enter date : ");
  scanf("%s",&t1.date);

  printf("\nEnter 1st time : ");
  printf("\nEnter houre : ");
  scanf("%d",&t1.t.houre);
  printf("Enter min : ");
  scanf("%d",&t1.t.min);
  printf("Enter sec : ");
  scanf("%d",&t1.t.sec);

  printf("\nEnter 2st time : ");
  printf("\nEnter houre : ");
  scanf("%d",&t2.t.houre);
  printf("Enter min : ");
  scanf("%d",&t2.t.min);
  printf("Enter sec : ");
  scanf("%d",&t2.t.sec);

difference(t1,t2);
}
