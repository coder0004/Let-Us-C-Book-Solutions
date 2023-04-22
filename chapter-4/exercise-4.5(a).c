#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter the character:");
	scanf("%c",&ch);
	
	if((ch >96 && ch <123)?
	    printf("Character is lower case alphabet."):
		printf("Character is not lower case alphabet."));
		
		return 0;
}
