#include<stdio.h>
#include<math.h>
int main()
{
	int angle;
	
	printf("Enter the Angle in degree:");
	scanf("%d", &angle);
	angle = angle * 3.14 / 180;
	
	if(sin(angle)*sin(angle) + cos(angle)*cos(angle) == 1)
	printf("“sum of squares of sin & cos is equal to 1\n");
	else
	printf("“sum of squares of sin & cos is not equal to 1\n");
	return 0;
}
