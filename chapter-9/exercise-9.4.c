#include<stdio.h>

int gcd(int, int);

int main()
{
	int a, b;
	
	printf("Enter the first digit:");
	scanf("%d", &a);
	
	printf("Enter the second digit:");
	scanf("%d", &b);
	
	printf("Greatest common divisor of (%d, %d):%d", a, b, gcd(a, b));
	
	return 0;
}

int gcd(int a, int b)
{
	int temp;  // taking a temp value.
	
	while(b != 0)
	{
		temp = b;
		b = a % b;
		a = temp;
	}
	return (a);
}
