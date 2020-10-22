#include<stdio.h>
int main()
{
int i,str=0,sum = 0,end;
printf("Starting point : ");
scanf("%d",&str);

for (i=str ; i<=(str+20) ; i++){
    if(i%2==0){
    sum=sum+i;
    }
}
printf("Sum of 10 even fromo %d = %d",str,sum);
}
