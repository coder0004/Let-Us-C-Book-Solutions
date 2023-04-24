/* 
Taylor Series : 
sin(x) = x - (x^3/3!) + (x^5/5!) - (x^7/7!)........
 */

#include<stdio.h>
#include<math.h>

void calc(float, float*);
double fact(int);


int main()
{
	float radian, result;
	int x;
	
	printf("Enter the value of x in degree:");
	scanf("%d", &x);
	
	radian = x * (3.14159/180.0); //convert degree to radian.
	
	calc(radian, &result);
	
	printf("sin(%d)=%f", x, result);
	return 0;
}


double fact(int num)
{
	double sum = 1;
	
	for(int i=1; i<=num; i++)
	{
		sum = sum * i;
	}
	return(sum);
}


void calc(float rad, float *res)
{
	int n=1, sign=1;
	
	for(int i=1; n<=5; i=i+2)
	{
		*res += sign * (pow(rad, i) / fact(i)); // or *res = *res + sign * (pow(rad, i) / fact(i));
		n += 1; // or n = n + 1;
		sign *= -1; // or sign = sign * -1;
	}	
}
