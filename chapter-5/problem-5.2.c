#include<stdio.h>
int main()
{
	int fact, i, num;
	
	printf("Enter any number:");
	scanf("%d", &num);
	fact = i = 1;
	while(i <= num)
	{
	fact = fact*i;
	i++;
    }
	printf("Factorial:%d",fact);
	return 0;
}
