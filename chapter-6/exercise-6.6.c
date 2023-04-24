#include<stdio.h>
#include<math.h>
int main()
{
	int pop;
	float p=100000, r=10;
	
	for(int i=1;i<=10;i++)
	{
		pop=p/pow(1+r/100,i);
		printf("Population %d is - %d\n", i, pop);
	}
	return 0;
}

