#include <stdio.h>

int main()
{
	char str[20];
	int sum=0, i;
	
	printf("\nEnter string containing numbers only:");
	scanf("%s", str);
	
	for(i=0; str[i]!='\0'; i++)
	{
		if(str[i]>=48 && str[i]<=57)
		{
			sum = sum*10 + (str[i]-48);
		}
		else
		{
			printf("\nInvalid string!");
			return 1;
		}
	}
	
	printf("\nInteger numbers:%d", sum);
	
	return 0;
}
