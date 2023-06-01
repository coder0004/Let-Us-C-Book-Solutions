#include <stdio.h>
#include <math.h>

int main()
{
	int i, n=10;
	float mx=0.0, my=0.0, sx=0.0, sy=0.0, 
	a, b, nume, deno, sxs=0.0, sxy=0.0;
	float arrx[]={3.0,4.5,5.5,6.5,7.5,8.5,8.0,9.0,9.5,10.0};
	float arry[]={1.5,2.0,3.5,5.0,6.0,7.5,9.0,10.5,12.0,14.0};
	
	for(i=0; i<10; i++)
	{
		sx = sx + arrx[i];  // summation of x.
		
		sy = sy + arry[i];  // summation of y.
		
		sxs = sxs + arrx[i] * arrx[i];  // summation of square of x.
		
		sxy = sxy + arrx[i] * arry[i];  // summation of square of y.
		
	}
	
	printf ("\n\n%c X = %.2f\n", 228, sx);
    printf ("%c Y = %.2f\n", 228, sy);
    printf ("%c XY = %.2f\n", 228, sxy);
    printf ("%c X*X = %.2f\n", 228, sxs);

	
	mx = sx / n;  // mean of x.
	my = sy / n;  // mean of y.
	
	b = (n * sxy - sx * sy) / (n * sxs - sx * sx);
	
	a = my - b * mx;
	
	printf("value of a:%f\n", a);
	printf("Value of b:%f\n", b);
	printf("Equation of the line:Y = %.2f*X%+.2f", b, a);
	
	return 0;
}
