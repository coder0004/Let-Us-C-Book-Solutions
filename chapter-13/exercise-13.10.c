#include <stdio.h>
#include <math.h>

int main()
{
	int i, x[10], y[10];;
	float sum=0.0;
	
	for(i=0; i<10; i++)
	{
		printf("X[%d]:", i+1);
		scanf("%d", &x[i]);
		printf("Y[%d]:", i+1);
		scanf("%d", &y[i]);
	}
	
	for(i=0; i<9; i++)
	{
		sum = sum + sqrt(pow((x[i+1]-x[i]),2)+pow((y[i+1]-y[i]),2));
	}
	
	printf("Distance of first point from last point = %.2f",sum);
	
	return 0;
}
