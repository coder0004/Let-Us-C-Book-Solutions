#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,theta;
	printf("Enter the X and Y coordinates:");
	scanf("%f%f",&x,&y);
	r=sqrt(x*x+y*y);
	theta=atan(y/x);
	printf("r=%f,theta=%f",r,theta);
	return 0;
}
