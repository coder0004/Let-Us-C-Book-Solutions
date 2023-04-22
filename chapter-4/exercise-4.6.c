#include<stdio.h>
int main()
{
	int yr;
	
	printf("Enter the year:");
	scanf("%d", &yr);
	
	/* Logic building by use of Conditional operators */
	if(yr%100 == 0 ? (yr%400 == 0 ? (printf("Leap year."))
	: (printf("Not a Leap year.")))
	: (yr%4 == 0 ? (printf("Leap year."))
	: (printf("Not a Leap year."))));
	
	return 0;
}
