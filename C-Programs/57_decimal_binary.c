#include <stdio.h>                                           
int main() {
    int decimal_num,i;
    printf("Enter a decimal number : ");
    scanf("%d",&decimal_num);
    printf("Binary of %d is in reverse order : ",decimal_num);
    for(i=0;decimal_num>0;i++)    
    {    
    printf("%d",(decimal_num%2));    
    decimal_num=decimal_num/2;    
    }
}
