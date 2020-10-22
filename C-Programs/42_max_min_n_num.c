#include<stdio.h>
int main()
{
int i,term,num,max = -999999,min = 999999;
printf("Enter no of terms : ");
scanf("%d",&term);
for(i=1;i<=term;i++)
{
    printf("Enter number : ");
    scanf("%d",&num);
    if(max<num){
        max = num;
    }
    if(min>num){
        min = num;
    }
}

printf("\nMaximum value = %d",max);
printf("\nMinimum value = %d",min);

}
