#include<stdio.h>
int main()
{
	float power;
	float n1, n2;
	int i;
	
	printf("Enter number1 & number2:");
	scanf("%f%f", &n1, &n2);
	
	power = i = 1;
	while( i <= n2)
	{
		power = power*n1;
		i++;
	}
	printf("%f to the power %f is %f", n1, n2, power);
	return 0;
}
