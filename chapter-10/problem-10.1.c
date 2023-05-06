#include<stdio.h>

int sum(int);

int main()
{
	int num;
	
	printf("Enter the number:");
	scanf("%d", &num);
	
	sum(num);
	
	printf("sum of the digits:%d", sum(num));
	
	return 0;
}

int sum(int num)
{
	int s, rem;
	
	if(num != 0)
	{
		rem = num % 10;
		s = rem + sum(num/10); //using recursion.
	}
	
	else
	{
		return 0;
	}
	
	return s;
}
