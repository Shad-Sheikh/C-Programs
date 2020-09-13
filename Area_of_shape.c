//Program for calculating area of different space in C    => Document section
#include <stdio.h>                                           //Link Section
int main()                                                   //main function with return type int
{
int choice,side,radius,length,breath;					               //declaration of variable
printf("Press 1 for Area of Square\nPress 2 for Area of Circle\nPress 3 for Area of Rectangle\n");
printf("Enter your Choice : ");
scanf("%d",&choice);                                         //Taking choice
	
  switch (choice)					                                   
	{
	
  case 1:                                                    //Area of square
		printf("Enter value of Side : ");
		scanf("%d",&side);
		printf("Area of Square is %d",side*side);
		break;

  case 2:                                                    //Area of Circle
		printf("Enter value of Radius : ");
		scanf("%d",&radius);
		printf("Area of circle is %f",3.14*radius*radius);
		break;

  case 3:                                                    //Area of reactangle
		printf("Enter value of Lenght and Breath : ");
		scanf("%d%d",&length,&breath);
		printf("Area of Reactangle is %d",length*breath);
		break;
		
		default:                                                  //default case
        printf ("Wrong Choice");
		break;
	}	
return 0;                                                     //return 0 after complinting the task
}
