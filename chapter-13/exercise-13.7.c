#include <stdio.h>
#include <math.h>

int main()
{
	int i, plot;
	float angle[6], a[6], b[6], area[6], largest=0.0;
	
	for(i=0; i<6; i++)
	{
		//taking inputs.
		printf("\nEnter the values:-");
		
		printf("\na%d:", i+1);
		scanf("%f", &a[i]);
		
		printf("\nb%d:", i+1);
		scanf("%f", &b[i]);
		
		printf("\nangle%d:", i+1);
		scanf("%f", &angle[i]);
		
		//finding area by formula.
		area[i] = (1.0/2)*a[i]*b[i]*sin(angle[i]);
		
		//note the largest value area.
		if(area[i]>largest)
		{
			largest = area[i];
			plot = i;
		}	
	}
	
	//print all the plots.
	
	printf("\n\nEntered plot dimentions and area is:-\n");
	printf("\nplot\t a\t b\t angle\n");
	
	for(i=0; i<5; i++)
	{
		printf("\n%d\t %.2f\t %.2f\t %.2f\n", i+1, a[i], b[i], angle[i]);
	}
	
	printf ("\n\nLargest Triangular Area = %.3f:", largest);
    printf ("\n\na = %.2f\tb = %.2f\tangle = %.2f", a[plot], b[plot], angle[plot]);
	
	return 0;
}
