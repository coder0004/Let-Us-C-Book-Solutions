#include<stdio.h>
void roman(int yr)
{
	while(yr)
	{
		if(yr>=1000)
		{
			printf("m");
			yr=yr-1000;
		}
		else if(yr>=500)
		{
			printf("d");
			yr=yr-500;
		}
		else if(yr>=100)
		{
			printf("c");
			yr=yr-100;
		}
		else if(yr>=50)
		{
			printf("l");
			yr=yr-50;
		}
		else if(yr>=10)
		{
			printf("x");
		    yr=yr-10;
		}
		else if(yr>=5)
		{
			printf("v");
			yr=yr-5;
		}
		else if(yr>=1)
		{
			printf("i");
			yr=yr-1;
		}
	}
}
int main()
{
	int year;
	printf("Enter the year:");
	scanf("%d", &year);
	roman(year);
	return 0;
}
