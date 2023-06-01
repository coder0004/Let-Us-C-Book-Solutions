#include<stdio.h>
#include"areaperi.h"
int main()
{
	float r, x, y, z, b, h, side;
	
	printf("Enter base and height of triangle:");
	scanf("%f%f", &b, &h);
	
	printf("Area of triangle:%.2f\n", TRI_AREA(b,h));
	
	printf("\n\nEnter 3-sides of triangle:");
	scanf("%f%f%f", &x, &y, &z);
	
	printf("Perimeter of triangle:%.2f\n", TRI_PERI(x,y,z));
	
	printf("\n\nEnter any 1-side of square:");
	scanf("%f", &side);
	
	printf("Area of square:%.2f\n", SQR_AREA(side));
	
	printf("Perimeter of square:%.2f\n", SQR_PERI(side));
	
	printf("\n\nEnter radius of circle:");
	scanf("%f", &r);
	
	printf("Area of circle:%.2f\n", CIR_AREA(r));
	
	printf("Circumference of circle:%.2f\n", CIR_CIRCUM(r));
	
	return 0;
}
