#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter any character from the keyboard:");
	scanf("%c",&ch);
	
	if(ch > 64 && ch < 91)
	{
		printf(" The character is a uppercase letter.\n");
    }
	
	else if(ch > 96 && ch < 123)
	{
		printf("The character is a lowercase letter.\n");
    }
	
	else if(ch > 47 && ch < 58)
	{
		printf("The character is a digit.\n");
	}
	
	else if(ch >= 0 && ch < 48 || ch > 57 && ch < 65 || ch > 90 && ch < 97 || ch > 122 && ch < 127)
	{
		printf("The character is a special symbol.\n");
	}	
	return 0;
} 
