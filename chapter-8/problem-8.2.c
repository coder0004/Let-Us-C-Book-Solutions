#include<stdio.h>
float power(float, float);
int main()
{
	float num1, num2;
	printf("Enter two numbers:");
	scanf("%f%f", &num1, &num2);
	power(num1,num2);
	printf("%.2f raise to the power %.2f is - %2.2f", num1, num2, power(num1,num2));
	return 0;
}
float power(float x, float y)
{
	float result=1;
	for(int i=1;i<=y;i++)
	result=result*x;
	return(result);
}
