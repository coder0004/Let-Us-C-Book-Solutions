#include <stdio.h>
#include <string.h>

int main()
{
	char str[20];
	int digit, sum, multiple, len, i;
	
	printf("\nEnter credit card number:");
	scanf("%s", str);
	
	len = strlen(str);
	sum = 0;
	
	for(i=0; i<16; i++)
	{
		digit = str[i]-48;
		
		if(i%2==0)
		{
			multiple = digit * 2;
			digit = multiple<10 ? multiple : multiple-9;
		}
		sum += digit; // or sum = sum+digit;
	}
	printf("\nsum:%d", sum);
	
	if(sum%10 == 0)
	printf("\nValid card number.");
	
	else
	printf("\nInvalid card number.");
	
	return 0;
}
