#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter the character:");
	scanf("%c",&ch);
	
	if((ch > 0 && ch < 48 || ch > 57 && ch < 65 || ch > 90 && ch < 97 || ch > 122)?
	    printf("Character is a special symbol."):
		printf("Character is not a special symbol."));
		
        return 0;
}
