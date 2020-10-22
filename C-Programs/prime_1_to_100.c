#include<stdio.h>
int main() 
{
int i,j,n;
printf("Enter a no : ");
scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
    for(j=2;j<=(i/j);j++)
        if(!(i%j))
            break;
        if(j>(i/j))    
            printf("%d is prime\n",i);
    }
}
