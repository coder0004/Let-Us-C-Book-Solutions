#include<stdio.h>
#include<math.h>
int main()
{
	float angle,s,c,t;
	printf("\nEnter any angle:");
	scanf("%f",&angle);
	angle=angle*3.14/180;
	s=sin(angle);
	c=cos(angle);
	t=tan(angle);
	printf("\nsin=%f\ncos=%f\ntan=%f",s,c,t);
	return 0;
}
