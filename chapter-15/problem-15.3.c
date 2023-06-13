#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];
	char lastbutoneterm[20]="A";
	char lastterm[20]="B";
	int i;
	
	for(i=0; i<5; i++)
	{
		str(lastterm);
		strcpy(str, lastterm);
		strcat(str, lastbutoneterm);
		
		printf("%s\n", str);
		
		strcpy(lastbutoneterm, lastterm);
		strcpy(lastterm, str);
	}
	
	return 0;
}
