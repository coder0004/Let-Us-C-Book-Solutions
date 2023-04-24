#include<stdio.h>
int main()
{
	int i, j;
	float fact, sum=0.0;
	
	for(i=1;i<=7;i++)
	{
		fact=1.0;
		for(j=1;j<=i;j++)
		{
			fact=fact*j; // calculations of factorial.
		}
			sum=sum+(i/fact); // calculates the total sum from 1 to 7.
	}
	printf("Sum of series:%f\n", sum);
	return 0;
}
