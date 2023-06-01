#include <stdio.h>
#include <math.h>

int main()
{
	int i, n=15;
	float sum, mean, stdd;
	int array[] = {-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
	
	// for finding mean.
	sum = 0;
	for(i=0; i<15; i++)
	{
		sum = sum + array[i];
	}
	
	mean = sum/n;
	
	
	// for finding standard deviation.
	sum = 0;
	for(i=0; i<15; i++)
	{
		sum = sum + pow(array[i]-mean, 2);
	}
	
	stdd = sqrt(sum)/n;
	
	for(i=0; i<15; i++)
	{
		printf ("%d ", array[i]);
		
    }
        printf ("\nMean = %f\n", mean);
        printf ("Standard Deviation = %f\n\n", stdd);


	
	return 0;
}
