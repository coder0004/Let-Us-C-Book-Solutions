#include<stdio.h>
int fact(int);
int main()
{
	int num, result;
	printf("Enter any number:");
	scanf("%d", &num);
	fact(num);
	printf("The factorial of %d is - %d", num, fact(num));
	return 0;
}
int fact(int num)
{
	int result=1;
	for(int i=1;i<=num;i++)
	result=result*i;
	return (result);
}
