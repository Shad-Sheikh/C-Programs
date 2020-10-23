#include<stdio.h>
#include<string.h>
int main()
{
  char string1[100], string2[100];

  printf("Enter a string : ");
  gets(string1);

  strcpy(string2 , string1);
  strrev(string2); 

  if (strcmp(string1,string2) == 0)  
    printf("String is a palindrome.\n");
  else
    printf("String isn't a palindrome.\n");

  return 0;
}
