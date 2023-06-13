#include <stdio.h>
#include <string.h>

int main()
{
	char *str[] = {
	"Rajesh", "Ashish", "Millind",
	"Pushkar", "Aakash"};
	char *t;
	int i, j;
	
	for(i=0; i<5; i++) // for first name.
	{
		for(j=i+1; j<5; j++)  // for access next name.
		{
			if(strcmp(str[i], str[j]) > 0) // compairing names.
			{
				t = str[i]; str[i] = str[j]; str[j] = t;  // sorting.
			}
		}
	}
	for(i=0; i<5; i++)
	{
		printf("%s\t", str[i]);
	}
	
	return 0;
}
