#include<stdio.h>
int main()
{
int num,i,term,arm = 0,tem ,rem;
for(num = 100 ; num<=999 ; num++){
tem=num;
while(1<=tem){
        rem=tem%10;
        term=(rem*rem*rem);
        tem=tem/10;
        arm += term;
    }
    if (arm==num){
    printf("\n%d is Armstrong number",num);
    arm = 0;
    }
    else{
    arm = 0;
    }
}
return 0;

}
