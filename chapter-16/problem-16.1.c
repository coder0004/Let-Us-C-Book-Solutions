#include <stdio.h>
#include <string.h>

int main()
{
	char *str[]={
	"we will teach you how to....",
	" move a mountain", "level a building",
	"erase the past", "make a million",
	"...all through C!"};
	
	char str1[20], *p;
	int i;
	
	printf("\nEnter string to be search:");
	gets(str1); // or scanf("%s", str1);
	
	p = NULL;
	
	for(i=0; i<6; i++)
	{
		p = strstr(str[i], str1);
		if(p != NULL)
		{
			printf("(%s) found in the array.", str1);
			return 0;
		}
	}
	
	printf("(%s) not found in the array.", str1);
	
	return 0;
}
