#include<stdio.h>
void year();
int main()
{
	int yr;
	printf("Enter the year:");
	scanf("%d", &yr);
	year(yr);
	return 0;
}
void year(int yr)
{
	if(yr%4==0 && yr%100!=0 || yr%400==0)
	printf("year is leap year.");
	else
	printf("year is not leap year.");
}
