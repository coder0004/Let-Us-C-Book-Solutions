#include <stdio.h>
#include <string.h>

int main()
{
	char str1[80], str2[80];
	char *p, *s;
	
	printf("\nEnter sentence to remove vowels:-\n");
	gets(str1);
	
	p = str1;  // Base address of 1st string.
	s = str2;  // Base address of 2nd string.
	
	while(*p)  // *p access all the values of str1.
	{
		if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||
		*p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
		{
		   	p++;
		}
		else
		{
			*s++ = *p++;
		}
	}
	
	*s = '\0';
		
	printf("\nSentence after removing all vowels:-\n");
	puts(str2);
	
	return 0;
}
