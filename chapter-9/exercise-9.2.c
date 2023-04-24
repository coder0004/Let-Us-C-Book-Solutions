#include<stdio.h>
#include<math.h>

float area_tri(int, int, int);

int main()
{
	int a, b, c;
	float ar;
	
	printf("Enter the sides of triangle:");
	scanf("%d%d%d", &a, &b, &c);
	
	ar = area_tri(a, b, c);
	
	printf("Area of triangle:%f", ar);
	
	return 0;
}
float area_tri(int x, int y, int z)
{
	float s, area;
	
	s=(x+y+z)/2;
	area = sqrt(s*(s-x)*(s-y)*(s-z));
	
	return(area);
}
