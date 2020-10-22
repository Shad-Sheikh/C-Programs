#include<stdio.h>
int main()
{
int sub1,sub2,sub3,t,avg;
printf("Enter marks of three subjects (out of 100) : ");
scanf("%d%d%d",&sub1,&sub2,&sub3);

if (sub1 > 75 && sub1 > 75 && sub1 > 75){
  avg = (sub1 + sub2 + sub3) / 3;
}
else{
  printf("Marks is less than 75");
  return 0;
}

if (avg>80)
printf("\nPASS");
else 
printf("\nFAIL");   

}
