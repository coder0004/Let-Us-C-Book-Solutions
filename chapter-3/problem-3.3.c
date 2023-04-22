#include<stdio.h>
int main()
{
	int yr;
	printf("Enter the Year:");
	scanf("%d",&yr);
	if(yr%4==0)
	{
		if(yr%100==0)
		{
			if(yr%400==0)
			{
				printf("Year is a leap year.");
			}
			else
			printf("Year is not a leap year.");
		}
		else
		printf("Year is a leap year.");
	}
	else
	printf("Year is not a leap year.");
	return 0;
}
