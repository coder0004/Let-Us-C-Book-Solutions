#include <stdio.h>
#include <math.h>

int main()
{
	int i, n=11;
	float arrx[]={34.22,39.87,41.85,43.23,40.06,53.29,
	              53.29,54.14,49.12,40.71,55.15};
	float arry[]={102.43,100.93,97.43,97.81,98.32,98.32,
	              100.07,97.08,91.59,94.85,94.65};
	float sx=0.0, sy=0.0,sxy=0.0,sxs=0.0,sys=0.0;
	float nume, deno, result;
	
	for(i=0; i<11; i++)
	{
		sx = sx + arrx[i];  //summation of x.
		
		sy = sy + arry[i];  //summation of y.
		
		sxy = sxy + arrx[i] * arry[i];  //summation of xy.
		
		sxs = sxs + arrx[i] * arrx[i];  //summation of square of x.
		
		sys = sys + arry[i] * arry[i];  //summation of square of y.
	}
	
	printf ("\n\n%c X = %.2f\n", 228, sx);
    printf ("%c Y = %.2f\n", 228, sy);
    printf ("%c XY = %.2f\n", 228, sxy);
    printf ("%c X*X = %.2f\n", 228, sxs);
    printf ("%c Y*Y = %.2f\n", 228, sys);
	
	nume = (sxy - sx * sy);
	
	deno = (sqrt((n*sxs - sx * sx) * (n*sys - sy * sy)));
	
	result = nume / deno;
	
	printf ("\n\n(Numerator) = %f\n", nume);
    printf ("(Denominator) = %f\n", deno);
	printf("Correlation coefficient: %f", result);
	
	return 0;
}
