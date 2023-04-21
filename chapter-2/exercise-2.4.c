#include<stdio.h>
#include<math.h>
int main()
{
	float temp,vel,wcf;
	printf("Enter the Temperature and Wind Velocity:");
	scanf("%f%f",&temp,&vel);
	wcf=35.74+0.6215*temp+(0.4275*temp-35.75)*pow(vel,0.16);
	printf("The Wind Chill Factor is:%f",wcf);
	return 0;
}
