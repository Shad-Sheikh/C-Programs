#include<stdio.h>
int main()
{
int i, j, n , temp, array[25];

printf("Enter the number of elements to be store : ");
scanf("%d",&n);

printf("Enter %d elements : ",n);
for(i=0;i<n;i++)
{
	
	scanf("%d",&array[i]);
}

   
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
	{
        if(array[i]<array[j])
		{
            temp=array[i];
            array[i]=array[j];
            array[j]=temp;
        }
    }
}

for(i=0;i<1;i++)
printf("second highest number is = %d",array[i+1]);

return 0;
}
