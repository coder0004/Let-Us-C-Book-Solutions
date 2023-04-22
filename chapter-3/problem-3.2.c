#include<stdio.h>
int main()
{
	int num;
	printf("Enter any integer:");
	scanf("%d",&num);
	if(num%2==0)
		printf("\nThe integer is an even number.");
	else
		printf("\nThe integer is an odd number.");
	return 0;
}
