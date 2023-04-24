#include<stdio.h>
#include<math.h>
int main()
{
	float x, y, p, q, res, sum=0.0;
	
	printf("Enter the value of x : ");
	scanf("%f", &x);
	
	y=(x-1)/x;
	
	for(int i=2;i<=7;i++)
	{
		p=pow(y,i);
		q=p/2;
		sum=sum+q;
	}
	res=y+sum;
	printf("Sum of first seven term of the series : %f", res);
	return 0;
}
