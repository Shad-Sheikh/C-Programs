#include<stdio.h>
void main()
{
  int array[10], max, n, i, loc = 1;
  printf("Enter the number of elements : ");
  scanf("%d", &n);
  printf("Enter %d numbers ", n);
  for (i=0 ; i<n ; i++)
    scanf("%d", &array[i]);
  max = array[0];
  for (i=1 ; i<n; i++)
  {
    if (array[i] > max)
    {
       max = array[i];
       loc = i+1;
    }
  }
  printf("Maximum element is present at location %d and its value is %d ", loc, max);
}
