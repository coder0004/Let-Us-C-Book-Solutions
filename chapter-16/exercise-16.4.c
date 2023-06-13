#include <stdio.h>

int main()
{
	char str[80];
	char *s = str;
	int count = 0;
	
	printf("\nEnter the string:\n");
	gets(str);
	
	while(*s)
	{
		if(*s=='a'||*s=='e'||*s=='i'||*s=='o'||*s=='u')
		{
			s++;
			if(*s=='a'||*s=='e'||*s=='i'||*s=='o'||*s=='u')
			{
				count++;
			}
		}
		s++;
	}
	
	printf ("No. of occurrences: %d\n", count);
	
	return 0;
}
