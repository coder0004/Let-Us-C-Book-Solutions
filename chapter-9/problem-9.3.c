#include<stdio.h>
#include<math.h>

float num(float, int);
float den(int);

int main()
{
	float x, n, d, term, sum, oldsum;
	int i, j;
	
	printf("Enter the number x:");
	scanf("%f", &x);
	
	i=j=1;
	sum=0;
	
	while(1)
	{
		n=num(x, j);
		d=den(j);
		term=n/d;
		oldsum=sum;
		(i%2==0) ? sum=sum-term : (sum=sum+term);
		if(abs(sum-oldsum)<0.00001)
		break;
		i++;
		j+=2;
	}
	printf("sum=%f", sum);
	
	return 0;
}

float num(float y, int j)
{
	float k=1;
	int m;
	for(m=1;m<=j;m++)
	k*=y;
	return(y);
}

float den(int j)
{
	int m;
	float h=1;
	for(m=1;m<=j;m++)
	h=h*m;
	return(h);
}
