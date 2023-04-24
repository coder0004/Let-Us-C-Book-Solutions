#include<stdio.h>
#include<math.h>
int main()
{
	float n, q, p, r, a;
	
	for(int i=0;i<=10;i++)
	{
		printf("Enter principal compound:");
		scanf("%f", &p);
		
		printf("Enter annual rate:");
		scanf("%f"), &r;
		
		printf("Enter number of years:");
		scanf("%f", &n);
		
		printf("Enter intrest compound:");
		scanf("%f", &q);
		
		a=p*pow((1+r/q),n*q); //formula for calculations.
		
		printf("The Amount:%f", a);
	}
	return 0;
}
