#include <stdio.h>                                           
int main()                                                   
{
int i,num,value;                                             
printf("Enter a number between 2 to 10 : ");                           
scanf("%d",&num);                                            
    for(i=1 ; i<=10 ; i++)                                   
    {
        value=num*i;                                        
        printf("%d x %d = %d\n",num,i,value);                
    }
return 0;             
}
