#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str1[50], str2[50];
	int pos, num, i;
	
	printf("\nEnter a string:");
	scanf("%s", str1);
	
	printf("\nEnter position:");
	scanf("%d", &pos);
	
	printf("\nEnter no. of character to extract:");
	scanf("%d", &num);
	
	if(pos+num > strlen(str1))
	{
		printf("Invald input!");
		exit(0);
	}
	
	for(i=0; i<num; i++)
	{
		str2[i] = str1[pos+i];
	}
	str1[i] = '\0';
	
	printf("Extracted string:%s", str2);
	
	return 0;
}
