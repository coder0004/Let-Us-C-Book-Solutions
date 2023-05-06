#include<stdio.h>

int sum_natural(int);

int main()
{
	int num = 0, sum;
	
	sum = sum_natural(num);
	
	printf("The sum of first natural number:%d", sum);
	
	return 0;
}

int sum_natural(int num)
{
	int sum;
	
	if(num==25)
	{
		return(sum);
	}
	else
	{
		sum = num + sum_natural(++num);    // By recursion.
		num = num + 1;                     // or num += 1;
		return(sum);
	}	
}
