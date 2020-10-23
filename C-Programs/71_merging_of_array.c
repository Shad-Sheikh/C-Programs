#include<stdio.h>
int main()
 {
    int array1[20],array2[20],array[40],i,n1,n2;
    printf("Enter size of the 1st array : ");
    scanf("%d", &n1);
    printf("Enter elements in array : ");
    for(i=0; i<n1; i++)
    {
        scanf("%d",&array1[i]);
    }

    printf("Enter size of the 2nd array : ");
    scanf("%d",&n2);
 
    printf("Enter elements in array : ");
    for(i=0; i<n2; i++)
    {
        scanf("%d",&array2[i]);
    }
    
    for(i=0; i<n1+n2; i++)
    {
       if(i<n1)
          array[i]=array1[i];
          else
            array[i]=array2[i-n1];
 
    }

    printf("\nElements in 3rd array :");
	for(i=0;i<n1+n2;i++)        
    {
	printf("%d   ",array[i]);
    }

    return 0;
}
